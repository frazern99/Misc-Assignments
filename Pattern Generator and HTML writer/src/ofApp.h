#pragma once

#include "ofMain.h"
#define N_MAX 4000
class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		float x[N_MAX], xMap[N_MAX], yMap[N_MAX], y[N_MAX], r[N_MAX], phi[N_MAX];
		int n;
		
		
		

		struct Line
		{
			float x1, y1, x2, y2;


		};

		typedef struct Line Line;

		struct Circle
		{
			float r, x, y;


		};

		typedef struct Circle Circle;

		struct Rectangle
		{
			float x, y, w, h;


		};

		typedef struct Rectangle Rectangle;

		struct Fill
		{
			int r, g, b;


		};

		typedef struct Fill Fill;

		struct Stroke
		{
			int *r, *g, *b, w;


		};
		typedef struct Stroke Stroke;

		struct Path
		{
			float n, *x, *y;


		};
		Path path;
		
		Fill fill;
		Stroke stroke;
		Line line;
		typedef struct Path Path;
		int ofApp::getXSamples(float xmin, float xmax, float step, float x[]);
		void ofApp::drawLine(Line line, Stroke stroke, Path path);
		void ofApp::drawCircle(Circle circle, Fill fill, Stroke stroke);
		void ofApp::drawRectangle(Rectangle rectangle, Fill fill, Stroke stroke);
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
