#include <iostream>
using namespace std;

int sumOfDigits(int n)
{ 
        if(n == 0)
        {
              return 0;
        }
        else
        {
              return (n%10) + sumOfDigits(n/10);
        }
}

int main()
{
        int num;
 
        cout<<"\nenter a number: ";
        cin>>num;
 
        cout<<"\nsum of digits: "<<sumOfDigits(num);
 
        return 0;
}
