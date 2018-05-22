/*
 * Problem 6: Sum Square Difference
 *
 * The sum of the squares of the first ten natural numbers is,
 * 1^2 + 2^2 + ... + 10^2 = 385
 * The square of the sum of the first ten natural numbers is,
 * (1 + 2 + ... + 10)^2 = 55^2 = 3025
 * Hence the difference between the sum of the squares of the first ten natural numbers
 * and the square of the sum is 3025 − 385 = 2640.
 *
 * Find the difference between the sum of the squares of the
 * first one hundred natural numbers and the square of the sum.
 *
 * Solved by: Alanna Zhou on 5/21/18

 *
 */


#include <iostream>

using namespace std;

int SumOfSquares() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i*i;
    }
    return sum;
}

int SquareOfSum() {
    int square = 0;
    for (int i = 1; i <= 100; i++) {
        square += i;
    }
    square *= square;
    return square;
}

int SumSquareDiff(int sum, int square) {
    return square - sum;
}

int main() {
//    cout << sumOfSquares() << endl;
//    cout << squareOfSum() << endl;
    cout << SumSquareDiff(SumOfSquares(), SquareOfSum()) << endl;
    return 0;
}

