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

