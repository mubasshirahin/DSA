#include<bits/stdc++.h>
using namespace std;

bool isPerfect(vector<int> &arr) {
        int i=0;
        int j=arr.size()-1;
        while(i<j){
            if(arr[i]!=arr[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

int main(){
    vector<int> v = {1,2,3,2,1};
    cout << isPerfect(v) << endl;    
}