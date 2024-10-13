#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
#include "ofMain.h"

#define N_MAX 500000

#define YSTEP 0.25

#define XSTEP 0.50


public:
	int n;

	float xPix[N_MAX];

	float yPix[N_MAX];







	int getXSamples(float xMin, float xMax, float step, float x[]);

	void getDampedCosSamples(int n, float x[], float y[], float alpha, float w);

	void getGaussianSamples(int n, float x[], float y[], float alpha, float mu);

	void getSincSamples(int n, float x[], float y[], float alpha);

	float map(float in, float inMin, float inMax, float outMin, float outMax);

	void map_vec(int n, float in[], float out[], float inMin, float inMax, float outMin, float outMax);

	void printArray(int dim, float x[], char label[]);

	
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
