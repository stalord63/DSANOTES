

//print Subsequence of an array

#include <bits/stdc++.h>
using namespace std;
void sub(int idx,vector<int>ds,int *arr,int n){
	if(idx==n){
		for(auto it:ds){
			cout<<it<<" ";
		}return;
	}
ds.push_back(arr[idx]);//take the element
sub(idx+1,ds,arr,n);
ds.pop_back();//remove the element
sub(idx+1,ds,arr,n);//not take the element
	
}

int main() {
	int arr []={3,1,2};
	vector<int>ds;
	int n=3;
	sub(0,ds,arr,n);
	return 0;
}

//------------------------------------------------------------------------------------------------