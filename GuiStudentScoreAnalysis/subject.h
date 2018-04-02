#pragma once
#include <string>

class subject
{
public:
	subject();
	subject(int level, std::string stName, int score);
	~subject();
	std::string getName();
	int getScore();
	int getLevel();
private:
	int level;
	std::string sbName;
	int score;
};

