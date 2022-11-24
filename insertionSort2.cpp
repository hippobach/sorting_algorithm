#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {
	int key, i, j;
	for(i=1; i<n; i++) {
		key = arr[i];
		j = i - 1;
		while(j>=0 && arr[j] > key) {
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}

void inputArray(int arr[], int n) {
	cout << "Nhap cac phan tu cua mang:" << endl;
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
}

void printArray(int arr[], int n) {
	for(int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}
}

int main() {
	int n; cin >> n;
	int arr[20];
	inputArray(arr, n);
	insertionSort(arr, n);
	printArray(arr, n);
	return 0;
}

