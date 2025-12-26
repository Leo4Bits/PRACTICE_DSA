#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hash;
        vector<vector<string>> v;
        for (const auto& i: strs){
            vector<int> cnt(26,0);
            for (const auto& j:i){
                cnt[j-'a']+=1;
                cout << j << endl;
            }
            string key = "";
            for(const auto& j: cnt){
                key += to_string(j) + '#';
            }
            hash[key].push_back(i);
        }
        for (const auto& i: hash){
            v.push_back(i.second);
        }
        return v;
    }
};

int main(){
    Solution a;

    return 0;
}
