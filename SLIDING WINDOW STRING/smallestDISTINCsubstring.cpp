#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "aabbbcbbac";

    vector<int> count(256,0);
    int first = 0;
    int second = 0;
    int len = s.size();
    int diff=0;

    while(first<s.size()){
        if(count[s[first]]==0){
            diff++;
        }
        count[s[first]]++;
        first++;
    }

    for(int i=0;i<256;i++){
        count[i]=0;
    }

    first=0;

    while(second<s.size()){
        while(diff&&second<s.size()){
            if(count[s[second]]==0){
                diff--;
            }

            count[s[second]]++;
            second++;
        }

        len = min(len,second-first);

        while(diff!=1){
            len = min(len,second-first);
            count[s[first]]--;

            if(count[s[first]]==0){
                diff++;
            }

            first++;

        }
    }



    cout<<len<<endl;
    
}