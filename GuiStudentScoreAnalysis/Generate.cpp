#include"Generate.h"
Generate::Generate(bool isNew,string fileLocation) {
	stuNames = new hashlist(true);
	stuKeys = new hashlist(false);
	Path = fileLocation;
	if (fileLocation != ""&&!isNew) {
		
		readFile(fileLocation);
	}

}

void Generate::readFile(string fileLocation) {
	fstream inFile(fileLocation, ios_base::in);

	while (!inFile.eof()) { //key   name
		string key;
		string name;
		inFile >> key;
		inFile >> name;
		if (key == "") {
			return;
		}
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
				subject tempSub = subject(de, sbName, score);
				tempStu.addScore(tempSub);//考试加入学生
				if (isEXinList(sbName, de)) {//判断课程列表中是否存在此课程
					for (iter = subList.begin(); iter != subList.end(); iter++) {
						subjectList *tempList = *iter;
						if (tempList->getName() == sbName && de == tempList->getLevel()) {
							subjects tempSubs = subjects(name, key, tempSub);//加入表
							tempList->addTest(tempSubs);
						}

					}
				}
				else {
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

bool Generate::isEXinList(string name, int level) {
	for (iter = subList.begin(); iter != subList.end(); iter++) {
		subjectList *tempList = *iter;
		if (tempList->getName() == name && level == tempList->getLevel()) {
			return true;
		}
	}
	return false;
}

void Generate::writeFile(string fileLocation) {
	fstream outFile(fileLocation, ios_base::out);
	vector<student> wh = stuNames->whole;
	vector<student>::iterator it;
	vector<subject>::iterator its;
	for (it = wh.begin(); it != wh.end(); it++) {
		student tempStu = *it;
		vector<subject> tempSub = tempStu.getSub();
		outFile << tempStu.getKey() << "\t" << tempStu.getName() << "\t";
		for (its = tempSub.begin(); its != tempSub.end();its++)
			{
			subject tts = *its;
			outFile << tts.getLevel() << "\t" << tts.getName() << "\t" << tts.getScore() << "\t";
		}
		outFile << "-1" << endl;
	}
	outFile.close();
}