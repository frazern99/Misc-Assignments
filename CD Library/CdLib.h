#pragma once
#include "Cd.h"
#define N_MAX 2000
#include <iostream>
#include <string>
using namespace std;

class CdLib {

public:

	int n;
	Cd cd[N_MAX];


	CdLib();
	void setFromFile(string filename);
	void print(string label);
	void printFromIndexOrder(int index[], string label);
	void getTitles(string titles[]);
	void getArtists(string artists[]);
	void getYears(int years[]);
	void getGenres(string genres[]);
	void getFans(string fans[]);
	void getImageURLs(string urls[]);
	void swap(int *a, int *b);
	void swap(string *s1, string *s2);
	void sortByIndex(int dim, int x[], int index[]);
	void sortByIndex(int dim, string str[], int index[]);





};