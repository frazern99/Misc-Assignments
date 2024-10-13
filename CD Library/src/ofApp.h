#pragma once

#include "ofMain.h"
#include "../Cdlib.h"
class ofApp : public ofBaseApp{

	public:
		CdLib library;
		int libraryNum;
		string artists[N_MAX];
		string titles[N_MAX];
		int year[N_MAX];
		string genres[N_MAX];
		string fans[N_MAX];
		string urls[N_MAX];
		int index[N_MAX];
		int n;
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
