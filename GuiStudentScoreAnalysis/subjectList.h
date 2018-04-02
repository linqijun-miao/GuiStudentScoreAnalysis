#pragma once
#include"subjects.h"
#include<vector>
#include<string>
using namespace std;
class subjectList
{
public:
	subjectList(string name, int level);
	subjectList();
	~subjectList();
	string getName();
	int getLevel();
	void addTest(subjects sub);
	vector<subjects> getList();
private:
	string name;
	int level;
	vector<subjects> list;
};

