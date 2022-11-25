#include <map>
#include <iostream>
#include <string>
#include "mapTools.h"

int main() {
	//alias of empty map
	stateDataMap myDataMap;
	
	//adding the key-value pairs to the map
	myDataMap.addKeyVal("Nebraska", "Lincoln");
	myDataMap.addKeyVal("New York", "Albany");
	myDataMap.addKeyVal("Ohio", "Columbus");
	myDataMap.addKeyVal("California", "Sacramento");
	myDataMap.addKeyVal("Massachussets", "Boston");
	myDataMap.addKeyVal("Texas", "Austin");
	
	//printing the key-value pairs before editing California
	myDataMap.printMap();
	std::cout << std::endl;
	
	//changing the capital of California
	myDataMap.changeVal("California", "Los Angeles");
	std::cout << "After changing California's capital" << std::endl;
	
	//printing the updated map
	myDataMap.printMap();
	std::cout << std::endl;
	
	//variable to store the state the user wants to search for
	std::string userEnteredState;

	do {
		std::cout << "Enter a State to Lookup the capital.  or q to quit" << std::endl;
		//have the user enter the key to search for
		std::getline(std::cin, userEnteredState);
		//store the capital returned by the getVal() function
		std::string capital = myDataMap.getVal(userEnteredState);
		//output to user
		std::cout << userEnteredState << "'s capital is " << capital << std::endl;
	//repeat until user enters "q"
	} while (userEnteredState != "q");
}
