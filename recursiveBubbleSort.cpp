// Recursive Bubble Sort
// Thuat toan sap xep noi bot bang de quy
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
	// Neu mang khong co phan tu nao hoac co 1 phan tu thi tra ve
	if(n == 0 || n == 1) {
		return;
	} 
		
	for(int i=0; i<n-1; i++) {
		if(arr[i] > arr[i+1])
			swap(arr[i], arr[i+1]);
	}
	
	bubbleSort(arr, n-1);
	
}

int main() {
	int n,arr[15];
	cin >> n;
	cout << "Nhap cac phan tu cua mang:" << endl;
	for ( int i = 0; i < n; i++ ) {
		cin >> arr[i];
	}
	bubbleSort(arr, n);
	for ( int i = 0; i < n; i++ ) {
		cout << arr[i] << " ";
	}
	return 0;
}

