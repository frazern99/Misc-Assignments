#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	

	library.setFromFile("masterlink.txt");
	library.n = n;

	 library.getTitles(titles);
	 library.getArtists(artists);
	 library.getYears(year);
	 library.getGenres(genres);
	 library.getFans(fans);
	 library.getImageURLs(urls);


}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'a') {
		system("CLS");
		library.sortByIndex(n, titles, index);
		library.printFromIndexOrder(index, "Titles");
	}
	if (key == 's') {
		system("CLS");
		library.sortByIndex(n, artists, index);
		library.printFromIndexOrder(index, "Artists");
	}
	if (key == 'd') {
		system("CLS");
		library.sortByIndex(n, year, index);
		library.printFromIndexOrder(index, "Year");
	}
	if (key == 'f') {
		system("CLS");
		library.sortByIndex(n, genres, index);
		library.printFromIndexOrder(index, "Genre");
	}
	if (key == 'g') {
		system("CLS");
		library.sortByIndex(n, fans, index);
		library.printFromIndexOrder(index, "Fan");
	}
	if (key == 'h') {
		system("CLS");
		library.sortByIndex(n, urls, index);
		library.printFromIndexOrder(index, "URLs");
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
