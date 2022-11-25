#pragma once
#include <string>
#include <iostream>
#include <vector>

//recursive function with base case of size == 1||0 returning true;  
//if front and last elements match, the string without those elements is fed to recursive function
//else it returns false
bool isPalindrome(std::string potentialPalindrome) {
	if (potentialPalindrome.size() < 2) {
		return true;
	}
	else {
		if (potentialPalindrome.front() == potentialPalindrome.back()) {
			std::string recursivePalindrome = potentialPalindrome.substr(1, potentialPalindrome.size() - 2);
			return isPalindrome(recursivePalindrome);
		}
		else {
			return false;
		}
	}
}
