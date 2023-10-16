//
//  Particle.hpp
//  Coordinates
//
//  Created by thomas lawrence on 16/10/2023.
//

#ifndef Particle_hpp
#define Particle_hpp

#include "ofMain.h"
#include <stdio.h>

class Particle {
  public:
    ofVec2f position;
    ofVec2f velocity;
    void Draw();
    void Process();
    ofPolyline helloWorldShape;
};

#endif /* Particle_hpp */
