#include "move_to_rear.h"
#include <queue>
#include <string>
#include <iostream>
#include <vector>




int main() {

	//Demonstrating usage of move_to_rear()

		//with int's
	std::vector<int> intVector = {1,2,3,4,5};
	std::queue<int> intQueue;
	buildQueue<int>(intVector, intQueue);
	std::cout << "Queue before move_to_rear: " << std::endl;
	printQueue<int>(intQueue);
	move_to_rear<int>(intQueue);
	std::cout << "Queue after move_to_rear: " << std::endl;
	printQueue<int>(intQueue);
	std::cout << std::endl;

		//with strings
	std::vector<std::string> stringVector = { "first", "second", "third", "fourth", "fifth" };
	std::queue<std::string> stringQueue;
	buildQueue<std::string>(stringVector, stringQueue);
	std::cout << "Queue before move_to_rear: " << std::endl;
	printQueue<std::string>(stringQueue);
	move_to_rear<std::string>(stringQueue);
	std::cout << "Queue after move_to_rear: " << std::endl;
	printQueue<std::string>(stringQueue);
	std::cout << std::endl;

		//with chars
	std::vector<char> charVector = { 'a', 'b', 'c', 'd', 'e' };
	std::queue<char> charQueue;
	buildQueue<char>(charVector, charQueue);
	std::cout << "Queue before move_to_rear: " << std::endl;
	printQueue<char>(charQueue);
	move_to_rear<char>(charQueue);
	std::cout << "Queue after move_to_rear: " << std::endl;
	printQueue<char>(charQueue);
	std::cout << std::endl;

	return 0;
}
