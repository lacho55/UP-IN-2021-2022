#include<iostream>
using namespace std;

bool swapcase(char *str){
	
	if(*str == '\0'){
		return true;
	}
	if(*str >= 'A' && *str <= 'Z'){
		*str += 32; 
		return swapcase(str + 1);
	}
	if(*str >= 'a' && *str <= 'z'){
		*str -= 32;
		return swapcase(str + 1);
	}
	
	return swapcase(str + 1);
}


int main(){
	
	char str[] = "Yellow Submarine";
	
    if(swapcase(str)){
    	cout << str;
	}
	else{
		cout << "Invalid input" << endl;
	}
	
	return 0;
}
