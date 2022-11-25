#pragma once
#include <string>
#include <iostream>
#include <vector>

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
