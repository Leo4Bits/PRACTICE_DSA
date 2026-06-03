#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL);

class Solution{
public:
    string encode(vector<string>& strs) {
        string str = "";
        for (const auto& i:strs){
            str += i + "~";
        }
        return str;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        string str = "";
        for (const auto& i: s){
            if (i == '~'){
                strs.push_back(str);
                str = "";
                continue;
            }
            str += i;
        }
        return strs;
    }
};

int main(){
    Solution a;
    vector<string>input = {""};
    string str_encoded =  a.encode(input);
    cout << str_encoded << endl;
    vector<string>output = a.decode(str_encoded);
    for(const auto&i:output){
        cout << i << "|" << " ";
    }cout << endl;
    return 0;
}