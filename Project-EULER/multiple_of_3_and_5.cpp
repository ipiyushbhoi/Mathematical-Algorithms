#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	cout<<"Hello World";
	long long int i;
	long long int sum = 0;
	for(i=1;i<1000;i++)
	{
		if((i%3)==0 && (i%5)==0)
		{
			sum += i;
		}
	        else if((i%3)==0)
		{
			sum += i;
		}
	        else if((i%5)==0)
		{
			sum += i;
		}
	}
	cout<<sum;
	return 0;
}
