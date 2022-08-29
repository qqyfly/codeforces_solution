#include <bits/stdc++.h>

//#include <map>
//#include <cmath>
//#include <iostream>
//#include <algorithm>
//#include <string>

using namespace std;
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;

int main(){
    fio;
    
    int ans = 0;
    int user_count = 0;
    string s;

    while (getline(cin,s)) {
        if (s[0] == '+'){
            user_count++;
        }
        else if (s[0] == '-'){
            user_count--;
        }
        else {
            for(int i = 0;i < s.length();i++){
                if (s[i] == ':'){
                    ans += user_count * (s.length() - i - 1);
                }
            }
        }        
    }
    
    cout << ans;
}