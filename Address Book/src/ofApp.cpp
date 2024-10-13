#include "ofApp.h"

//--------------------------------------------------------------




void ofApp::setup(){
	information temp;
	z = 0;
	y = 0;
	found = 0;
	l = 0;
	int n = 0;
	i = 0;
	string line;
	k = 0;
	on = 0;
	ifstream myfile("a1.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			if (i % 3 == 0) {
				strcpy(info[k].name, line.c_str());

			}
			if (i % 3 == 0) {
				myfile >> info[k].id;
				myfile.ignore(1000, '\n');
			}
			if (i % 3 == 1) {
				strcpy(info[k].address, line.c_str());
				
			}
			if (i % 3 == 2) {
				k = k + 1;

			}
			
			i = i + 1;
			
		}
		myfile.close();
	}

	else cout << "Unable to open file";

	for (int j = 1; j < k + 2; j++) {

		for (int t = 0; t < k+1; t++) {
			if (info[j-1].id < info[t].id) {
				temp=info[j-1], info[t];
				info[j - 1] = info[t];
				info[t] = temp;
			
			}


		}
		
	}
	
	
	
	for (int j = 0; j < k+1; j++) {
		
		for (int t = 0; t < 30; t++) {
			cout << info[j].name[t];


		}
		cout << "\n"<<info[j].id<< "\n";
		for (int t = 0; t < 40; t++) {
			cout << info[j].address[t];


		}
		cout << "\n \n";
	}

	cout << "\n Would you like to add and additional person YES/NO?\n";

	cin >> answer;
	cin.clear();
	if (answer == "YES") {
		on = 1;
		while (on == 1) {
			cout << "Enter Name\n";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			getline(cin,name);
			strcpy(info[k+1].name, name.c_str());
			cout << "Enter ID\n";
			cin >> id;
			info[k + 1].id = id;
			cout << "Enter Address\n";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			getline(cin, address);
			strcpy(info[k + 1].address, address.c_str());
			k = k + 1;
			cout << "\n Would you like to add and additional person YES/NO?\n";
			cin >> answer;
			
			if (answer == "NO") {
				on = 0;
			}
		}
	}
	
	for (int j = 0; j < k + 2; j++) {

		for (int t = 0; t < 30; t++) {
			if (info[j].name[t] == ',') {
				n = t;
				
				for (int x = 0; x < n; x++) {
					lastname[j].name[x]=info[j].name[x];

				}

			}


		}

	}
	cout << n;
	cout << "\n" << lastname[0].name[3] << "\n";
	for (int t = 0; t < 30; t++) {
		cout << lastname[0].name[t];


	}
	cout << "\n Would you like to search for a person YES/NO?\n";
	cin >> answer;
	cin.clear();
	if (answer == "YES") {
		on = 1;
		while (on == 1) {
			cout << "Enter the person's last name\n";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			getline(cin, search);
			strcpy(searchTemp.name, search.c_str());
			y = search.length();
			for (int j = 0; j < k + 2; j++) {
				z = 0;
				for (int t = 0; t < y; t++) {
					if (searchTemp.name[t] == lastname[j].name[t]) {
						z = z + 1;
					}

				}
				if (z == y) {
					found = 1;
					infoNum[l] = j;
					for (int t = 0; t < 30; t++) {

						cout << info[infoNum[l]].name[t];


					}
					cout << "\n" << info[infoNum[l]].id << "\n";
					for (int t = 0; t < 40; t++) {
						cout << info[infoNum[l]].address[t];


					}
					cout << "\n \n";
					l = l + 1;

				}

			}
			if (found == 0) {
				cout << "Person not found\n";

			}
			


			cout << "\n Would you like to search for another person YES/NO?\n";
			cin >> answer;
			z = 0;
			if (answer == "NO") {
				on = 0;
			}
		}
		
		

		for (int j = 0; j < l; j++) {
			for (int t = 0; t < 30; t++) {
				cout << info[infoNum[j]].name[t];


			}
			cout << "\n" << info[infoNum[j]].id << "\n";
			for (int t = 0; t < 40; t++) {
				cout << info[infoNum[j]].address[t];


			}
			cout << "\n \n";
		}
	}

	system("pause");
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
