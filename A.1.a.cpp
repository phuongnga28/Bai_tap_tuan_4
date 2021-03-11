#include<iostream>
using namespace std;
int main() {
	int a[] = {9, 7, 2, 11, 32};
	int temp;
	int n = sizeof(a) / sizeof(a[0]);
	cout << "length = " << n << endl;
	for(int i=0; i<n;i++){
		for(int j=i+1;j<n+1;j++){
			if(a[i] > a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=1; i<=n;i++){
		cout << a[i] << " ";
	}
	return 0;
}

