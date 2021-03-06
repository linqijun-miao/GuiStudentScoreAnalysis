// studentScoreAnalysis.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"hashlist.h"
#include<iostream>
#include<fstream>
#include"subjectList.h"
using namespace std;
bool isEXinList(string name, int level);

hashlist *stuNames = new hashlist(true);
hashlist *stuKeys = new hashlist(false);
vector<subjectList*> subList;
vector<subjectList*>::iterator iter;

void readFile(string fileLocation) {
	fstream inFile(fileLocation, ios_base::in);

	while (!inFile.eof()) { //key   name
		string key;
		string name;
		inFile >> key;
		inFile >> name;
		student tempStu = student(name, key);
		while (true) {
			int de;
			inFile >> de;
			if (de == -1) {
				break;
			}
			else {
				string sbName;
				int score;
				inFile >> sbName;
				inFile >> score;
				subject tempSub =  subject(de, sbName, score);
				tempStu.addScore(tempSub);//考试加入学生
				if (isEXinList(sbName, de)) {//判断课程列表中是否存在此课程
					for (iter = subList.begin(); iter != subList.end(); iter++) {
						subjectList *tempList = *iter;
						if (tempList->getName() == sbName && de == tempList->getLevel()) {
							subjects tempSubs = subjects(name, key, tempSub);//加入表
							tempList->addTest(tempSubs);
						}
					
					}
				}else {
					subjectList * l = new subjectList(sbName, de);//不存在新建表
					subjects tempSubs = subjects(name, key, tempSub);
					l->addTest(tempSubs);
					subList.insert(subList.end(), l);

				}
			}
		}
		stuNames->add(tempStu.getName(), tempStu);
		stuKeys->add(tempStu.getKey(), tempStu);
	}
	inFile.close();
}


bool isEXinList(string name, int level) {


	for (iter = subList.begin(); iter != subList.end(); iter++) {
		subjectList *tempList = *iter;
		if (tempList->getName() == name && level == tempList->getLevel()) {
			return true;
		}
	}
	return false;
}
	
	


int main()
{
	//test();
	readFile("C:\\Users\\sunco\\Desktop\\图包\\score.txt");
	std::vector<student> n;
	n = stuNames->search("lin");
	vector<student>::iterator it;
	for (it = n.begin(); it != n.end(); it++) {
		student lll = *it;
		cout << lll.getKey() << "  " << lll.getName();
	}
	system("pause");
    return 0;
}



