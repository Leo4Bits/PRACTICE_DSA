#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string comp = strs[0];
        string res = "";
        for (int i = 1; i < strs.size(); i++){
            for (int j = 0 ; j < strs[i].size(); j++){
                if (j > comp.size()-1) break;
                if (strs[i][j] != comp[j]) break;
                res = strs[i].substr(0,j+1);
            }
        }
        return res;
    }
};

int main() {
    Solution sol;

    vector<string> v = {"cor","car"};
    cout << sol.longestCommonPrefix(v) << endl;

    return 0;
}