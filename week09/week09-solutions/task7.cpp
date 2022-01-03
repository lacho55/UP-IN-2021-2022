#include<iostream>
using namespace std;

int toBinary(int number) {
 if(number == 0) {
   return 0;
 }
 if(number == 1) {
   return 1;
 }
 return toBinary(number/2)*10 + (number%2);
}

int main(){
	
	cout << toBinary(10);
	
	return 0;
}
