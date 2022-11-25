#include "recursivePalindrome.h"
#include <vector>
#include <iostream>

int main() {
	//Demonstrating use of isPalindrome
	std::string racecar = "racecar";
	std::string lukeMiller = "Luke Miller is the greatest!";
	std::string Elba = "able was I ere I saw elba";
	std::string peterPiper = "Peter Piper picked a peck of pickled peppers";
	std::vector<std::string> potentialPalindromes = { racecar, lukeMiller, Elba, peterPiper };

	bool isPalindromeRacecar = isPalindrome(racecar);
	bool isPalindromelukeMiller = isPalindrome(lukeMiller);
	bool isPalindromeElba = isPalindrome(Elba);
	bool isPalindromepeterPiper = isPalindrome(peterPiper);
	std::vector<bool> isPalindromes = { isPalindromeRacecar, isPalindromelukeMiller, isPalindromeElba, isPalindromepeterPiper };
	for (size_t i = 0; (i < potentialPalindromes.size() && (i < isPalindromes.size())); i++) {
		if (isPalindromes[i]) {
			std::cout << potentialPalindromes[i] << " is a palindrome." << std::endl;
		}
		else {
			std::cout << potentialPalindromes[i] << " is not a palindrome." << std::endl;
		}
	}
}
