#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(255,255,0);
    position.set(512, 384);
    ofSetColor(0x000000);
    
    
    
    for (int indexWidth = 0; indexWidth < PARTICLEWIDTHCOUNT; indexWidth++)
     {
         for (int indexHeight = 0; indexHeight < PARTICLEHEIGHTCOUNT; indexHeight++) {
             Particle particle;
             particle.position = glm::vec2(ofGetScreenWidth()*indexWidth/PARTICLEWIDTHCOUNT, ofGetScreenHeight()*indexHeight/PARTICLEHEIGHTCOUNT);
             particle.velocity = glm::vec2(rand() % 20 - 10, rand() % 20 - 10);
             particles[indexHeight + PARTICLEHEIGHTCOUNT*indexWidth] = particle;
         }
     }
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int particleNumber = 0; particleNumber < PARTICLEWIDTHCOUNT * PARTICLEHEIGHTCOUNT; particleNumber++) {
        particles[particleNumber].Process();
        particles[particleNumber].Draw();
    }
}
//--------------------------------------------------------------
void ofApp::exit(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
