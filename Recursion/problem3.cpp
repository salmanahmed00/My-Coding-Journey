/*
Binary Search

Link: https://leetcode.com/problems/binary-search/

Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. 
If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.

*/


int Search(vector<int> &nums, int target, int l, int r)
{

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }

        else if (nums[mid] > target)
        {
            return Search(nums, target, l, mid - 1);
        }

        else
        {
            return Search(nums, target, mid + 1, r);
        }
    }

    return -1;
}

int search(vector<int> &nums, int target)
{

    int ans = Search(nums, target, 0, nums.size() - 1);

    return ans;
}
