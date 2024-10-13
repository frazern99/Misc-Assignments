#include "CdLib.h"




CdLib::CdLib() {

	n = 0;

}
void CdLib::setFromFile(string file) {
	int count;
	

	string line;
	string fileName = file;
	ifstream myFile(fileName.c_str());

	if (myFile.is_open() == true) {
		count = 0;
		while (getline(myFile, line)) {

			cd[count].setFromCSV(line);
			count = count + 1;
		}
	}
	myFile.close();
	n = count;

}
void CdLib::print(string label) {
	cout << label;
	for (int i = 0; i < n; i++) {

		cd[i].print("Cd");

	}


}
void CdLib::printFromIndexOrder(int index[], string label) {
	cout << label;
	for (int i = 0; i < n; i++) {
		cd[index[i]].print("Cd");


	}

}
void CdLib::getTitles(string titles[]) {
	for (int i = 0; i < n; i++) {
		titles[i] = cd[i].title;

	}

}
void CdLib::getArtists(string artists[]) {
	for (int i = 0; i < n; i++) {
		artists[i] = cd[i].artist;

	}


}
void CdLib::getYears(int years[]) {

	for (int i = 0; i < n; i++) {
		years[i] = cd[i].year;

	}


}
void CdLib::getGenres(string genres[]) {

	for (int i = 0; i < n; i++) {
		genres[i] = cd[i].genre;

	}


}
void CdLib::getFans(string fans[]) {
	for (int i = 0; i < n; i++) {
		fans[i] = cd[i].fan;

	}



}
void CdLib::getImageURLs(string urls[]) {
	for (int i = 0; i < n; i++) {
		urls[i] = cd[i].url;

	}



}
void CdLib::swap(int *a, int *b) {

	int temp = *a;
	*a = *b;
	*b = temp;


}
void CdLib::swap(string *s1, string *s2) {
	string str_temp;
	string s3, s4;
	s3 = *s1;
	s4 = *s2;
	strcpy(str_temp.c_str, s3.c_str);
	strcpy(s3.c_str, s4.c_str);
	strcpy(s4.c_str, str_temp.c_str);

}
void CdLib::sortByIndex(int dim, int x[], int index[]) {
	int i, j, x_temp[N_MAX];
	for (i = 0; i < n; i++) {
		x_temp[i] = x[i];
		index[i] = i;




	}
	
	
	
	
	for (i = 0; i < n; i++) {


		for (j = 0; j < n; j++) {
			if (x[j] > x[j + 1]) { 
				
				swap(&x_temp[j], &x_temp[j + 1]); 
				swap(&index[j], &index[j + 1]);
			}
		}
	}

}


void CdLib::sortByIndex(int dim, string str[], int index[]) {

	int i, j;
	string str_temp[N_MAX];
	for (i = 0; i < n; i++) {
		str_temp[i] = str[i];
		index[i] = i;

     }
	for (i = 1; i < n; i++)
	{
		for (j = 1; j < n; j++)
		{
			if (strcmp(str[j - 1].c_str, str[j].c_str) > 0)
			{
				swap(&str[j - 1], &str[j]);
				swap(&index[j], &index[j - 1]);
			}

		
		}
	}




}