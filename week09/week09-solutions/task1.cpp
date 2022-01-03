#include<iostream>
using namespace std;

int recStrlen(const char* str)
{
	if(*str == '\0')
  {
  	return 0; 
  }
  
  return recStrlen(str + 1) + 1;
}

int main(){
	
	char arr[] = "asdas";
	
	cout << "The length is: " << recStrlen(arr);
	
	return 0;
}
