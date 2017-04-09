#include<bits/stdc++.h>
using namespace std;
int main()
{
		int tc,n,i,j;
	int a[1000001]={0};
	int least_prime[1000001];
	for(i=0;i<=1000000;i++)
	{
		least_prime[i]=i;
	}
	for(i=2;i<=1000000;i++)
	{
		if(a[i]==0)
		{
			for(j=2*i;j<=1000000;j=j+i)
			{
				a[j]=1;
				if(i<least_prime[j])
				{
					least_prime[j]=i;
				}
			}
		}
	}

	cin>>tc;
	while(tc--)
	{
		cin>>n;
		cout<<n-least_prime[n]<<" "<<least_prime[n]<<endl;
		
	}
	
	
}