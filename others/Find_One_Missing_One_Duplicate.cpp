#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#include "../debug.h"

// TC: O(n)
void FindOneMissingOneDuplicate(vector<int> &v){
	int i = 0;
	while(i < v.size()){
		if(v[i] != v[v[i]-1]){
			swap(v[i], v[v[i]-1]);
		}
		else{
			i++;
		}
	}
	// debug(v);

	for(int i=0; i<v.size(); i++){
		if(v[i]!=i+1){
			cout<<"Duplicate: "<<v[i]<<", Missing: "<<i+1<<endl;
			// break;
		}
	}
}

int main(){
	// freopen("../input.txt", "r", stdin);  
	freopen("../output.txt", "w", stdout);
	freopen("../Error.txt", "w", stderr);

	vector<int> v = {2,3,1,5,1};
	v = {1,4,3,5,3,6};
	// v = {2,3,1,8,2,3,5,1};
	FindOneMissingOneDuplicate(v);
}