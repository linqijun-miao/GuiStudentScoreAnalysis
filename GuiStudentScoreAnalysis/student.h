#pragma once
#include<string>
#include<vector>
#include"subject.h"
class student
{
public:
	student();
	student(std::string name, std::string key);
	double average();
	~student();
	std::string getName();
	std::string getKey();
	void addScore(subject nAdd);
	std::vector<subject> getSub();
	std::vector<subject> getSingleSub(std::string subName);
	int allAverage;
	
private:
	std::string name;
	std::string key;
	std::vector<subject> sub;
};

