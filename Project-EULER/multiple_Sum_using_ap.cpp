#include <iostream>
#include <bits/stdc++.h>
//This code needs rectification
using namespace std;

int calc_sum(long long int divisor, long long int no_of_terms, long long int last_term)
{
	long long int sum;
	sum = ((no_of_terms)*(divisor + last_term))/2;
	return sum;
}
int num_of_terms(long long int max, long long int divisor, int flag)
{
	//approach: Arithmetic Progression
	//Tn = a + (n-1)*d, 
	//so n = (Tn - a)/d + 1
	int rem;
	long long int tn, n;
	while(max)
	{
		rem = max % divisor;
		if (rem == 0)
		{
			tn = max;
			break;
		}
		max--;
	}

	n = ((tn - divisor)/divisor) + 1;
	if(flag == 1)
	{
		return tn;
	}
	return n;
}
int main()
{
	long long int sum_divisors_3;
	long long int sum_divisors_5;
	long long int sum_divisors_15;

	long long int no_terms_3, last_term_3;
	long long int no_terms_5, last_term_5;
	long long int no_terms_15, last_term_15;

	no_terms_3 = num_of_terms(1000, 3, 0);
	last_term_3 = num_of_terms(1000, 3, 1);
	//cout<<no_terms_3<<" "<<last_term_3<<endl;

	no_terms_5 = num_of_terms(1000, 5, 0);
	last_term_5 = num_of_terms(1000, 5, 1);
	//cout<<no_terms_5<<" "<<last_term_5<<endl;

	no_terms_15 = num_of_terms(1000, 15, 0);
	last_term_15 = num_of_terms(1000, 15, 1);

	sum_divisors_3 = calc_sum(3, no_terms_3, last_term_3);
	sum_divisors_5 = calc_sum(5, no_terms_5, last_term_5);
	sum_divisors_15 = calc_sum(15, no_terms_15, last_term_15);

	long long int sum = 0;
	
	//cout<<sum_divisors_3<<" "<<sum_divisors_5<<" "<<sum_divisors_15<<endl;
	sum = sum_divisors_3 + sum_divisors_5 - (sum_divisors_15);
	cout<<sum<<endl;
	return 0;
}
