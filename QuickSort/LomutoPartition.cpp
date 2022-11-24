// Phan hoach Lomuto
#include<bits/stdc++.h>
using namespace std;

//Phan hoach
int partition(int a[], int l, int r) {
	int pivot = a[r];
	int i = l-1;
	for(int j=l; j<r; j++) {
		if(a[j] <= pivot) {
			++i;
			swap(a[i], a[j]);
		}
	}
	++i;
	swap(a[i], a[r]);
	return i;
}

void quickSort(int a[], int l, int r) {
	if(l >= r) return;
	int p = partition(a,l,r); // p chinh la ket qua tra ve i
	quickSort(a,l,p-1);
	quickSort(a,p+1,r);
}

int main() {
	int a[100];
	int n; cin >> n;
	srand(time(NULL));
	for(int i=0; i<n; i++) {
		a[i] = rand() % 100;
	}
	quickSort(a,0,n-1);
	for(int i=0; i<n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}

