#include <bits/stdc++.h>

using namespace std;

int main() {
    int size;
    cin >> size;

    int *arr = new int[size];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int k;
    cin >> k;

    sort(arr, arr + size);

    int minDiff = arr[size - 1] - arr[0];

    int currMin = arr[0];
    int currMax = arr[0];

    for(int i = 1; i < size; i++) {
        if(arr[i] < k) {
            continue;
        }
        currMax = max(arr[i - 1] + k, arr[size - 1] - k);
        currMin = min(arr[i] - k, arr[0] + k);
        minDiff = min(minDiff, currMax - currMin);
    }

    cout << minDiff;
    return 0;
}