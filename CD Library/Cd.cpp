#include "Cd.h"

Cd::Cd() {





}



void Cd::print(string label) {

	cout << "\n\nCd Object" << label;
	cout << "\n\nartist:" << artist;
	cout << "\n\ntitle:" << title;
	cout << "\n\year:" << year;
	cout << "\n\ngenre:" << genre;
	cout << "\n\nfan:" << fan;
	cout << "\n\nurl:" << url;


}
int Cd::getCommaIndex(string str, int index[]) {
	int count, n;
	n = str.length();
	count = 0;
	for (int i = 0; i < n; i++) {
		if (str[i] == ',') {
			index[count] = i;
			count = count + 1;

		}



	}
	return(count);

}
int Cd::parseCSV(string csv, string values[]) {
	int i1, i2, wordlen;
	int strlen = csv.length();
	int numCommas;
	int index[2000];
	numCommas = getCommaIndex(csv, index);

	for (int i = 0; i < numCommas; i++) {
		if (i == 0) i1 = 0;
		else i1 = index[i - 1] + 1;

		if (i == numCommas)i2 = strlen-1;
		else i2 = index[i] - 1;

		wordlen = i2 - i1 + 1;
		values[i] = csv.substr(i1, wordlen);







	}

	return(numCommas + 1);

}
void Cd::setFromCSV(string csv) {

	int numValues;
	string values[10], str;

	numValues = parseCSV(csv, values);

	artist = values[0];
	title = values[1];
	year = atoi(values[2].c_str());
	genre = values[3];
	fan = values[4];
	url = values[5];




}