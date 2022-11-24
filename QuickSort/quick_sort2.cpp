// Tren lop
#include<bits/stdc++.h>
using namespace std;
void quicksort(int *a,int L,int R) //sx a[L]...a[R-1]
{
	if(L+1>=R) return;
	swap(a[L],a[(L+R)/2]);
	int i = L;
	for(int j =L+1;j<R;j++)
	if(a[j]<a[L]) swap(a[++i],a[j]);
	swap(a[L],a[i]);
	quicksort(a,L,i);
	quicksort(a,i+1,R);
}
void Quicksort(int *L,int *R) 
{
	if(L+1>=R) return;
	swap(*L,*(L+(R-L)/2));
	int *i = L;
	for(int *j =L+1;j<R;j++)
	if(*j<*L) swap(*++i,*j);
	swap(*L,*i);
	Quicksort(L,i);
	Quicksort(i+1,R);
}
template<class T, class CMP = less<T>>
void Quick_sort(T *L,T *R, CMP ss= less<T>()) 
{
	if(L+1>=R) return;
	swap(*L,*(L+(R-L)/2));
	T *i = L;
	for(T *j =L+1;j<R;j++)
	if(ss(*j,*L)) swap(*++i,*j);
	swap(*L,*i);
	Quick_sort(L,i,ss);
	Quick_sort(i+1,R,ss);
}
int main(){
	int a[]= {23,64,74,68,38,78,86,62,43,28,39,18}, n= sizeof(a)/sizeof(int);
//	quicksort(a,0,n);
//	Quicksort(a,a+n);
	Quick_sort(a, a+n);
	for(auto z:a) cout<<z<<" ";
}
