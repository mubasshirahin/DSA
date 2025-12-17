#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {0,1,0,1,1,1,0,1};
    int n = v.size();

    int left = 0;
    int right = n-1;

    while(left<=right){
        if(v[left]==0 && v[right]==0){
            //nothiig to do
            left++;
        }
        else if(v[left]==0 && v[right]==1){
            //correct so left++ adn right--
            left++;
            right--;
        }
        else if(v[left]==1 && v[right]==0){
            swap(v[left],v[right]);
            left++;
            right--;
        }
        else if(v[left]==1 && v[right]==1){
            right--;            
        }
    }

    for(auto u : v){
        cout << u << " ";
    }
}