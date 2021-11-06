#include<iostream>
using namespace std;

//Made by Bojidara Kalichkova

int main(){
	
	unsigned int n;
	int nuli = 0, edinici = 1, brNumbers = 0;
	
	cin >> n;
	int k;
	
	for (int i = 2; i <= n; i++)
	{
		k = i;
		while (k > 1)
		{
			if (k % 2 == 0)
			{
				nuli++;
				k = k/2;
			}
			else { edinici++; k /= 2; }

		}
	    if (nuli == edinici) brNumbers=brNumbers+1;
		nuli = 0;
		edinici = 0;
	}
	
	cout << brNumbers;
  
  }
