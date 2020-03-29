#include<bits/stdc++.h>
using namespace std;

int A[10];

void kSort(int arr[10])
{
	int key, i, j;

	for(i=0; i<10; i++)
	{
		key = arr[i];
		j = i-1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j+1] = arr[j];
			j = j-1;
		}

		arr[j+1] = key;
	}
}

void print(int arr[10])
{
	cout<<"The sorted array is:"<<endl;

	for(int i=0; i<10; i++)
	{
		cout<<arr[i]<<" ";
	}
}

void input(int arr[10])
{
	for(int i=0; i<10; i++)
	{
		cin>>arr[i];
	}
}

int main()
{
	input(A);
	kSort(A);
	print(A);
	return 0;
}