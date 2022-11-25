#include "recursivePalindrome.h"
#include <vector>
#include <iostream>

int main() {
	//Demonstrating use of isPalindrome
	// a variety of strings, some of which are plaindromes
	std::string racecar = "racecar";
	std::string lukeMiller = "Luke Miller is the greatest!";
	std::string Elba = "able was I ere I saw elba";
	std::string peterPiper = "Peter Piper picked a peck of pickled peppers";
	//strings added to vector for use in for loop
	std::vector<std::string> potentialPalindromes = { racecar, lukeMiller, Elba, peterPiper };
	
	
	//boolean values on whether the strings are palindromes
	bool isPalindromeRacecar = isPalindrome(racecar);
	bool isPalindromelukeMiller = isPalindrome(lukeMiller);
	bool isPalindromeElba = isPalindrome(Elba);
	bool isPalindromepeterPiper = isPalindrome(peterPiper);
	//vector of bools for use in for loop
	std::vector<bool> isPalindromes = { isPalindromeRacecar, isPalindromelukeMiller, isPalindromeElba, isPalindromepeterPiper };
	
	//for loop printing results of isPalindrome()
	for (size_t i = 0; (i < potentialPalindromes.size() && (i < isPalindromes.size())); i++) {
		if (isPalindromes[i]) {
			std::cout << potentialPalindromes[i] << " is a palindrome." << std::endl;
		}
		else {
			std::cout << potentialPalindromes[i] << " is not a palindrome." << std::endl;
		}
	}
}
