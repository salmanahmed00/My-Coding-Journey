/*

***First uppercase letter in a string***

Link: https://www.geeksforgeeks.org/first-uppercase-letter-in-a-string-iterative-and-recursive/

Given a string find its first uppercase letter

*/

#include <bits/stdc++.h>
using namespace std;

char FirstUpper(string& str, int ind){

    if(str[ind] == '\0'){
        return 0;
    }

    if(isupper(str[ind])){
        return str[ind];
    }

    return FirstUpper(str, ind+1);
}

int main(){
    string str = "helloWorld";

    cout<<FirstUpper(str, 0)<<endl;
}
