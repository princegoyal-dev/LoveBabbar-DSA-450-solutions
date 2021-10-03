#include <bits/stdc++.h>

using namespace std;

int main() {
    int size;
    cin >> size;

    int *arr = new int[size];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int lastValue = arr[size - 1];
    for(int i = size - 2; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    arr[0] = lastValue;

    //print array
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}