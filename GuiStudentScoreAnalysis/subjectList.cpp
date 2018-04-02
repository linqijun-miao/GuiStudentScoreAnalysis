#include"subjectList.h"
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