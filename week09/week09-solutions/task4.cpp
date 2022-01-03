#include<iostream>
using namespace std;


bool areEqual(const char *str1,const char *str2) {
	if (*str1 == '\0' && *str2 == '\0') {
		return true;
	}

	if (*str1 == *str2) {
		return areEqual(str1 + 1, str2 + 1);
	}
	else {
		return false;
	}
}

int main() {

	char str1[] = "daaa";
	char str2[] = "daaa";
	
	cout << areEqual(str1, str2);
	
	return 0;
}

