#pragma once
#include"student.h"
#include<string>
#include<vector>
struct hashnode {
	
	student contain;
	hashnode* next = nullptr;

	hashnode() {};
};

class hashlist
{
public:
	hashlist(bool isName);
	~hashlist();
	void add(std::string needAdd , student addST);
	std::vector<student> search(std::string s);
	std::vector<student> whole;

private:
	hashnode * list;
	bool isName; //true means the name list
};

