#pragma once
#include<string>
#include<vector>
#include"subject.h"
class student
{
public:
	student();
	student(std::string name, std::string key);
	~student();
	std::string getName();
	std::string getKey();
	void addScore(subject nAdd);
	std::vector<subject> getSub();
	std::vector<subject> getSingleSub(std::string subName);
private:
	std::string name;
	std::string key;
	std::vector<subject> sub;
};

student::student() {

}

student::student(std::string name , std::string key)
{
	this->name = name;
	this->key = key;
}

student::~student()
{
}
std::string student::getName() {
	return name;
}
std::string student::getKey() {
	return key;
}

void student::addScore(subject nAdd) {
	sub.insert(sub.end(), nAdd);
}

std::vector<subject> student::getSub() {
	return sub;
}
std::vector<subject> student::getSingleSub(std::string subName) {
	std::vector<subject> out;
	std::vector<subject>::iterator iter;
	iter = sub.begin();
	for (; iter != sub.end(); iter++) {
		subject temp = *iter;
		if (temp.getName() == subName) {
			out.insert(out.end(),temp);
		}
	}
	return out;
}