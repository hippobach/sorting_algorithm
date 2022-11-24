#include<bits/stdc++.h>
using namespace std;

void BUBBLE(int *a, int n) {
	for(int i=0; i<n; i++) {
		for(int j=n-1; j>i; j--) {
			if(a[j]<a[j-1]) {
				swap(a[j-1], a[j]);
			}
		}
	}
}

//version2
void bubble2(int *L, int *R) {
	for(int *p = L; p<R; p++) {
		int ok = 1;
		for(int *q=R-1; q>p; q--)
		if(*q < *(q-1)) {
			swap(q[-1], q[0]);
			ok = 0;
		}
		if(ok) return;
	}
}

template<class T, class CMP=less<T>()>
void bubble3(T *L, T *R, CMP ss=less<T>()) {
	for(T *p = L; p<R; p++) {
		int ok = 1;
		for(T *q=R-1; q>p; q--)
		if(ss(*q, *(q-1))) {
			swap(q[-1], q[0]);
			ok = 0;
		}
		if(ok) return;
	}
}

int main() {
	int a[]={10,7,4,-7,23,67,-9,37,99};
	int n =sizeof(a)/sizeof(int);
	//BUBBLE(a,n);
	//BUBLE(a+4, 3)
	//bubble2(a, a+n);
	bubble3(a, a+n, greater<int>());
	for(auto x:a) cout << x << " ";
	return 0;
}

