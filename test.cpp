//
// Created by Alanna Zhou on 7/5/18.
//

#include <iostream>

using namespace std;

double avg(int arr[], int size) {
    if (size == 0) {
        return 0;
    }
    double sum = 0;
    for (int i = 0; i < size; i++) {
       sum += arr[i];
    }
    return sum / size;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    double avg_result = avg(arr, 5);
    cout << "avg_result is " << avg_result << endl;
}




