// Rotate Array
// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
// Link: https://leetcode.com/problems/rotate-array/

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int size = nums.size();

        if (size == 1)
        {
            return;
        }
        // vector<int> newarr(size);

        k = k % size; // cases where k >= n
        // for(int i=0; i<size; i++){
        //     newarr[(i+k)%size] = nums[i];
        // }

        // for(int i=0; i<size; i++){
        //     nums[i] = newarr[i];
        // }

        // Second solution
        // Make whole array reverse and then till k reverse the first part and then second.
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};