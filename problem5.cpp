/*
 * Problem 5: Smallest Multiple
 *
 * 2520 is the smallest number that can be divided by each of the numbers
 * from 1 to 10 without any remainder.
 * What is the smallest positive number that is evenly divisible
 * by all of the numbers from 1 to 20?
 *
 * Solved by: Alanna Zhou on
 *
 */

#include <iostream>

using namespace std;

bool IsDivisible(int multiple, int maximum) {
    for (int i = 1; i <= maximum; i++) {
        if (multiple % i != 0 ) {
            return false;
        }
    }
    return true;
}



long long GetSmallestMultiple(int maximum) {
    long long multiple = 1;
    for (int i = 1; i <= maximum; i++) {
        if (multiple % i != 0) {
            multiple *= i;
        }
    }
    long long smallest_multiple = multiple;
    for (int i = multiple; i >= 1; i--) {
        if (IsDivisible(i, maximum) && smallest_multiple > i) {
            smallest_multiple = i;
        }
    }

    return smallest_multiple;
}



int main() {
    cout << "Smallest Multiple: " << GetSmallestMultiple(20) << endl;

    return 0;
}