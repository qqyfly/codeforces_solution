/* Generated by powerful Codeforces Tool
 * Author: PierreQi
 * Time: 2022-09-05 14:03:21
**/

#include <bits/stdc++.h>

//#include <iostream>
//#include <utility>
// #include <vector>
// #include <map>
// #include <set>
// #include <stack>
// #include <queue>
// #include <unordered_map>
// #include <unordered_set>
// #include <algorithm>


using namespace std;
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef long long ll;

int main(){
    fio;
    
    string start;
    string end;
    getline(cin,start);
    getline(cin,end);


    int startPt[2] = {start[0]-'a' + 1,start[1]-'0'};
    int endPt[2] = {end[0]-'a' + 1,end[1]-'0'};

    int dx = endPt[0] - startPt[0];
    int dy = endPt[1] - startPt[1];
    
    int common = min(abs(dx),abs(dy));
    int extra = max(abs(dx),abs(dy)) - common;


    cout << common + extra << endl;

    char xChar = dx > 0 ? 'R' : 'L';
    char yChar = dy > 0 ? 'U' : 'D';

    for(int i = 0;i < common;i++){
        cout << xChar << yChar << endl;
    }

    for(int i = 0;i < extra;i++){
        if (abs(dx) > abs(dy)){
            cout << xChar << endl;
        }else{
            cout << yChar << endl;
        }        
    }
}
