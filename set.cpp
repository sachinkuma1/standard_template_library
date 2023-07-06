#include<bits/stdc++.h>
using namespace std;
int main(){
    // multiset<int> st;
    // st.insert(5);
    // st.insert(1);
    // st.insert(1);
    // for(auto val:st)cout<<val<<" ";cout<<endl;
    // auto it=st.find(5);
    // // if(it!=st.end()) st.erase(it);
    // st.erase(5);
    // for(auto val:st)cout<<val<<" ";

    unordered_set<int>st;
    st.insert(3);
    st.insert(4);
    st.insert(1);
    // st.insert(1);
    st.insert(2);
    for(auto it:st)cout<<it<<" ";
}