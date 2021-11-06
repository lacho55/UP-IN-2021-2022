#include<iostream>
using namespace std;

//Made by Bojidara Kalichkova

int main(){
	
	unsigned int n;
	int a[10000];
	
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	     int br = 0;
		int product = 1;
	for (int i = 0; i < n; i++)
	{
		while (a[i] > 0)
		{
			product = product * (a[i] % 10);
			a[i]=a[i] / 10;

		}

		if (product <= 9) { br = br + 1;}
		product = 1;

	}
	if (br != 0) cout << br;
	else cout << "There are no such numbers";

  }
