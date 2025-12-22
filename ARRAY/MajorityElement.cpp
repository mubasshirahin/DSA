#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int candidate = 0;

        for(auto u : nums){
            if(cnt==0){
                candidate = u;
            }
            if(u==candidate){
                cnt++;
            }
            else{
                cnt--;
            }
        }     
        return candidate;           
    }

int main(){
    vector<int> v = {2,2,1,2,4,5,2,3,2,2};
    cout << majorityElement(v);
}