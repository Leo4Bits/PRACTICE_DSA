#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s = 0;
        for (int i = 0; i < nums.size(); i+=2){
            s += nums[i];
        }
        return s;
    }
};

int main(){
    Solution a;
    int n;
    cin >> n;
    vector<int> ns(n,0);
    for(int& i: ns) cin >> i;
    cout << a.arrayPairSum(ns) << endl;
    return 0;
}