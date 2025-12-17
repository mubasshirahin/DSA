#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int sum = accumulate(nums.begin(),nums.end(),0);
        int tot = (n*(n+1))/2;        

        return tot-sum;
    }

int main(){
    vector<int> v = {0,3,2};

    cout << missingNumber(v);
}