#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	dice = rand() % 4;
	x1, x2, y1, y2 = rand()%1000;
	
	n = 50;

	ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void ofApp::update(){

	dice = rand() % 4;

	x2 = x1;
	y2 = y1;

	if (x1 > 1000)
	{
		x1 = x1 - 10;
	}

	if (x1 < 0)
	{
		x1 = x1 + 10;
	}

	if (y1 > 1000)
	{
		y1 = y1 - 10;
	}

	if (y1 < 0)
	{
		y1 = y1 + 10;
	}
	
	if (dice == 0)
	{
		x1 = x1 + 10;
	}

	if (dice == 1)
	{
		x1 = x1 - 10;
	}

	if (dice == 2)
	{
		y1 = y1 + 10;
	}

	if (dice == 3)
	{
		y1 = y1 - 10;
	}
	



}

//--------------------------------------------------------------
void ofApp::draw(){
	ofDrawLine(x1, y1, x2, y2);
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
