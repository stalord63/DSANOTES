

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

//--------------------------------------------------------------------------------------------------
//Reverse an Array
#include <bits/stdc++.h>
using namespace std;
void reverse(int i,int *arr,int n){
	if(i>=n/2)
	{return;}
	
	swap(arr[i],arr[n-i-1]);
	reverse(i+1,arr,n);
	
	
}
int main() {
int arr[]={1,2,3,4,5};
reverse(0,arr,5);
for(int i=0;i<5;i++){
	cout<<arr[i];
}
	return 0;
}
//---------------------------------------------------------------------------------------------------
// String Palindrome
#include <bits/stdc++.h>
using namespace std;
bool swap(string str,int i,int n){
if(i>=n/2)
return true;


if(str[i]!=str[n-i-1])
return false;

 return swap(str,i+1,n);

	
	
}
int main() {
string str="MADAM";
int n=str.length();
if(swap(str,0,n)){
	cout<<"Palindrome";
}
else cout<<"NOT palindrome";

	return 0;
}

//---------------------------------------------------------------------------------------------------------
