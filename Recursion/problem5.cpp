/*

*** Reverse String***

Link: https://leetcode.com/problems/reverse-string/

Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

*/


vector<char> reverse(vector<char> &s, int i, int n)
{
    if (i >= n / 2)
    {
        return s;
    }

    swap(s[i], s[n - i - 1]);

    return reverse(s, i + 1, n);
}

void reverseString(vector<char> &s)
{
    reverse(s, 0, s.size());
}
