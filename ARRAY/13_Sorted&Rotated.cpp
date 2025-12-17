#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                cnt++;
            }
        }
        if(nums[n-1]>nums[0]){
            cnt++;
        }

        if(cnt==0 || cnt==1)return true;
        else return false;
    }

int main() {
    vector<int>v = {4,5,1,2,3};

    cout << check(v) << endl;
    
    return 0;
}