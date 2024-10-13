#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
#define N_MAX;

		N_MAX = 1000;
		int x1[N_MAX];
		int x2[N_MAX];
		int y1[N_MAX];
		int y2[N_MAX];
		int n;
		int x1;
		int x2;
		int y1;
		int y2;
		int dice;
		int i;

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
