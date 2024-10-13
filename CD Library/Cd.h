#pragma once

#include <iostream>
#include <math.h>
#include <string>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

class Cd {

public:
	string artist;
	string title;
	int year;
	string genre;
	string fan;
	string url;


	Cd();
	void print(string label);
	int getCommaIndex(string str, int index[]);
	int parseCSV(string csv, string values[]);
	void setFromCSV(string csv);







};