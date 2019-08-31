#ifndef Snake_h
#define Snake_h

#include <Arduino.h>

class Snake : public Gameplayer
{      
    Renderer * _lcd;
    uint8_t _x = 1;
    uint8_t _p = 1;

    byte snake[252];
    
    public:
      Snake(Renderer *lcd)
      {
        _lcd = lcd;

        for (byte i = 0; i < 251; i++) {
          snake[i] = i; 
        }
      };
        
      void update_inputs()
      {
      }
      
      void update_objects()
      {
        if (_x >= 84 || _x <= 0) {
          _p *= -1;
        }

        _x += 10 * _p;
      }
      
      void handle_actions()
      {
      }
      
      void rendering()
      {
        _lcd->fillDisplayBuffer();
        _lcd->drawImage(test_Bitmap, sizeof(test_Bitmap), _x, 0, 47, 39);
        _lcd->showDisplayBuffer();
      }
  
};

#endif
