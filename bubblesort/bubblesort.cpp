#include <bits/stdc++.h>
using namespace std;

int temp;
int a[10];

int main()
{
	for(int i=0; i<10; i++)
	{
		cout<<"Enter a number"<<endl;
		cin>>a[i];
	}
	for(int i=0; i<9; i++)
	{
		for(int j=i; j<10; j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0; i<10; i++)
	{
		cout<<a[i]<<" ";
	}
}


