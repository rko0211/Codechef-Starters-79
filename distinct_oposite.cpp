#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v;
	    for(int i=n/2;i>=1;i--)
	    {
	        v.push_back(i);
	    }
	    for(int i=n/2+1;i<=n;i++)
	    {
	        v.push_back(i);
	    }
	    for(auto &it:v)
	    cout<<it<<" ";
	    cout<<endl;
	}
	return 0;
}
