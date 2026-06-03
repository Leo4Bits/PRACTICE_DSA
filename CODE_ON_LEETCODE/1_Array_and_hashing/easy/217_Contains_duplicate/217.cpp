#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> res(nums.begin(),nums.end());
        if (res.size()< nums.size()) return true;
        return false;
    }
};