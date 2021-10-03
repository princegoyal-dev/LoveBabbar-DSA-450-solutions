//kadane's algorithm
#include <bits/stdc++.h>

using namespace std;

int main() {
    int size;
    cin >> size;

    int *arr = new int[size];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int maxSum = arr[0];
    int currSum = arr[0];
    for(int i = 1; i < size; i++) {
        currSum = max(arr[i], currSum + arr[i]);
        maxSum = max(currSum, maxSum);           
    }
    cout << maxSum;
    return 0;
}
/*
10
-1 2 4 -5 7 8 -2 8 2 9
*/