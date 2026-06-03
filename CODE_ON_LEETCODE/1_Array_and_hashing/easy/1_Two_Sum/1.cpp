#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hash;
        for (int i = 0; i < nums.size(); i++){
            hash[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++){
            int sub = target - nums[i];
            if ((hash.find(sub) != hash.end()) && (hash[sub] != i)) {
                return {i,hash[sub]};
            }
        }
        return {};
    } 
    
};