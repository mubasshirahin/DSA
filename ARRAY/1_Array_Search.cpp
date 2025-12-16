#include <bits/stdc++.h>
using namespace std;


int main() {

    int n;
    cin >> n;
    int arr[n];

    int target = 5;
    int ansIdx = -1;

    for(auto &u : arr){
        cin >> u ;
    }

    for(int i=0;i<n;i++){
        if(arr[i]==target){
            ansIdx = i;
        }
    }

    cout << ansIdx << endl;

    return 0;
}

