/*
 * Problem 5: Smallest Multiple
 *
 * 2520 is the smallest number that can be divided by each of the numbers
 * from 1 to 10 without any remainder.
 * What is the smallest positive number that is evenly divisible
 * by all of the numbers from 1 to 20?
 *
 * Solved: 4/11/18
 *
 */

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>


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

//vector<int> GetPrimeFactors(int num) {
//    vector<int> factors;
//    for (int i = 2; i <= num; i++) {
//        if (num % i == 0) {
//            factors.emplace_back(i);
//        }
//    }
//    if (factors.size() > 1) {
//        factors.pop_back();
//    }
//    std::copy(factors.begin(), factors.end(), std::ostream_iterator<int>(std::cout, " "));
//    return factors;
//}
//
//vector<int> StripVector(vector<int> arr) {
//    vector<int> stripped_factors;
//
//    return stripped_factors;
//}
//


int main() {
    cout << "Smallest Multiple: " << GetSmallestMultiple(20) << endl;
//    cout << "get prime factors: " << GetPrimeFactors(13) << endl;

    return 0;
}
