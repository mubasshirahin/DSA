#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1,int m,vector<int>&nums2,int n){
    int i = m-1;
    int j = n-1;
    int k = m+n-1;

    while(i>=0 && j>=0){
        if(nums1[i] > nums2[j]){
            nums1[k--] = nums1[i--];
        }
        else{
            nums1[k--] = nums2[j--];
        }
    }

    while(i>=0){
        nums1[k--] = nums1[i--];
    }
    while(j>=0){
        nums1[k--] = nums2[j--];
    }
}

int main(){
    vector<int> v1 = {1,3,4,6,8};
    vector<int> v2 = {2,3,4,6,7,9};
    
    int m = v1.size();
    int n = v2.size();

    v1.resize(m+n);

    merge(v1,m,v2,n);

    for(auto u : v1){
        cout << u << " ";        
    }cout << endl;

}