/*
Problem name: Minimum number of jumps to reach end
description :
Given an array of integers where each element represents the max number of steps
that can be made forward from that element. Write a function to return the minimum
number of jumps to reach the end of the array (starting from the first element).
If an element is 0, they cannot move through that element. If the end isn’t reachable, return -1.

examples : 
11
1 3 5 8 9 2 6 7 6 8 9
output : 
3

11
1 1 1 1 1 1 1 1 1 1 1
output: 
10
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    //taking size from the user
    int size;
    cin >> size;

    //initializing values to the array
    int *arr = new int[size];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }   

    //variable to traverse the whole array
    int i = 0;

    //to store total steps taken
    int steps = 0;


    while(i < size) {
        //storing value at current Index
        int currValue = arr[i];
        
        //if value at current index is 0 then we cannot move further so print -1 and terminate the problem
        if(currValue == 0) {
            cout << "-1";
            return 0;
        }

        //initializing a variable to 0 to traverse it from 0 to traverse (i + currValue)
        int j = 0;
        
        //using a temp variable k to store current index for making a maxJump
        int k = i;

        //idea here is we will take the best case ie. we will configure the highest value 
        //in the current eligible range
        int maxValue = 0;
        while(j < currValue) {
            if(maxValue < arr[k]) {
                maxValue = arr[k];
                k++;
            }
            j++;
        }
        //if currentIndex + jumpValue if equal to or greater than last index then breaks the loop
        if(i + maxValue >= size - 1) {
            steps++;
            break;
        }

        //else jumps to the maxValue index and continue the process
        i = i + maxValue;
        steps++;
    }

    //printing the minimum steps value
    cout << steps;
    return 0;
}
