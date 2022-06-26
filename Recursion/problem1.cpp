/*

***Sum triangle from array***

Link: https://www.geeksforgeeks.org/sum-triangle-from-array/

Given an array of integers, print a sum triangle from it such that the first level has all array elements.
From then, at each level number of elements is one less than the previous level and elements at the level
is be the Sum of consecutive two elements in the previous level. 

*/



#include <bits/stdc++.h>
using namespace std;

void PrintTriangle(vector<int> arr, vector<vector<int>>& ans, int n){
    if(n < 1){
        return;
    }

    vector<int> temp(n-1);

    for(int i = 1; i < n; i++){

        int sum = arr[i-1]+arr[i];
        temp[i-1] = sum;
    }

    PrintTriangle(temp, ans, n-1);

    ans.push_back(arr);

    return;
    
}

int main(){

    vector<int> arr{1,2,3,4,5};

    vector<vector<int>> ans;

    PrintTriangle(arr, ans,arr.size());

    for(auto i : ans){

        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl;
        
    }
}
