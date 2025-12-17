#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        int prevUnique = nums[0];
        int k = 1;

        for(int i=0;i<nums.size();i++){
            if(nums[i]!=prevUnique){
                nums[k] = nums[i];
                prevUnique = nums[i];
                k++;
            }
        }  
        return k;
    }

int main(){
    vector<int> v = {0,0,1,1,1,1,2,2,2,3,4,4,5,6,6};
    
    cout << removeDuplicates(v);
}

