#include <bits/stdc++.h>

using namespace std;

int main() {
    int size;
    cin >> size;

    int *arr = new int[size];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int startIndex = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] < 0) {
            int temp = arr[i];
            arr[i] = arr[startIndex];
            arr[startIndex] = temp;
            startIndex++;
        }
    }

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}