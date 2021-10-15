#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	long long int n,count=0;
	cin>>n;
	char arr[n];
    int l = s.size();
	for(long long int i=0;i<n;i++)
	{
		arr[i]=s[i%l];
		
	}
	for(long long int j=0;j<n;j++)
	{
		if(arr[j]==arr[0])
		{
			count=count+1;
		}
	}
	cout<<count;
	return 0;
	
}
