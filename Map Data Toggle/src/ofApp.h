#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

#define N_MAX 5000

	

	public:
		float xGrid_step, yGrid_step; 
		int xGrid_n, yGrid_n; 
		float xGrid[N_MAX], yGrid[N_MAX];      
		int n, n1, n2;
		int j = 0;
		float xPix[N_MAX];
        float yPix1[N_MAX];
		
		float yPix2[N_MAX];
		
		float yPix3[N_MAX];
		
		float yPix4[N_MAX];
		float x[N_MAX];
		float y1[N_MAX];
		float y2[N_MAX];
		float y3[N_MAX];

		

	

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
