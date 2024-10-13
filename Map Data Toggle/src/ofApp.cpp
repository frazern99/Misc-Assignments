#define _CRT_SECURE_NO_WARNINGS
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

		y[i] = exp(-alpha * x[i]) * cos(w * x[i]);


	}


}

void ofApp::getGaussianSamples(int n, float x[], float y[], float alpha, float mu) {
	float f[N_MAX];

	for (int i = 0; i < n; i++) {
		f[i] = (x[i] - mu)*(x[i] - mu);
		y[i] = exp(-alpha*f[i]);


	}



}

void ofApp::getSincSamples(int n, float x[], float y[], float alpha) {

	for (int i = 0; i < n; i++) {

		y[i] = (sin(alpha*PI*x[i]))/(alpha*PI*x[i]);


	}




}

float ofApp::map(float in, float inMin, float inMax, float outMin, float outMax)
{
	float m,b, out;
	

	m = (outMax - outMin) / (inMax - inMin);

	b = outMax - m * inMax;

	out = m * in + b;

	return out;

}
void ofApp::map_vec(int n, float in[], float out[], float inMin, float inMax, float outMin, float outMax)
{
	int i;

	for (i = 0; i < n; ++i)
	{
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
void ofApp::setup(){
	
	
	
	
	float Data[N_MAX];
	int i;
	
	FILE *fp;

	fp=fopen("MCSF.txt","r");

		


	

	for (i = 0; i < n; ++i) {
		
		fscanf(fp, "%f", &Data[i]);
	}
	
	
	n1 = getXSamples(0, 1000, 100, xGrid);
	n2= getXSamples(0, 1000, 100, yGrid);
	n = getXSamples(0, 10, .1, x);
	getDampedCosSamples(n, x, y1, 0.5, 10);
	getGaussianSamples( n, x, y2,  1,  1);
	getSincSamples( n, x, y3, .5);
	
	map_vec(n, x, xPix, 0, 10, 0, 1000);
	
	map_vec(n, y1, yPix1, -1, 1, 0, 1000);
	
	map_vec(n, y2, yPix2, -1, 1, 0, 1000);

	map_vec(n, y3, yPix3, -1, 1, 0, 1000);
	
	map_vec(n, Data, yPix4, 0, 400, 0, 1000);
	
	printArray(n, yPix2, "x");

	fclose(fp);
}

//--------------------------------------------------------------
void ofApp::update(){
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	

	int i;

	
	
	if (j == 0) {
		for (i = 1; i < n; ++i)
		{

			ofDrawLine(xPix[i - 1], yPix1[i - 1], xPix[i], yPix1[i]);
		}
	}

	if (j == 1) {
		for (i = 1; i < n; ++i)
		{

			ofDrawLine(xPix[i - 1], yPix2[i - 1], xPix[i], yPix2[i]);
		}
	}

	if (j == 2) {
		for (i = 1; i < n; ++i)
		{

			ofDrawLine(xPix[i - 1], yPix3[i - 1], xPix[i], yPix3[i]);
		}
	}

	if (j == 3) {
		for (i = 1; i < n; ++i)
		{

			ofDrawLine(xPix[i - 1], yPix4[i - 1], xPix[i], yPix4[i]);
		}
	}
	
	for (i = 1; i < n1; ++i)
	{

		ofDrawLine(xGrid[i], 0,xGrid[i], 1000 );
	}

	for (i = 1; i < n2; ++i)
	{

		ofDrawLine(0, yGrid[i], 1000, yGrid[i]);
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	
	if (key== 'a') {
		j = j + 1;
		if (j > 3) {
			j = 0;
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
