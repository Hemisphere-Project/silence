#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    silence = new Silence(0,0,ofGetWidth(),ofGetHeight());
    silence->start();
}

//--------------------------------------------------------------
void testApp::update(){
    silence->update();
}

//--------------------------------------------------------------
void testApp::draw(){
    silence->draw();

}

void testApp::exit(){
    silence->stop();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
