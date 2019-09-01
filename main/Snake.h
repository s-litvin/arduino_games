#ifndef Snake_h
#define Snake_h

#include <Arduino.h>

class Snake : public Gameplayer
{      
    #define UP 0
    #define DOWN 1
    #define LEFT 2
    #define RIGHT 3
    #define BUTTON 8

    char direction = RIGHT;
    uint8_t snakeSize = 4;
    uint8_t foodPosition = 255; // 255 out of range
    bool gameOver = false;

    Renderer * _lcd;

    byte snake[252];
    
    public:
      Snake(Renderer *lcd)
      {
        _lcd = lcd;

        pinMode(BUTTON, INPUT_PULLUP);

        initNewSnake();

      };
        
      void update_inputs()
      {
        if (!gameOver) {
          checkDirection();
        } else { // if gameOver == true
          waitPressingButton();
        }
      }
      
      void update_objects()
      {
        moveSnake();
        updateFood();
      }
      
      void handle_actions()
      {
        checkCollisions();
      }
      
      void rendering()
      {
        _lcd->fillDisplayBuffer();    
        
        if (!gameOver) {
          drawSnake();
          drawFood();
          _lcd->showDisplayBuffer();
        } else {
          _lcd->showDisplayBuffer();
          showScore();
        }
        
      }

      int getXPositionFromCellNumber(byte cell_number)
      {
        return (cell_number % 21) * 4;
      }

      int getYPositionFromCellNumber(byte cell_number)
      {
        return (cell_number / 21) * 4;
      }

      char getDirectionX()
      {
        return map(analogRead(A0), 0, 1024, -1, 2);
      }

      char getDirectionY()
      {
        return map(analogRead(A1), 0, 1024, -1, 2);
      }

      void updateFood()
      {
        if (foodPosition == 255) {
          foodPosition = random(0, 251);
        }
      }

      void checkDirection()
      {
        char xdirection = getDirectionX();
        char ydirection = getDirectionY();
        if (xdirection != 0 && direction != RIGHT && direction != LEFT) {
          if (xdirection > 0) {
              direction = LEFT;
          } else if (xdirection < 0) {
              direction = RIGHT;
          }
        } else if (ydirection != 0 && direction != DOWN && direction != UP) {
          if (ydirection > 0) {
              direction = UP;
          } else if (ydirection < 0) {
              direction = DOWN;
          }
        }
      }

      void waitPressingButton()
      {
        while(digitalRead(BUTTON)) {
          // while not pressed button, do nothing
        }
        gameOver = false;
        direction = RIGHT;
      }

      void drawFood()
      {
        _lcd->drawImage(
              circle_hollow4x4, sizeof(circle_hollow4x4), 
              getXPositionFromCellNumber(foodPosition), 
              getYPositionFromCellNumber(foodPosition), 
              4, 4);
      }

      void drawSnake()
      {
        for (byte i = 0; i < 251; i++) {
          if (snake[i] != 255) {
            _lcd->drawImage(
              circle4x4, sizeof(circle4x4), 
              getXPositionFromCellNumber(snake[i]), 
              getYPositionFromCellNumber(snake[i]), 
              4, 4);   
          }
        }
      }

      void showScore()
      {
        initNewSnake();
        _lcd->cursorToXY(8, 0);
        _lcd->LcdWriteString("Your score:");

        char text[5];
        sprintf(text, "%d", snakeSize);
        _lcd->cursorToXY(33, 2);
        _lcd->LcdWriteString(text);

        _lcd->cursorToXY(4, 4);
        _lcd->LcdWriteString("press button");
        
      }

      void initNewSnake()
      {
        // fill snake
        for (byte i = 0; i < 251; i++) {
          if (i <= snakeSize) {
            snake[i] =  snakeSize - i;
          } else {
            snake[i] = 255;  // 255 - cell is empty
          }
        }
      }

      void moveSnake () 
      {
    
        byte newPosition;
    
        switch (direction) {
          case UP:
            newPosition = (252 + snake[0] - 21) % 252;
            break;
          case DOWN:
            newPosition = (252 + snake[0] + 21) % 252;
            break;
          case LEFT:
            newPosition = (snake[0] - 1) % 21 + 21 * (snake[0] / 21);
            break;
          case RIGHT:
            newPosition = (snake[0] + 1) % 21 + 21 * (snake[0] / 21);
            break;
        }

        for (int index = 251; index >= 0; index--) {
          if (snake[index] == 255) {
            continue;
          }
          if (index > 0) {
            snake[index] = snake[index - 1];
          } else {  
            snake[index] = newPosition;
          } 
        }

      }

      void checkCollisions()
      {

        for (int index = 1; index < 251; index++) {
          if (snake[index] == 255) {
            break;
          }
          if (snake[index] == snake[0]) {
            gameOver = true;
          }
        }

        if (snake[0] == foodPosition) {
          snakeSize++;
          for (uint8_t index = snakeSize; index > 0; index--) {
            snake[index] = snake[index - 1];
          }
          snake[0] = foodPosition;
          foodPosition = 255;
        }


      }
           
  
};

#endif
