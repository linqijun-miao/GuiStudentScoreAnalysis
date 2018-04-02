#pragma once
#include<string>
#include"subject.h"

class subjects
{
public:
	subjects(std::string stuName, std::string stuKey, subject belong);
	subjects();
	~subjects();
	std::string getStuName();
	std::string getStuKey();
	subject getBeSub();

private:
	std::string stuName;
	std::string stuKey;
	subject belong;
};

subjects::subjects()
{
}

subjects::subjects(std::string stuName, std::string stuKey, subject belong) {
	this->belong = belong;
	this->stuKey = stuKey;
	this->stuName = stuName;
}
subjects::~subjects()
{
}

std::string subjects::getStuKey() {
	return stuKey;
}
std::string subjects::getStuName() {
	return stuName;
}
subject subjects::getBeSub() {
	return belong; 
}
