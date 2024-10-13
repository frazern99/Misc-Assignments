#pragma once
#define N_MAX 8000
#include "ofMain.h"
#include <iostream>
#include <math.h>
#include <string>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
#include<ios> 
#include<limits>

using namespace std;

class ofApp : public ofBaseApp{

	public:
		int i,k,l, id,on,found,y,z;
		int infoNum[N_MAX];
		
		string answer, name, address,search;
		struct information {
			char name[30];
			int id;
			char address[50];

		};
		information searchTemp;
		information lastname[N_MAX];
		information info[N_MAX];

		
			
		
		
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
