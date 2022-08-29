#include <bits/stdc++.h>

//#include <iostream>
//#include <utility>
//#include <vector>
// #include <map>
// #include <set>
// #include <stack>
// #include <queue>
// #include <unordered_map>
// #include <unordered_set>
//#include <algorithm>


using namespace std;
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;

string get_str(string str,int width,bool isFirst = false);

int main(){
    fio;

    int max_width = 0;

    vector<string> input;

    string s;

    while (getline(cin,s)){
        input.push_back(s);
        max_width = max(max_width, (int)s.length());
    }

    cout << get_str("",max_width,true) << endl;
    for(int i = 0 ;i < input.size();i++){
        cout << get_str(input.at(i),max_width) << endl;        
    }
    cout << get_str("",max_width,true) << endl;
    return 0;
}

string get_str(string str,int width,bool isFirst){
    int len = str.length();
    
    if (isFirst){
        string ans(width+2,'*');
        return ans;  
    }else{
        
        string ans(width+2,' ');
        ans[0] = '*';
        ans[width + 1] = '*';
        
        int initSkip = (width  - len) / 2;
        
        for(int i = 0;i < len;i++){
            ans[i + 1 + initSkip] = str[i];
        }
        
        return ans;
        
    }
    return "";
}

