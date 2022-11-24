#include<iostream>

using namespace std;

void interchangeSort(int a[], int n) {
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(a[j] < a[i]) {
				int temp;
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main() {
	int n,a[15];
	cin >> n;
	for ( int i = 0; i < n; i++ ) {
		cin >> a[i];
	}
	interchangeSort( a, n );
	for ( int i = 0; i < n; i++ ) {
		cout << a[i] << " ";
	}
}

