#pragma once
#include <queue>
#include <iostream>
#include <string>
#include <vector>

//This function takes a vector of elements and feeds it into a Queue
template<typename T>
void buildQueue(std::vector<T>& inputVector, std::queue<T>& newQueue) {
	for (int i = 0; i < inputVector.size(); i++) {
		newQueue.push(inputVector[i]);
	//for(auto x : arr) {
	//	newQueue.push(x);
	}
}
//This function prints the contents of a Queue
template<typename T>
void printQueue(std::queue<T>& queueToPrint) {
	size_t queueSize = queueToPrint.size();
	for (size_t i = 0; i < queueSize; i++) {
		std::cout << queueToPrint.front() << ", ";
		queueToPrint.push(queueToPrint.front());
		queueToPrint.pop();
	}
	std::cout << std::endl;
}

//This function moves the front element in a queue to the rear
template<typename T>
void move_to_rear(std::queue<T>& myQueue) {
	myQueue.push(myQueue.front());
	myQueue.pop();
}
