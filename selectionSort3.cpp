#include<bits/stdc++.h>
using namespace std;

void Selection(int *a, int n) {
	for(int i=0; i<n; i++) {
		int p = i;
		for(int j=i+1; j<n; j++)
		if(a[j]<a[p]) p=j;
		swap(a[i], a[p]);
	}
}

void Selection2(int *L, int *R) {
	for(int *p=L; p<R; p++) {
		int *z=p;
		for(int *q = p+1; q<R; q++) if(*q<*z) z=q;
		swap(*p,*z);
	}
}

int main() {
	int a[]={10,7,4,-7,23,67,-9,37,99};
	int n =sizeof(a)/sizeof(int);
	//Selection(a, n);
	Selection2(a, a+n);
	for(auto x:a) cout << x << " ";
	return 0;
}

