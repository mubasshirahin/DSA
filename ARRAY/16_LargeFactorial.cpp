#include<bits/stdc++.h>
using namespace std;

vector<int> factorial(int n) {
        // code here
        vector<int> ans = {1};
        for(int i=2;i<=n;i++){
            int carry = 0;
            for(int j=0;j<ans.size();j++){
                int product = ans[j]*i + carry;
                ans[j] = product %10;
                carry = product/10;
            }
            while(carry){
                ans.push_back(carry%10);
                carry/=10;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }

int main(){
    vector<int> ans = factorial(15);

    for(auto u : ans){
        cout << u << " ";
    }cout << endl;
}