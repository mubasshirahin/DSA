#include<bits/stdc++.h>
using namespace std;

vector<int> pgE(vector<int>v){
    int Greatest_Element_Till_Now = -1;
    vector<int>pge;
    
    for(int i=0;i<v.size();i++){
        pge.push_back(Greatest_Element_Till_Now);

        if(v[i]>Greatest_Element_Till_Now){
            Greatest_Element_Till_Now = v[i];            
        }
    }

    return pge;
}

vector<int> ngE(vector<int>v){
    int Greatest_Element_Till_Now = -1;
    vector<int>nge;
    
    for(int i=v.size()-1;i>=0;i--){
        nge.push_back(Greatest_Element_Till_Now);

        if(v[i]>Greatest_Element_Till_Now){
            Greatest_Element_Till_Now = v[i];            
        }
    }

    reverse(nge.begin(),nge.end());

    return nge;
} 


int main(){
    vector<int> v = {0,1,0,2,1,0,1,3,2,1,2,1};

    vector<int> nge = ngE(v);
    vector<int> pge = pgE(v);

    for(int i=1;i<nge.size()-1;i++){
        nge[i] = min(pge[i],nge[i]);        
    }

    int sum = 0;

    for(int i=1;i<nge.size();i++){
        if(v[i]<nge[i]){
            sum+= (nge[i]-v[i]);            
        }
    }

    cout << sum << endl;

}