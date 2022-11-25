#pragma once
#include <queue>
#include <iostream>
#include <string>
#include <vector>


template<typename T>
void buildQueue(std::vector<T>& inputVector, std::queue<T>& newQueue) {
	for (int i = 0; i < inputVector.size(); i++) {
		newQueue.push(inputVector[i]);
	//for(auto x : arr) {
	//	newQueue.push(x);
	}
}

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


template<typename T>
void move_to_rear(std::queue<T>& myQueue) {
	myQueue.push(myQueue.front());
	myQueue.pop();
}
