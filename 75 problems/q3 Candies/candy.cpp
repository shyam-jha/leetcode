class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) { 
        vector<bool> results;                                                   //results is a vector of bool type
        int maxCandy = *max_element(candies.begin(),candies.end());
        for(int i=0; i < candies.size();i++)
        {
            results.push_back(candies[i] + extraCandies >= maxCandy);           //directly pushing true or false rather than if else
        }

        return results;

    }
};