#include<iostream>

using namespace std;

int count[10000001];

int main() {
	int a[15];
	int n;
	cin >> n;
	int m = INT_MIN;
	for(int i=0; i<n; i++) {
		cin >> a[i];
		count[a[i]]++;
		m = max(m, a[i]);
	}
	for(int i=0; i<=m; i++) {
		if(count[i] != 0) {
			for(int j=0; j<count[i]; j++) {
				cout << i << " ";
			}
		}
	}
	
	return 0;
}

