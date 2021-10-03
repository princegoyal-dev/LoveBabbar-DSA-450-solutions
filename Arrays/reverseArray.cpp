#include <bits/stdc++.h>

using namespace std;

int main() {
    int size;
    cin >> size;

    int *arr = new int[size];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    //print
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    //reverse
    int i = 0;
    int j = size - 1;
    while(i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    //print reverse
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}