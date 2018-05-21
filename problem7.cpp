/*
 * Problem 7: 10001st prime
 * By listing the first six prime numbers:
 * 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
 * What is the 10 001st prime number?
 *
 * notes: all even numbers above 2 are not prime
 *
 * 0 is false
 *
 */

#include <iostream>;

using namespace std;

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int nthPrime(int n) {
//    if (n == 1) {
//        return 2;
//    }
//    int i = 2;
//    while (isPrime(i) == false) {
//        i++;
//        return i;
//    }
//

    return 0;
}


int main() {
    cout << "isPrime(1): " << isPrime(1) << endl;
    cout << "isPrime(5): " << isPrime(5) << endl;
    cout << "isPrime(4): " << isPrime(4) << endl;
    cout << "isPrime(15): " << isPrime(15) << endl;

    return 0;
}