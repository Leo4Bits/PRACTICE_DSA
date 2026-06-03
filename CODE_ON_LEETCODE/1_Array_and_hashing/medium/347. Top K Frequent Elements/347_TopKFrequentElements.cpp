#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int comp_to_k = 0;
        map<int,int>hash_agree;
        map<int,vector<int>,greater<int>>hash_reverse;
        vector<int> res;
        int stop = 0; // if stop = k -> item enough -> break
        for(int &i:nums){
            hash_agree[i]++;
        }
        for(const auto& pair:hash_agree){
            hash_reverse[pair.second].push_back(pair.first);
        }

        for(const auto&pair:hash_reverse){
            cout << "[f: " << pair.first << " ";
            for(int i : pair.second){
                comp_to_k++;
                if (comp_to_k > k){
                    break;
                }
                cout << "it_" << i << "|";
                
                res.push_back(i);
            }cout << endl;
        }
        return res;
    }
};

int main(){
    vector<int> nums = {1,2,2,3,3,3};
    Solution a;
    vector<int> res = a.topKFrequent(nums,1);
    for(const auto&pair:res){
        cout << pair << " ";
    }
    return 0;
}