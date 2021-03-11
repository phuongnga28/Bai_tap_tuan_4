#include<iostream>
using namespace std;

int main () {
	int a[] = {7, 5, 3, 1, 0};
	int n=4;
	bool b=false;
	for(int i=0;i<sizeof(a) / sizeof(a[0]);i++){
		if(a[i] == n){
		b=true;
		break;
		}
	}
	if(b==true) {cout << "Found";}
	else {cout << "Not Found";}
	return 0;
}
