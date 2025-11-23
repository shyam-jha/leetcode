// Majority Element
// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times.
// You may assume that the majority element always exists in the array.

// Link to the problem: https://leetcode.com/problems/majority-element/description/

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        // Solving this question by hashmap
        // Intialising the hashmap unordered_map<key_type, value_type> name
        unordered_map<int, int> check;
        int size = nums.size();

        // other way to write for loop when traversing whole array
        for (int num : nums)
        {
            // When a key value pair doesn't exist hashmap automatically make one
            // if it was a normal for loop then
            // check[nums[i]] = check[nums[i]] + 1
            check[num] = check[num] + 1;

            // we check if number has appeared half of size
            if (check[num] > (size / 2))
            {
                return num;
            }
        }
        return -1;

        // Note Hashmap doesn't support reverse lookup but we can access key by this method

        // for (auto &p : map_name){
        //     p.first = it gives key
        //     p.second = it gives value
        // }
    }
};