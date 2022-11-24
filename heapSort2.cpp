#include<bits/stdc++.h>
using namespace std;

void heapify(int *a, int n, int k) {  //vun tai vi tri k trong day
	if(2*k+1>=n) return;
	int p=2*k+1; // xet con 1
	if(p+1<n && a[p]<a[p+1]) p++; //neu con 2 lon hon chuyen p sang con 2
	if(a[k]<a[p]) {
		swap(a[k], a[p]);
		heapify(a, n, p);
	}
}

void heapsort(int *a, int n) {
	for(int i=n-1; i>=0; i--) heapify(a, n, i);
	for(int i=n-1; i>0; i--) {
		swap(a[0], a[i]);
		heapify(a, i, 0);
	}
}

int main() {
	int a[] = {53, 68, 8, 65, 435, 95, 67, 423, 71, 93, 16, 74};
	int n = sizeof(a)/sizeof(a[0]);
	heapsort(a, n);
	for(auto x : a) cout << x << " ";
	return 0;
}

