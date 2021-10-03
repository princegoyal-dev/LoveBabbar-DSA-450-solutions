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

    //using max_heap
    //making k size max_heap to store first k smallest elements
    priority_queue<int> kMaxHeap;
    priority_queue<int, vector<int>, greater<int>> kMinHeap;

    for(int i = 0; i < k; i++) {
        kMaxHeap.push(arr[i]);
        kMinHeap.push(arr[i]);
    }

    //checking other elements
    for(int i = k; i < size; i++) {
        if(kMaxHeap.top() > arr[i]) {
            kMaxHeap.pop();
            kMaxHeap.push(arr[i]);
        }
        if(kMinHeap.top() < arr[i]) {
            kMinHeap.pop();
            kMinHeap.push(arr[i]);
        }
    }


    //getting kth smallest element
    cout << kMaxHeap.top();
    cout << endl;
    //kth largest element
    cout << kMinHeap.top();

    return 0;
}