/* Generated by powerful Codeforces Tool
 * Author: PierreQi
 * Time: 2022-12-26 14:22:50
**/

//#include <bits/stdc++.h>

#include <iostream>
//#include <string>
//#include <utility>
#include <vector>
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

    // cin >>
    int lens[4];
    cin >> lens[0] >> lens[1] >> lens[2] >> lens[3];
    
    bool seg_flag = false;
    for(int i = 0; i < 4; i++){
        //create a vector to compare the length
        vector<int> nums;
        for(int j=0;j < 4;j++){
            if(j != i){
                nums.push_back(lens[j]);
            }
        }
        if (nums[0] + nums[1] > nums[2] && 
            nums[0] + nums[2] > nums[1] && 
            nums[1] + nums[2] > nums[0]){
            cout << "TRIANGLE" << endl;
            return 0;
        }
        else if (nums[0] + nums[1] == nums[2] || 
                 nums[0] + nums[2] == nums[1] || 
                 nums[1] + nums[2] == nums[0]){
            seg_flag = true;
        }
    }
    if(seg_flag){
        cout << "SEGMENT" << endl;
        return 0;
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
