#include<bits/stdc++.h>
using namespace std;

// vector<int> ngE(vector<int>&v){
//     int Greatest_Element_Till_Now = -1;
//     vector<int>nge;
    
//     for(int i=v.size()-1;i>=0;i--){
//         nge.push_back(Greatest_Element_Till_Now);

//         if(v[i]>Greatest_Element_Till_Now){
//             Greatest_Element_Till_Now = v[i];            
//         }
//     }

//     reverse(nge.begin(),nge.end());

//     return nge;
// }

int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for(auto u : prices){
            minPrice = min(minPrice,u);
            maxProfit = max(maxProfit,u-minPrice);
        }    
        return maxProfit;    
    }

int main(){
    vector<int> v = {7,1,5,3,6,4};

    // vector<int>nge = ngE(v);

    // int maxi = INT_MIN;

    // for(int i=0;i<6;i++){
    //     maxi = max(maxi,nge[i]-v[i]);
    // }

    // if(maxi<=0)maxi = 0;

    // cout << maxi << endl;

    cout << maxProfit(v) << endl;


}