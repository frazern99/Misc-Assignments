#include "ofApp.h"
#include <iostream>

#include <string.h>

#include <string>

#include <fstream>

#include <cstring>

#include <stdlib.h>

using namespace std;

struct Info

{

	char firstname[30];

	char lastname[30];

	long ID;

	char address[70];

}grp[30], foun_in[30];

void fun(int array_num, Info grp[30])

{

	char lastName_Sear[30];

	int k;

	int found_num = 0;

	cout << "Enter the persons last name" << endl;

	cin >> lastName_Sear;

	for (k = 0; k < array_num; k++)

	{

		if (strcmp(lastName_Sear, grp[k].lastname) == 0)

		{

			foun_in[found_num] = grp[k];

			cout << "The searched person information is as following" << endl;

			cout << grp[k].firstname;

			cout << ", ";

			cout << grp[k].lastname << endl;

			cout << grp[k].ID << endl;

			cout << grp[k].address << endl;

			found_num++;

		}

	}

	if (found_num == 0)

		cout << "Not found" << endl;











}

//main function

int main() {

	int arraynum = 0;

	int k, b;

	char cont = 'y';

	bool done = 0;

	//read the file;

	string line;

	ifstream inFile("a1.txt");

	if (inFile.is_open())

	{

		while (!inFile.eof())

		{

			inFile.getline(grp[arraynum].firstname, 30, ',');

			inFile.getline(grp[arraynum].lastname, 30);

			inFile >> grp[arraynum].ID;

			inFile.ignore(1000, '\n');

			inFile.getline(grp[arraynum].address, 70, '\n');

			inFile.ignore(1000, '\n');

			arraynum++;

		}

		inFile.close();

		cout << "\n\n THE TOTAL NUMBER OF PEOPLE IN FILE IS " << arraynum << endl;

	}

	else cout << "The User cannot able to open the file";

	// sorting in details in ascending orden on basis of ID

	for (k = 0; k < arraynum; k++)

	{

		for (b = k + 1; b < arraynum; b++)

		{

			if (grp[b].ID < grp[k].ID)

			{

				Info temp;

				temp = grp[k];

				grp[k] = grp[b];

				grp[b] = temp;

			}

		}

	}

	for (int num = 0; num < arraynum; num++) {

		cout << "THE INFO OF is as following" << endl;

		cout << grp[num].firstname;

		cout << ", ";

		cout << grp[num].lastname << endl;

		cout << grp[num].ID << endl;

		cout << grp[num].address << endl;

	}

	// Ask user whether to add a person or not;

	cout << endl;

	while (done == 0)

	{

		cout << "If you like to add another entry? [y/n]" << endl;

		cin >> cont;

		if (cont == 'y')

		{

			cout << "Give the first name of the person?" << endl;

			cin >> grp[arraynum].firstname;

			cout << "Give the last name of the person?" << endl;

			cin >> grp[arraynum].lastname;

			cout << "Give the ID of the person?" << endl;

			cin >> grp[arraynum].ID;

			cout << "Give the address of the person?" << endl;

			scanf(" %[^\n]s", grp[arraynum].address);

			cout << endl << "Entry added!" << endl;

			arraynum++;

		}

		else if (cont == 'n')

		{

			done = 1;

			break;

			cout << endl;

		}

		else

		{

			cout << "Please enter 'y' or 'n'" << endl;

		}

		cout << "The total number of people after addition is " << arraynum << endl;

	}

	// Search person by their last name;



	done = 0;



	while (done == 0)

	{

		cout << endl;

		cout << "If you like to search for a person by last name [y/n]" << endl;

		cin >> cont;

		if (cont == 'y')

		{

			fun(arraynum, grp);

		}

		else if (cont == 'n')

		{

			done = 1;

			break;

		}

		else

		{

			cout << "Please enter y or n" << endl;

		}

	}

	if (done != 1)

		return 0;

}//main program ends
//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

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
