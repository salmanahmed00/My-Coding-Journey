/*

***Recursive Programs to find Minimum and Maximum elements of array***

Link: https://www.geeksforgeeks.org/recursive-programs-to-find-minimum-and-maximum-elements-of-array/

Given an array of integers arr, the task is to find
the minimum and maximum element of that array using recursion.

*/



#include <bits/stdc++.h>
using namespace std;

void MinMax(vector<int>& arr, int ind, int n, int& min, int& max){
    if(ind == n){
        return;
    }

    if(arr[ind] < min){
        min = arr[ind];
    }

    if(arr[ind] > max){
        max = arr[ind];
    }

    MinMax(arr, ind+1, n, min, max);
}


// Method 2

int Min(vector<int>& arr, int n){
    if(n == 1){
        return arr[n-1];
    }

    return min(arr[n-1], Min(arr, n-1));
}

int Max(vector<int>& arr, int n){
    if(n == 1){
        return arr[n-1];
    }

    return max(arr[n-1], Max(arr, n-1));
}


int main(){

    vector<int> arr{33,5,2,34,51,1,45};

    int min = INT_MAX;
    int max = INT_MIN;

    MinMax(arr, 0, arr.size(), min, max);

    cout<<"Minimum element is: "<<min<<" and Maximum element is: "<<max<<endl;
    
    cout<<"Minimum element is: "<<Min(arr, arr.size())<<" and Maximum element is: "<<Max(arr, arr.size())<<endl;

}
