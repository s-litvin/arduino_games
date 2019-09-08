#ifndef Particle_h
#define Particle_h

#include <Arduino.h>
#include <Vector.h>

class Particle
{   

    public:

      Vector * location;
      Vector * velocity;
      Vector * acceleration;
      float mass;

      Particle(float _x, float _y)
      {
        location = new Vector(_x, _y);
        velocity = new Vector(0, 0);
        acceleration = new Vector(0, 0);
        mass = 1;
      };

      void setAccelerationTo(Vector * vector, float magnitude)
      {
        vector->sub(location);
        vector->setMag(magnitude);

        acceleration->x = vector->x;
        acceleration->y = vector->y;
      }

      void applyForce(Vector * force)
      {
        acceleration->add(force);
      }

      void checkBorders()
      {
        if ((location->x > 80) || (location->x < 0)) {
            location->sub(velocity);
            velocity->x = velocity->x * -1;
            location->add(velocity);
        }
        if ((location->y > 44) || (location->y < 0)) {
          location->sub(velocity);
          velocity->y = velocity->y * -1;
          location->add(velocity);
        }
      }
};

#endif
