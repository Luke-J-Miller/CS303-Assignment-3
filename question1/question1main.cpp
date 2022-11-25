#include "move_to_rear.h"
#include <queue>
#include <string>
#include <iostream>
#include <vector>




int main() {

	//Demonstrating usage of move_to_rear()

		//with int's
	
	//vector used to build queue
	std::vector<int> intVector = {1,2,3,4,5};
	//empty queue to be populated
	std::queue<int> intQueue;
	//vector and empty queue fed to function to populate queue
	buildQueue<int>(intVector, intQueue);
	std::cout << "Queue before move_to_rear: " << std::endl;
	printQueue<int>(intQueue);
	//function moves front element to rear
	move_to_rear<int>(intQueue);
	std::cout << "Queue after move_to_rear: " << std::endl;
	printQueue<int>(intQueue);
	std::cout << std::endl;

		//with strings
	//vector used to populate queue
	std::vector<std::string> stringVector = { "first", "second", "third", "fourth", "fifth" };
	//empty queue to be filled
	std::queue<std::string> stringQueue;
	//vector and empty queue fed to function to populate queue
	buildQueue<std::string>(stringVector, stringQueue);
	std::cout << "Queue before move_to_rear: " << std::endl;
	printQueue<std::string>(stringQueue);
	//function moves front element to rear
	move_to_rear<std::string>(stringQueue);
	std::cout << "Queue after move_to_rear: " << std::endl;
	printQueue<std::string>(stringQueue);
	std::cout << std::endl;

		//with chars
	//vector used to populate queue
	std::vector<char> charVector = { 'a', 'b', 'c', 'd', 'e' };
	//empty queue to be filled
	std::queue<char> charQueue;
	//vector and empty queue fed to function to populate queue
	buildQueue<char>(charVector, charQueue);
	std::cout << "Queue before move_to_rear: " << std::endl;
	printQueue<char>(charQueue);
	//function moves front element to rear
	move_to_rear<char>(charQueue);
	std::cout << "Queue after move_to_rear: " << std::endl;
	printQueue<char>(charQueue);
	std::cout << std::endl;

	return 0;
}
