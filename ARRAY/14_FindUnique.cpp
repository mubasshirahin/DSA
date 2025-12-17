#include <bits/stdc++.h>
using namespace std;

int findUnique(vector<int> &arr) {
        int ans = arr[0];
        
        for(int i=1;i<arr.size();i++){
            ans = ans^arr[i];
        }
        
        return ans;
    }

int main(){
    vector<int> v = {1,2,6,8,3,2,1,3,8};
    cout << findUnique(v);
    
}