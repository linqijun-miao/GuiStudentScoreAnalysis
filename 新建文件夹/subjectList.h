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

subjectList::subjectList()
{
}

subjectList::subjectList(string name, int level) {
	this->level = level;
	this->name = name;
}


subjectList::~subjectList()
{
}
string subjectList::getName() {
	return name;
}
int subjectList::getLevel() {
	return level;
}
void subjectList::addTest(subjects sub) {
	list.insert(list.end(), sub);
}
vector<subjects> subjectList::getList() {
	return list;
}