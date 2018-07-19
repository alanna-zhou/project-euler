/*
 * Problem 4: Largest Palindrome Product
 *
 * A palindromic number reads the same both ways.
 * The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 * Find the largest palindrome made from the product of two 3-digit numbers.
 *
 * Solved: 4/9/18
 *
 */

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;


vector<int> GetDigits(int num) {
    int digit = 0;
    int remaining = num;
    int index = 0;
    vector<int> digits;
    while (remaining > 0) {
        digit = remaining % 10;
        remaining = remaining / 10;
//        cout << "digit: " << digit << endl;
//        cout << "remaining: " << remaining << endl;
        digits.emplace_back(digit);
    }
//    std::copy(digits.begin(), digits.end(), std::ostream_iterator<int>(std::cout, " "));
//    cout << endl;
    return digits;
}

bool IsPalindrome(int num) {
    vector<int> digits = GetDigits(num);
    for (int i = 0; i < digits.size()/2; i++) {
        if (digits.at(i) != digits.at(digits.size()-1-i)) {
            return false;
        }
    }
    return true;
}


int GetLargestPalindrome() {
    int largest_palindrome = 0;
    for (int i = 999; i > 99; i--) {
        for (int j = 999; j > 99; j--) {
            if (IsPalindrome(i*j) && largest_palindrome < i*j) {
                largest_palindrome = i*j;
            }
        }
    }
    return largest_palindrome;
}

int main() {
    cout << "Largest palindrome: " << GetLargestPalindrome() << endl;

    return 0;
}
