#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	
	pixMax = 2*PI;
	pixMin = 0;
	n=4;

	step=(pixMax - pixMin) /n-1 ;
	r = 200;
	cx = 500;
	cy = 500;


	deta[0] = pixMin;
	x[0] = r * cos(pixMin)+cx;
	y[0] = r * sin(pixMin) + cy;

	for (i = 1; i < n; i++) {
		

		deta[i] = deta[i-1] + step;
		x[i] = r * cos(deta[i])+cx;
		y[i] = r * sin(deta[i])+cy;




	}




}

//--------------------------------------------------------------
void ofApp::update(){






}

//--------------------------------------------------------------
void ofApp::draw(){
	
	ofNoFill;
	ofDrawCircle(500, 500, 50);
	for (i = 0; i < n; i++) {
		ofDrawCircle(x[i], y[i], 50);





	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'i') {

		n = n + 1;
		if (n > 10) {

			n = 10;

		}

	}
	if (key == 'd') {

		n = n - 1;
		if (n < 10) {

			n = 0;

		}

	}


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
