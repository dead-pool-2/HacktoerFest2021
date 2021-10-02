// https://www.geeksforgeeks.org/longest-subarray-forming-an-arithmetic-progression-ap/

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int LongestSubarrayFormingAP(vector<int> &v){
    int ans=2;
    int d=v[1]-v[0];
    int curr=2;

    for(int i=2; i<v.size(); i++){
        if(d==v[i]-v[i-1]){
            curr++;
        }
        else{
            d=v[i]-v[i-1];
            curr=2;
        }
        ans=max(ans, curr);
    }
    return ans;
}

int main() {
    freopen("../input.txt", "r", stdin);  
    freopen("../output.txt", "w", stdout);

    int n;  cin>>n;
    vector<int> v(n);
    for(auto &x : v)
        cin>>x;

    int ans = LongestSubarrayFormingAP(v);
    cout<<"Longest Subarray Forming AP: "<<ans<<endl;
}