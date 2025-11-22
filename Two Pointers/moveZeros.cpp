// Question: Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.
// Example 1:
// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
// link: https://leetcode.com/problems/move-zeroes/

// Solution:

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int slow = 0;
        int fast = 0;
        int size = nums.size();
        int temp;

        while (fast < size)
        {
            if (nums[fast] != 0)
            {
                temp = nums[fast];
                nums[fast] = nums[slow]; // swapping fast and slow
                nums[slow] = temp;
                slow++;
                fast++;
            }
            else
            {
                fast++;
            }
        }
    }
};