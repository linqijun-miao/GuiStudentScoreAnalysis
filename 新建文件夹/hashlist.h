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
	

private:
	hashnode * list;
	bool isName; //true means the name list
};

hashlist::hashlist(bool isName)
{
	list = new hashnode[599];
	this->isName = isName;
}

hashlist::~hashlist()
{
	if (list != nullptr) {
		delete []list;
		list = nullptr;
	}
}

void hashlist::add(std::string needAdd , student addST) {
	std::hash<std::string> h;
	size_t t = h(needAdd);
	
	int temp = t % 599;
	if (list[temp].next == nullptr) {
		hashnode *ad = new hashnode();
		ad->contain = addST;
		list[temp].next = ad;
	}
	else {
		hashnode* tNode = list[temp].next;
			while (tNode->next != nullptr) {
				tNode = tNode->next;
			}
			hashnode *ad = new hashnode();
			ad->contain = addST;
			tNode->next = ad;
	}
	
	

}

std::vector<student> hashlist::search(std::string s) {
	std::vector<student> out;
	std::hash<std::string> h;
	size_t t = h(s);
	int temp = t % 599;
	if (isName) {
		if (list[temp].next == nullptr) {
			return out ;
		}
		hashnode* tNode = list[temp].next;
		while (tNode!= nullptr) {
			student t = tNode->contain;
			if (t.getName() == s) {
				out.insert(out.end(), t);
			}
			tNode = tNode->next;
		}
		return out;
	}
	else {
		if (list[temp].next == nullptr) {
			return out;
		}
		hashnode* tNode = list[temp].next;
		while (tNode != nullptr) {
			student t = tNode->contain;
			if (t.getKey() == s) {
				out.insert(out.end(), t);
				break;
			}
			tNode = tNode->next;
		}
		return out;
	}
}
