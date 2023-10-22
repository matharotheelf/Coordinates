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

void Particle::Collide(vector<WordMass> &wordMasses)
    {
        if(velocity.length() != 0) {
            for(WordMass wordMass: wordMasses) {
                if(position.distance(wordMass.position) < 10){
                    velocity.set(0, 0);
                    return;
                }
            }
        }
    }
