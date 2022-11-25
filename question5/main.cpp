#include <map>
#include <iostream>
#include <string>
#include "mapTools.h"

int main() {
	stateDataMap myDataMap;
	myDataMap.addKeyVal("Nebraska", "Lincoln");
	myDataMap.addKeyVal("New York", "Albany");
	myDataMap.addKeyVal("Ohio", "Columbus");
	myDataMap.addKeyVal("California", "Sacramento");
	myDataMap.addKeyVal("Massachussets", "Boston");
	myDataMap.addKeyVal("Texas", "Austin");
	myDataMap.printMap();

	std::cout << std::endl;
	myDataMap.changeVal("California", "Los Angeles");
	std::cout << "After changing California's capital" << std::endl;
	myDataMap.printMap();
	std::cout << std::endl;

	std::string userEnteredState;

	do {
		std::cout << "Enter a State to Lookup the capital.  or q to quit" << std::endl;
		std::getline(std::cin, userEnteredState);
		std::string capital = myDataMap.getVal(userEnteredState);
		std::cout << userEnteredState << "'s capital is " << capital << std::endl;
	} while (userEnteredState != "q");
}
