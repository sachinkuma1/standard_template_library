#include<bits/stdc++.h>
using namespace std;
int main(){
    map<char, int>mp;
    // mp.insert({3, 1});
    // // mp.insert({3, 4});  can't be inserted 
    // mp.insert({2, 4});
    // mp.insert({1, 1});
    // mp[3]=4;
    // for(auto pr:mp)
    // cout<<pr.first<<" "<<pr.second<<" ";
    vector<char>v={'a', 'a', 'a', 'b', 'b', 'c'};
    cout<<mp[1]<<endl;
    for(int i=0;i<v.size();i++){
        mp[v[i]]++;// mp[v[i]]=mp[v[i]]+1;
    }
    for(auto val:mp){
        cout<<val.first<<" "<<val.second;
        cout<<endl;
    }

}