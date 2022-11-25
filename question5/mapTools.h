#pragma once
#include <map>
#include <string>
#include <iostream>

//created a class for the map to avoid verbose functions in main
class stateDataMap{

public:
	//this function adds new key-value pairs to the map
	void addKeyVal(std::string key, std::string value) {
		myStateDataMap.insert(std::pair<std::string, std::string>(key, value));
	}
	//this function iterates through the map and prints the key-value pairs
	void printMap() {
		std::map <std::string, std::string>::iterator itr;
		std::cout << "My State Data Map Contents: " << std::endl;
		for (itr = myStateDataMap.begin(); itr != myStateDataMap.end(); itr++) {
			std::cout << itr->first << '\t' << itr->second << std::endl;
		}
		std::cout << std::endl;
	}
	//this function returns a value give a key
	std::string getVal(std::string key) {
		return myStateDataMap[key];
	}
	//this function edits a value given a key
	void changeVal(std::string key, std::string val) {
		myStateDataMap[key] = val;
	}

private:
	std::map<std::string, std::string> myStateDataMap;
};
