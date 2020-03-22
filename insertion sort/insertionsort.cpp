#include<bits/stdc++.h>
using namespace std;

int key, j;
int a[10];

int main()
{
	for(int i=0; i<10; i++)
	{
		cout<<"Enter a number"<<endl;
		cin>>a[i];
	}

	for(int i=0; i<10; i++)
	{
		key=a[i];
		j=i-1;

		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}

	for(int i=0; i<10; i++)
	{
		cout<<a[i]<<" ";
	}
}