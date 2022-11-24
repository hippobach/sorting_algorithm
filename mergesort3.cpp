#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"nhap:";
    int n; cin>>n; int a[n]; for(auto &x:a) cin>>x;
    int m; cin>>m; int b[m]; for(auto &x:b) cin>>x;
    int c[n+m];
    int i=0, j=0;
    for(int k=0; k<n+m; k++)
    if(i<n&&j<m) c[k]=a[i]<b[i]?a[i++]:b[j++];
    else c[k] =i<n?a[i++]:b[j++];
    // for(int i=0,j=0, k=0;k<n+m; k++) c[k]=j>=m||(i<n) &&a[i]<b[j]? a[i++]:b[j++];
    for(auto z:c) cout<<z<<" ";

}