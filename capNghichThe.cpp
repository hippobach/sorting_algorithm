// Day la thuat toan chia va chinh phuc 
#include<bits/stdc++.h>
using namespace std;

// Tron 2 day con da duoc sap xep
int merge(int a[], int l, int m, int r) {
	vector<int> x(a + l, a + m +1); // mang con ben trai
	vector<int> y(a + m +1, a + r + 1); // mang con ben phai
	int i = 0;
	int j = 0;
	int count = 0;
	while(i < x.size() && j < y.size()) {
		if(x[i] <= y[j]) {
			a[l] = x[i];
			++l;
			++i;
		} else {
			count += x.size() - i;
			a[l] = y[j];
			++l;
			++j;
		}
	} 
	while(i < x.size()) {
		a[l] = x[i];
		++l;
		++i;
	}
	while(j < y.size()) {
		a[l] = y[j];
		++l;
		++j;
	}
	return count;
}

int mergeSort(int a[], int l, int r) {
	int dem = 0;
	if(l < r) {
		int m = (l+r)/2;
		dem += mergeSort(a,l,m);
		dem += mergeSort(a,m+1,r);
		dem += merge(a,l,m,r);
	}
	return dem;
}

int main() {
//	int n; cin >> n;
//	int a[n];
//	srand(time(NULL));
//	for(int i=0; i < n; i++) {
//		a[i] = rand() % 10000;
//	}
//	int ans = mergeSort(a,0,n-1);
//	cout << ans << endl;
	int a[6] = {8, 7, 1, 9, 2, 3};
	cout << mergeSort(a,0,5);
	return 0;
}

