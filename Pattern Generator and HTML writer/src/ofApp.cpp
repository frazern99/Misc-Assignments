#include "ofApp.h"
int ofApp::getXSamples(float xmin, float xmax, float step, float x[]) {
	int n;

	n = (xmax - xmin) / step + 1;

	for (int i = 0; i < n; i++) {

		x[i] = xmin + step * i;


	}

	return n;
}
void ofApp::drawLine(Line line, Stroke stroke, Path path) {
	if (path.n == 0) {
		ofSetLineWidth(stroke.w);
		
		ofDrawLine(line.x1, line.y1, line.x2, line.y2);

	}
	else
	{
		for (int i = 0; i < path.n; i++) {
			ofSetColor(stroke.r[i], stroke.g[i], stroke.b[i]);
			ofDrawLine(path.x[i], path.y[i], path.x[i+1], path.y[i+1]);


}


	}

	



}
void ofApp::drawCircle(Circle circle, Fill fill, Stroke stroke) {
	ofFill();
	ofSetColor(fill.r, fill.g, fill.b);
	ofDrawCircle(circle.x, circle.y, circle.r );

	ofNoFill();
	ofSetLineWidth(stroke.w);
	ofSetColor(stroke.r[0], stroke.g[0], stroke.b[0]);
	ofDrawCircle(circle.x, circle.y, circle.r);


}
void ofApp::drawRectangle(Rectangle rectangle, Fill fill, Stroke stroke) {

	ofSetColor(fill.r, fill.g, fill.b);
	ofDrawRectangle(rectangle.x, rectangle.y, rectangle.w, rectangle.h);

	ofNoFill();
	ofSetLineWidth(stroke.w);
	ofSetColor(stroke.r[0], stroke.g[0], stroke.b[0]);
	ofDrawRectangle(rectangle.x, rectangle.y, rectangle.w, rectangle.h);






}




//--------------------------------------------------------------
void ofApp::setup(){
	n = getXSamples(-3, 3, .01, phi);
	for (int i = 0; i < n; i ++)
	{
		r[i] = tan(17 * phi[i]) + 1/(tan(17 * phi[i]));
		x[i] = r[i] * cos(phi[i]);
		y[i] = r[i] * sin(phi[i]);
		xMap[i] = ofMap(x[i], -10, 10, 0, 1000);
		yMap[i] = ofMap(y[i], -10, 10, 0, 1000);
	}
	path.x = (float *) malloc(n*sizeof(float));
	path.y = (float *)malloc(n * sizeof(float));
	path.n = n;
	for (int i = 0; i < n; i++) {
		path.x[i] = xMap[i];
		path.y[i] = yMap[i];
		
	
	}
	stroke.r = (int *)malloc(n * sizeof(int));
	stroke.g = (int *)malloc(n * sizeof(int));
	stroke.b = (int *)malloc(n * sizeof(int));
		for (int i = 0; i < n; i++) {
			
				stroke.r[i] = rand()%256;
			
			 
				stroke.g[i] = rand() % 256;
			
			
				stroke.b[i] = rand() % 256;
			
		}
	
	
	
	
	
	line.x1 = 0;
	line.x2 = 0;
	line.y1 = 0;
	line.y2 = 0;

	int count;
	string links[N_MAX];

	string line;
	string fileName = "masterrlink.txt";
	ifstream myFile(fileName.c_str());

	if (myFile.is_open() == true) {
		count = 0;
		while (getline(myFile, line)) {

			cout << line << '\n';
			links[count] = line;
			count = count + 1;
		}
	}
	myFile.close();
	
	ofstream myHTML("myHTML.html");

	myHTML << "<html>";
	myHTML << "\n   <table>";

	for (int i = 0; i < count / 5; i++) {
		myHTML << "\n   <tr>";
		for (int j = 0; j < 5; j++) {

			myHTML << "\n   <td>";
			myHTML <<"<img src='"<< links[5 * i + j]<<"'width='100' height='100'>";
			myHTML << "\n   </td>";
		}
		myHTML << "\n   </tr>";

	}
	myHTML << "\n   </table>";
	myHTML << "</html>";

	myHTML.close();

}



//--------------------------------------------------------------
void ofApp::update(){
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	
	ofSetBackgroundColor(0, 0, 0);
	for (int i = 0; i < n; i++)
	{
		drawLine(line, stroke,path);

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
