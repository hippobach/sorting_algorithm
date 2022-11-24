#include<bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp) {
	int temp;
	temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n) {
	for(int i=0; i<n-1; i++) {
		int min_index = i;
		for(int j=i+1; j<n; j++) {
			if(arr[j] < arr[min_index]) {
				min_index = j;
			}
		}
		if(min_index != i)
            swap(&arr[min_index], &arr[i]);
	}
}

void printArray(int arr[], int n) {
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
}

int main() {
	int n; cin >> n;
	int arr[20];
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
	selectionSort(arr, n);
    cout << "Sorted array: " << endl;
    printArray(arr, n);
	return 0;
}

