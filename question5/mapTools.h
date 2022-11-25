#pragma once
#include <map>
#include <string>
#include <iostream>


class stateDataMap{

public:
	void addKeyVal(std::string key, std::string value) {
		myStateDataMap.insert(std::pair<std::string, std::string>(key, value));
	}
	void printMap() {
		std::map <std::string, std::string>::iterator itr;
		std::cout << "My State Data Map Contents: " << std::endl;
		for (itr = myStateDataMap.begin(); itr != myStateDataMap.end(); itr++) {
			std::cout << itr->first << '\t' << itr->second << std::endl;
		}
		std::cout << std::endl;
	}
	std::string getVal(std::string key) {
		return myStateDataMap[key];
	}
	void changeVal(std::string key, std::string val) {
		myStateDataMap[key] = val;
	}

private:
	std::map<std::string, std::string> myStateDataMap;
};
