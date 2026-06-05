#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pref_pro;   
        deque<int> suf_pro;
        vector<int> res;
        int cur =1;
        for(int i = 0; i < nums.size(); i++){
            int pre_cur =cur;
            pref_pro.push_back(pre_cur);
            cur *= nums[i];
        }
        cur = 1;
        for(int i = nums.size()-1; i >= 0; i--){
            int pre_cur =cur;
            suf_pro.push_front(pre_cur);
            cur *= nums[i];
        }
        for(int i = 0; i < nums.size(); i++){
            res.push_back(pref_pro[i]*suf_pro[i]);
        }
        return res;
           
    }
};
