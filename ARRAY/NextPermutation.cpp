#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,3,5,2};
    int n = 4;

    int idx = -1;

    //step 1: find pivot

    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            idx = i;
            break;
        }
    }

    //step 2 : reverse if idx==-1 means this is the last permmuatation

    if(idx==-1){
        reverse(arr,arr+n);
    }

    //step 3 : reverse the right portion of the pivot

    else{
        reverse(arr+idx,arr+n);
    }

    //step 4 : find the next greatrer element

    int ngeIdx = -1;

    for(int i=idx+1;i<n;i++){
        if(arr[i]>arr[idx]){
            ngeIdx = i;
            break;
        }
    }

    swap(arr[idx],arr[ngeIdx]);

    for(auto u : arr){
        cout << u << " ";
    }
}