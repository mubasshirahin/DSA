#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
        int ekhane_zero_ase = 0;
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                swap(nums[ekhane_zero_ase],nums[i]);
                ekhane_zero_ase++;
            }
        }
    }

int main(){
    vector<int> v = {0,1,0,3,2};

    moveZeroes(v);

    for(auto u : v){
        cout << u << " ";
    }cout << endl;
}