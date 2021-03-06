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
 * Solved: 5/22/18
 *
 */

#include <iostream>;

using namespace std;

bool IsPrime(int num) {
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

int NthPrime(int n) {
    if (n == 1) { // 1st prime is 2
        return 2;
    }
    int prime_num = 3;
    for (int i = 2; i <= n; i++) {
        while(!IsPrime(prime_num)) {
            prime_num++;
        }
        prime_num++;
    }
    return prime_num - 1;
}


int main() {

    cout << "1st Prime: " << NthPrime(1) << endl;
    cout << "2nd Prime: " << NthPrime(2) << endl;
    cout << "3rd Prime: " << NthPrime(3) << endl;
    cout << "10001st Prime: " << NthPrime(10001) << endl;

    return 0;
}
