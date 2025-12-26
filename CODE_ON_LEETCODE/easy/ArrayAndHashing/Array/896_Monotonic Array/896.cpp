#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if (nums.size() == 1) return true;
        string increase = "NULL";
        
        for(int i = 0; i < nums.size() -1 ; i++){
            string temp_comp = "NULL";
            if ((nums[i+1] > nums[i])){
                if (increase == "NULL"){
                    increase = "1";
                }
                temp_comp = "1";
            } 
            else if (nums[i+1] < nums[i]){
                if (increase == "NULL"){
                    increase = "0";
                }
                temp_comp = "0";
            }
            else{
                temp_comp = increase;
            }
            cout << temp_comp << " " << increase << endl;
            if ((temp_comp != increase)) return false;
            
        }
        return true;
    }
};

int main(){
    Solution a;
    int n;
    cin >> n;
    vector<int> ns(n,0);
    for(int& i: ns) cin >> i;
    cout << a.isMonotonic(ns) << endl;
    return 0;
}