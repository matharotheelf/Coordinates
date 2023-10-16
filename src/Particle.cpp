//
//  Particle.cpp
//  Coordinates
//
//  Created by thomas lawrence on 16/10/2023.
//
#include "Particle.hpp"

void Particle::Process()
    {
        position += velocity;
    }
    
void Particle::Draw()
    {
        ofDrawCircle(position, 5);
    }
