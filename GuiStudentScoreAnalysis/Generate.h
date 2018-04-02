#pragma once
#include"hashlist.h"
#include<iostream>
#include<fstream>
#include"subjectList.h"
using namespace std;

class Generate {
public:
	Generate(bool isNew,string fileLocation = "");
	hashlist * stuNames;
	hashlist *stuKeys;
	vector<subjectList*> subList;
	vector<subjectList*>::iterator iter;
	string Path=".\\score.txt";

	void readFile(string fileLocation);
	void writeFile(string fileLocation);
	bool isEXinList(string name, int level);
};
