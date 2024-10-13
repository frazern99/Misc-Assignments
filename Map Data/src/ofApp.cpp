#include "ofApp.h"

int ofApp::getXSamples(float xmin, float xmax, float step, float x[]) {
	int n;

	n = (xmax - xmin) / step + 1;

	for (int i = 0; i < n; i++) {

		x[i] = xmin + step * i;


	}

	return n;
}


void ofApp::getDampedCosSamples(int n, float x[], float y[], float alpha, float w) {


	for (int i = 0; i < n; i++) {

		y[i] = (exp(-x[i] * alpha))*cos(w*x[i]);


	}


}

void ofApp::getGaussianSamples(int n, float x[], float y[], float alpha, float mu) {


	for (int i = 0; i < n; i++) {

		y[i] = exp(alpha*pow((x[i] - mu), 2));


	}



}

void ofApp::getSincSamples(int n, float x[], float y[], float alpha) {

	for (int i = 0; i < n; i++) {

		y[i] = (sin(alpha*PI*x[i])) / (alpha*PI*x[i]);


	}




}

float ofApp::map(float in, float inMin, float inMax, float outMin, float outMax) {
	float m, b, out;

	m = (outMax - outMin) / (inMax - inMin);

	b = out - (m * in);

	out = (m * in) + b;

	return out;
}

void ofApp::map_vec(int n, float in[], float out[], float inMin, float inMax, float outMin, float outMax) {

	for (int i = 0; i < n; i++) {

		out[i] = map(in[i], inMin, inMax, outMin, outMax);

	}


}
void ofApp::printArray(int d, float x[], char label[])
{
	int i;

	printf("\n%s: ", label);

	for (i = 0; i < d; ++i)
	{
		printf("%.2f ", x[i]);
	}
}
//--------------------------------------------------------------
void ofApp::setup() {
	float x[N_MAX];
	float y1[N_MAX];
	float y2[N_MAX];
	float y3[N_MAX];

	n = getXSamples(0, 1000, 50, x);
	getDampedCosSamples(n, x, y1, 2, 2);
	getGaussianSamples(n, x, y2, 2, 2);
	getSincSamples(n, x, y2, 2);


	map_vec(n, x, xPix, 0, 200, 0, 1000);
	map_vec(n, x, yPix, 0, 200, 0, 1000);
}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
	ofSetBackgroundColor(255, 255, 255);

	int i;

	for (i = 0; i < n; ++i)
	{
		ofSetBackgroundAuto(false);
		ofSetColor(0, 0, 255);
		ofSetLineWidth(10.0f);
		ofFill();
		ofDrawCircle(xPix[i], yPix[i], 1);
	}
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
