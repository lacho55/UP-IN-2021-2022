#include<iostream>
using namespace std;

void evaluate(const char* str){
	static int sCaps = 0;
	static int lCaps = 0;
	static int digits = 0;
	
	if(*str == '\0'){
		cout << "Small Letters: " << sCaps << endl;
		cout << "Capital Letters: " << lCaps << endl;
		cout << "Digits: " << digits << endl;
		return;
	}
	if(*str >= 'A' && *str <= 'Z'){
		lCaps++;
	}
	if(*str >= 'a' && *str <= 'z'){
		sCaps++;
	}
	if(*str >= '0' && *str <= '9'){
		digits++;
	}
	
	evaluate(str + 1);
}

int main(){
	char str[] = "123aABbcCZ";
	
	evaluate(str);
	
	return 0;
}
