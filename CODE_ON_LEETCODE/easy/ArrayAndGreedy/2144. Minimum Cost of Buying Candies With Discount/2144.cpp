#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);

class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end(), greater<int>());
        int SumRet = 0;
        int reset = 1;
        for (int i = 0; i < cost.size(); i++){
            if (reset != 3) SumRet += cost[i];
            if (reset == 3) reset = 1;
            else reset +=1; 
        }
        return SumRet;

    }
};

int main(){
    Solution a;
}