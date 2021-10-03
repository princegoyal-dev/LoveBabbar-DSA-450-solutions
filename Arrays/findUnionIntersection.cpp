#include <bits/stdc++.h>

using namespace std;

int main() {
    int size1;
    cin >> size1;

    int *arr1 = new int[size1];
    for(int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    int size2;
    cin >> size2;

    int *arr2 = new int[size2];
    for(int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    //sorting both arrays
    sort(arr1, arr1 + size1);
    sort(arr2, arr2 + size2);

    cout << endl;
    //print sorted
    // for(int i = 0; i < size1; i++) {
    //     cout << arr1[i] << " ";
    // }
    // cout << endl;
    // for(int i = 0; i < size2; i++) {
    //     cout << arr2[i] << " ";
    // }
    // cout << endl;

    //print union

    int i = 0;
    int j = 0;
    
    //for intersection we can use the same code
    //we will make a vector to store only same variables
    vector<int> intersectValues;

    while(i < size1 && j < size2) {
        if(arr1[i] < arr2[j]) {
            cout << arr1[i] << " ";
            i++;
        } else if(arr1[i] == arr2[j]) {
            cout << arr1[i] << " ";
            
            //interSection
            intersectValues.push_back(arr1[i]);
            
            i++;
            j++;
        } else {
            cout << arr2[j] << " ";
            j++;
        }
    }

    while(i < size1) {
        cout << arr1[i++] << " ";
    }
    while(j < size2) {
        cout << arr2[j++] << " ";
    }

    //union end

    //Intersection
    cout << endl;
    for(int i = 0; i < intersectValues.size(); i++) {
        cout << intersectValues[i] << " ";
    }

    return 0;
}

/*
5
0 9 8 72 2
6
9 1 3 72 9 8
*/