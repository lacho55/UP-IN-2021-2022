#include<iostream>
using namespace std;

bool isInteresting(int n)
{
	int minDigit = n%10;
	
	while(n)
	{
		if(n%10 > minDigit)
		{
			return false;
		}
		else
		{
			minDigit = n % 10;
		}
		
		n /= 10;
	}
	return true;
}
int main()
{
	int n, number;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin >> number;
		
		if(isInteresting(number))
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
		cout<<endl;
	}
	return 0;
}
