#include<iostream>
using namespace std;

int minElem(int * arr, int size) {
  if(size == 1) {
    return arr[0];
  }
  return min(arr[0], minElem(arr+1, size-1));
}

int main(){
	
	int arr[] = {1,2,0,5};
	
	cout << minElem(arr, 4);
	
	return 0;
}
