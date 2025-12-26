#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return 0;
        for(int i = 0; i < s.size(); i++){
            if(t.find(s[i]) != string::npos) {
                
                t.erase(t.find(s[i]),1);
                
                continue;
            };
            return false;
        }
        if (t == "") return true;
        return false;
    }
};

int main(){
    Solution a;
    string s, t;
    cin >> s >> t;
    cout << a.isAnagram(s,t) << endl;
    return 0;
}
