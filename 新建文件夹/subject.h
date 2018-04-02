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

subject::subject()
{
}
subject::subject(int level, std::string sbName, int score) {
	this->level = level;
	this->sbName = sbName;
	this->score = score;
}
subject::~subject()
{
}
std::string subject::getName() {
	return sbName;
}
int subject::getLevel() {
	return level;
}
int subject::getScore() {
	return score;
}
