/*
 * Problem 3: Largest Prime Factor
 *
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143?
 *
 * Solved by: Alanna Zhou on 4/8/18
 *
 */

#include <iostream>

using namespace std;


long long GetLargestPrimeFactor(long long num) {
    int largest_prime_factor = 1;
    if (num <= 1) {
        return num;
    }
    long long reduced_num = num;
    for (int i = 2; i <= reduced_num; i++) {
        if (reduced_num % i == 0) {
            reduced_num /= i;
            if (largest_prime_factor < i) {
                largest_prime_factor = i;
            }
        }
    }
    return largest_prime_factor;
}


int main() {
    cout << "Largest Prime Factor: " << GetLargestPrimeFactor(600851475143) << endl;
    return 0;
}