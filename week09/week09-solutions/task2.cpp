#include<iostream>
using namespace std;

int reverse(int num, int acc)
{
	if (num == 0)
	{
		return acc;
	}
	
	return reverse(num / 10, (acc * 10) + (num % 10));
	
}

int main(){
	int num = 1132;
	
	cout << "The new num is: " << reverse(num, 0);
	
	return 0;
}
