#include<bits/stdc++.h>
using namespace std;

void Insert(int *a, int n) {
	for(int i=1; i<n; i++) {
		int j, x = a[i];
		for(j=i-1; j>=0 && x<a[j]; j--) a[j+1] = a[j];
			a[j+1] = x;
	}	
}

int main() {
	int a[]={10,7,4,-7,23,67,-9,37,99};
	int n =sizeof(a)/sizeof(int);
	Insert(a, n);
	for(auto x:a) cout << x << " ";
	return 0;
}

