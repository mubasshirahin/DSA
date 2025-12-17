#include<bits/stdc++.h>
using namespace std;

int firstNonRepeating(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto u : arr){
            mp[u]++;
        }
        
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]==1){
                return arr[i];
            }
        }
        return 0;
    }

int main(){
    vector<int> v = {1,2,3,1,2,4};
    cout << firstNonRepeating(v);    
}
