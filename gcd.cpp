#include<bits/stdc++.h>
using namespace std;

int a,b;

int gcd(int A, int B)
{
	if(B == 0)
		return A;

	else
		return gcd(B, A%B);
}
 		

int main()
{
	cin>>a>>b;

	int var = gcd(a,b);

	cout<<"The gcd is: "<<var;
}