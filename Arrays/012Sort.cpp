#include <bits/stdc++.h>

using namespace std;

int main() {
    int size;
    cin >> size;

    int *arr = new int[size];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int low = 0, mid = 0, high = size - 1;
    while(mid <= high) {
        if(arr[mid] == 0) {
            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        } else if(arr[mid] == 1) {
            mid++;
        } else if(arr[mid] == 2) {
            int temp = arr[high];
            arr[high] = arr[mid];
            arr[mid] = temp;
            high--;
        }
    }

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}