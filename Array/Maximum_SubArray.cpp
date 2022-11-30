#include<bits/stdc++.h>
#include<vector>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN, total = 0;
        for(int i = 0; i< nums.size();i++){
            total += nums[i];
            ans = max(ans,total);
            total = max(0,total);
        }
        return ans;
    }
};