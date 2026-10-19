#include <iostream>
#include <string>

using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);


int turnIntoPalindrome(string& str, int n, char c)
{
    int l = 0;
    int r = n-1;

    while(l < r)
    {
        if(str[l] == str[r]) 
        {
            l++; r--;
            continue;
        }
        if (str[l] == c) --n;
        else if (str[r] == c) --n;
        else 
        {
            n-= 2;
        }
        l++; r--;
    }
    return n;
}

int main()
{
    int t, n;
    char c;
    cin >> t;
    
    
    while(t--)
    {
        cin >> n >> c;
        string str = "";
        cin >> str;
        
        cout << n-turnIntoPalindrome(str,n,c) << endl;
    }
    return 0;
}
// -> TH 1: if str[l] == str[r] -> continue;
// TH 2: str[l] != str[r]
// -> TH 2.1: if str[l] == c -> str[r] = c;
// -> TH 2.2: if str[r] == c -> str[l] = c;
// -> TH 2.3: else str[r] == c and str[l] = c;