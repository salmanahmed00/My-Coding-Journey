/*

***Program for length of a string using recursion***

Link: https://www.geeksforgeeks.org/program-for-length-of-a-string-using-recursion/

Given a string calculate length of the string using recursion. 

*/

#include <bits/stdc++.h>
using namespace std;


int Length(string& str, int n){
    if(str[n] == '\0'){
        return n;
    }

    return Length(str, n+1);

}

int main()
{
    string str = "Hello World";

    int n = 0;

    cout << Length(str, n)<< endl;
}
