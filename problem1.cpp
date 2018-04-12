/*
 * Problem 1: Multiples of 3 and 5
 *
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
 * The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.
 *
 * Solved by: Alanna Zhou on 4/7/18
 *
 */

#include <iostream>

using namespace std;

bool IsMultiple(int dividend, int divisor) {
    return dividend % divisor == 0;
}

int SumOfMultiples(int divisor, int divisor2, int max) {
    int sum = 0;
    // TODO: for loop below has linear complexity, but there is a better algo.
    for (int i = 0; i < max; i++) {
        if (IsMultiple(i, divisor) || IsMultiple(i, divisor2)) {
            // cout << i << endl;
            sum += i;
        }
    }
    return sum;
}

// DONE
int GetSum(int divisor, int divisor2, int max) {
    int sum = 0;
    for (int i = 0; i < max; i+=divisor) {
        sum += i;
    }
    for (int i=0; i < max; i+=divisor2) {
        sum +=i;
    }
    for (int i=0; i < max; i+=divisor*divisor2) {
        sum -= i;
    }
    return sum;
}

int main() {
    cout << "Sum of Multiples of 3 and 5 below 1000 is " << GetSum(3, 5, 1000) << endl;
    return 0;
}