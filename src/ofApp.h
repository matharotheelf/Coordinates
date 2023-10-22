#pragma once

#include "ofMain.h"
#include "Particle.hpp"
#include "WordMass.hpp"

class ofApp : public ofBaseApp{

	public:
        ofImage helloWorld;
        ofVec2f velocity;
        ofVec2f position;
        static constexpr int PARTICLEWIDTHCOUNT = 100;
        static constexpr int PARTICLEHEIGHTCOUNT = 40;
        Particle particles[PARTICLEWIDTHCOUNT * PARTICLEHEIGHTCOUNT];
        vector<WordMass> wordMasses = {
            WordMass(glm::vec2(100, 100)),
            WordMass(glm::vec2(100, 120)),
            WordMass(glm::vec2(100, 140)),
            WordMass(glm::vec2(100, 160)),
            WordMass(glm::vec2(100, 180)),
            WordMass(glm::vec2(100, 200)),
            WordMass(glm::vec2(100, 220)),
            WordMass(glm::vec2(100, 240)),
            WordMass(glm::vec2(100, 260)),
            WordMass(glm::vec2(100, 280)),
            WordMass(glm::vec2(100, 300)),
            
            WordMass(glm::vec2(120, 200)),
            WordMass(glm::vec2(140, 200)),
            WordMass(glm::vec2(160, 200)),
            WordMass(glm::vec2(180, 200)),
            
            WordMass(glm::vec2(200, 100)),
            WordMass(glm::vec2(200, 120)),
            WordMass(glm::vec2(200, 140)),
            WordMass(glm::vec2(200, 160)),
            WordMass(glm::vec2(200, 180)),
            WordMass(glm::vec2(200, 200)),
            WordMass(glm::vec2(200, 220)),
            WordMass(glm::vec2(200, 240)),
            WordMass(glm::vec2(200, 260)),
            WordMass(glm::vec2(200, 280)),
            WordMass(glm::vec2(200, 300)),
            
            WordMass(glm::vec2(300, 100)),
            WordMass(glm::vec2(300, 120)),
            WordMass(glm::vec2(300, 140)),
            WordMass(glm::vec2(300, 160)),
            WordMass(glm::vec2(300, 180)),
            WordMass(glm::vec2(300, 200)),
            WordMass(glm::vec2(300, 220)),
            WordMass(glm::vec2(300, 240)),
            WordMass(glm::vec2(300, 260)),
            WordMass(glm::vec2(300, 280)),
            WordMass(glm::vec2(300, 300)),
            
            WordMass(glm::vec2(320, 100)),
            WordMass(glm::vec2(340, 100)),
            WordMass(glm::vec2(360, 100)),
            WordMass(glm::vec2(380, 100)),
            WordMass(glm::vec2(400, 100)),
            
            WordMass(glm::vec2(320, 200)),
            WordMass(glm::vec2(340, 200)),
            WordMass(glm::vec2(360, 200)),
            WordMass(glm::vec2(380, 200)),
            WordMass(glm::vec2(400, 200)),
            
            WordMass(glm::vec2(320, 300)),
            WordMass(glm::vec2(340, 300)),
            WordMass(glm::vec2(360, 300)),
            WordMass(glm::vec2(380, 300)),
            WordMass(glm::vec2(400, 300)),
            
            WordMass(glm::vec2(500, 100)),
            WordMass(glm::vec2(500, 120)),
            WordMass(glm::vec2(500, 140)),
            WordMass(glm::vec2(500, 160)),
            WordMass(glm::vec2(500, 180)),
            WordMass(glm::vec2(500, 200)),
            WordMass(glm::vec2(500, 220)),
            WordMass(glm::vec2(500, 240)),
            WordMass(glm::vec2(500, 260)),
            WordMass(glm::vec2(500, 280)),
            WordMass(glm::vec2(500, 300)),
            
            WordMass(glm::vec2(520, 300)),
            WordMass(glm::vec2(540, 300)),
            WordMass(glm::vec2(560, 300)),
            WordMass(glm::vec2(580, 300)),
            WordMass(glm::vec2(600, 300)),
            
            WordMass(glm::vec2(700, 100)),
            WordMass(glm::vec2(700, 120)),
            WordMass(glm::vec2(700, 140)),
            WordMass(glm::vec2(700, 160)),
            WordMass(glm::vec2(700, 180)),
            WordMass(glm::vec2(700, 200)),
            WordMass(glm::vec2(700, 220)),
            WordMass(glm::vec2(700, 240)),
            WordMass(glm::vec2(700, 260)),
            WordMass(glm::vec2(700, 280)),
            WordMass(glm::vec2(700, 300)),
            
            WordMass(glm::vec2(720, 300)),
            WordMass(glm::vec2(740, 300)),
            WordMass(glm::vec2(760, 300)),
            WordMass(glm::vec2(780, 300)),
            WordMass(glm::vec2(800, 300)),
            
            WordMass(glm::vec2(900, 100)),
            WordMass(glm::vec2(900, 120)),
            WordMass(glm::vec2(900, 140)),
            WordMass(glm::vec2(900, 160)),
            WordMass(glm::vec2(900, 180)),
            WordMass(glm::vec2(900, 200)),
            WordMass(glm::vec2(900, 220)),
            WordMass(glm::vec2(900, 240)),
            WordMass(glm::vec2(900, 260)),
            WordMass(glm::vec2(900, 280)),
            WordMass(glm::vec2(900, 300)),
            
            WordMass(glm::vec2(920, 100)),
            WordMass(glm::vec2(940, 100)),
            WordMass(glm::vec2(960, 100)),
            WordMass(glm::vec2(980, 100)),
            
            WordMass(glm::vec2(920, 300)),
            WordMass(glm::vec2(940, 300)),
            WordMass(glm::vec2(960, 300)),
            WordMass(glm::vec2(980, 300)),
            
            WordMass(glm::vec2(1000, 100)),
            WordMass(glm::vec2(1000, 120)),
            WordMass(glm::vec2(1000, 140)),
            WordMass(glm::vec2(1000, 160)),
            WordMass(glm::vec2(1000, 180)),
            WordMass(glm::vec2(1000, 200)),
            WordMass(glm::vec2(1000, 220)),
            WordMass(glm::vec2(1000, 240)),
            WordMass(glm::vec2(1000, 260)),
            WordMass(glm::vec2(1000, 280)),
            WordMass(glm::vec2(1000, 300)),
            
            WordMass(glm::vec2(100, 400)),
            WordMass(glm::vec2(100, 420)),
            WordMass(glm::vec2(100, 440)),
            WordMass(glm::vec2(100, 460)),
            WordMass(glm::vec2(100, 480)),
            WordMass(glm::vec2(100, 500)),
            WordMass(glm::vec2(100, 520)),
            WordMass(glm::vec2(100, 540)),
            WordMass(glm::vec2(100, 560)),
            WordMass(glm::vec2(100, 580)),
            WordMass(glm::vec2(100, 600)),
            
            WordMass(glm::vec2(200, 400)),
            WordMass(glm::vec2(200, 420)),
            WordMass(glm::vec2(200, 440)),
            WordMass(glm::vec2(200, 460)),
            WordMass(glm::vec2(200, 480)),
            WordMass(glm::vec2(200, 500)),
            WordMass(glm::vec2(200, 520)),
            WordMass(glm::vec2(200, 540)),
            WordMass(glm::vec2(200, 560)),
            WordMass(glm::vec2(200, 580)),
            WordMass(glm::vec2(200, 600)),

            WordMass(glm::vec2(120, 600)),
            WordMass(glm::vec2(140, 600)),
            WordMass(glm::vec2(160, 600)),
            WordMass(glm::vec2(180, 600)),
            
            WordMass(glm::vec2(150, 520)),
            WordMass(glm::vec2(150, 540)),
            WordMass(glm::vec2(150, 560)),
            WordMass(glm::vec2(150, 580)),
            
            WordMass(glm::vec2(300, 400)),
            WordMass(glm::vec2(300, 420)),
            WordMass(glm::vec2(300, 440)),
            WordMass(glm::vec2(300, 460)),
            WordMass(glm::vec2(300, 480)),
            WordMass(glm::vec2(300, 500)),
            WordMass(glm::vec2(300, 520)),
            WordMass(glm::vec2(300, 540)),
            WordMass(glm::vec2(300, 560)),
            WordMass(glm::vec2(300, 580)),
            WordMass(glm::vec2(300, 600)),
            
            WordMass(glm::vec2(320, 400)),
            WordMass(glm::vec2(340, 400)),
            WordMass(glm::vec2(360, 400)),
            WordMass(glm::vec2(380, 400)),
            
            WordMass(glm::vec2(320, 600)),
            WordMass(glm::vec2(340, 600)),
            WordMass(glm::vec2(360, 600)),
            WordMass(glm::vec2(380, 600)),
            
            WordMass(glm::vec2(400, 400)),
            WordMass(glm::vec2(400, 420)),
            WordMass(glm::vec2(400, 440)),
            WordMass(glm::vec2(400, 460)),
            WordMass(glm::vec2(400, 480)),
            WordMass(glm::vec2(400, 500)),
            WordMass(glm::vec2(400, 520)),
            WordMass(glm::vec2(400, 540)),
            WordMass(glm::vec2(400, 560)),
            WordMass(glm::vec2(400, 580)),
            WordMass(glm::vec2(400, 600)),
            
            WordMass(glm::vec2(500, 400)),
            WordMass(glm::vec2(500, 420)),
            WordMass(glm::vec2(500, 440)),
            WordMass(glm::vec2(500, 460)),
            WordMass(glm::vec2(500, 480)),
            WordMass(glm::vec2(500, 500)),
            WordMass(glm::vec2(500, 520)),
            WordMass(glm::vec2(500, 540)),
            WordMass(glm::vec2(500, 560)),
            WordMass(glm::vec2(500, 580)),
            WordMass(glm::vec2(500, 600)),

            WordMass(glm::vec2(520, 400)),
            WordMass(glm::vec2(540, 400)),
            WordMass(glm::vec2(560, 400)),
            WordMass(glm::vec2(580, 400)),
            
            WordMass(glm::vec2(520, 500)),
            WordMass(glm::vec2(540, 500)),
            WordMass(glm::vec2(560, 500)),
            WordMass(glm::vec2(580, 500)),
            
            WordMass(glm::vec2(600, 400)),
            WordMass(glm::vec2(600, 420)),
            WordMass(glm::vec2(600, 440)),
            WordMass(glm::vec2(600, 460)),
            WordMass(glm::vec2(600, 480)),
            WordMass(glm::vec2(600, 500)),
            
            WordMass(glm::vec2(520, 520)),
            WordMass(glm::vec2(540, 540)),
            WordMass(glm::vec2(560, 560)),
            WordMass(glm::vec2(580, 580)),
            WordMass(glm::vec2(600, 600)),
            
            WordMass(glm::vec2(700, 400)),
            WordMass(glm::vec2(700, 420)),
            WordMass(glm::vec2(700, 440)),
            WordMass(glm::vec2(700, 460)),
            WordMass(glm::vec2(700, 480)),
            WordMass(glm::vec2(700, 500)),
            WordMass(glm::vec2(700, 520)),
            WordMass(glm::vec2(700, 540)),
            WordMass(glm::vec2(700, 560)),
            WordMass(glm::vec2(700, 580)),
            WordMass(glm::vec2(700, 600)),
            
            WordMass(glm::vec2(720, 600)),
            WordMass(glm::vec2(740, 600)),
            WordMass(glm::vec2(760, 600)),
            WordMass(glm::vec2(780, 600)),
            WordMass(glm::vec2(800, 600)),

            WordMass(glm::vec2(920, 420)),
            WordMass(glm::vec2(940, 440)),
            WordMass(glm::vec2(960, 460)),
            WordMass(glm::vec2(980, 480)),

            WordMass(glm::vec2(920, 580)),
            WordMass(glm::vec2(940, 560)),
            WordMass(glm::vec2(960, 540)),
            WordMass(glm::vec2(980, 520)),
            WordMass(glm::vec2(1000, 500)),
            
            WordMass(glm::vec2(900, 400)),
            WordMass(glm::vec2(900, 420)),
            WordMass(glm::vec2(900, 440)),
            WordMass(glm::vec2(900, 460)),
            WordMass(glm::vec2(900, 480)),
            WordMass(glm::vec2(900, 500)),
            WordMass(glm::vec2(900, 520)),
            WordMass(glm::vec2(900, 540)),
            WordMass(glm::vec2(900, 560)),
            WordMass(glm::vec2(900, 580)),
            WordMass(glm::vec2(900, 600))
        };

        ofPoint points[10];
    
		void setup() override;
		void update() override;
		void draw() override;
		void exit() override;

		void keyPressed(int key) override;
		void keyReleased(int key) override;
		void mouseMoved(int x, int y ) override;
		void mouseDragged(int x, int y, int button) override;
		void mousePressed(int x, int y, int button) override;
		void mouseReleased(int x, int y, int button) override;
		void mouseScrolled(int x, int y, float scrollX, float scrollY) override;
		void mouseEntered(int x, int y) override;
		void mouseExited(int x, int y) override;
		void windowResized(int w, int h) override;
		void dragEvent(ofDragInfo dragInfo) override;
		void gotMessage(ofMessage msg) override;
		
};
