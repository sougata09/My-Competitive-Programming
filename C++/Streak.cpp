#include <bits/stdc++.h>
using namespace std;

int solve(string &s, int start) {
    if(start >= s.length()) {
        return INT32_MIN;
    }
    int i = start, ones = 0, zeros = 0, pos_zero = s.length();
    while(i < s.length() && s[i] == '0') {
        ++i;
    }
    for(;i < s.length();i++) {
        if(s[i] == '1') {
            ++ones;
        } else if(s[i] == '0' && zeros == 0) {
            pos_zero = i;
            ++zeros;
        } else {
            break;
        }
    }
    return max(ones + zeros, solve(s, pos_zero + 1));
}

int main() {
    int t;
    int x;
    cin >> t;
    cin >> x;
    while(t--) {
        string s;
        cin >> s;
        cout << solve(s, 0) << endl;
    }
    return 0;
}