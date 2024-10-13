#pragma once
#define N_MAX 2000
#include "ofMain.h"

class ofApp : public ofBaseApp{

	int pixMax, pixMin, x[N_MAX], y[N_MAX], i, n, step, r, deta[N_MAX], cx, cy;




	public:
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
