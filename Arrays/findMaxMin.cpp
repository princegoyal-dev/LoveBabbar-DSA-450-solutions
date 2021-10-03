#include <bits/stdc++.h>

using namespace std;

int main() {
    int min = INT_MAX;
    int max = INT_MIN;

    int size;
    cin >> size;

    int *arr = new int[size];

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "min : " << min <<  " max : " << max;
    return 0;
}