/*
11 11 13 14| 6 6 7 8 9
*/

#include<bits/stdc++.h>
using namespace std;
// int b[135525];
// void mergesort(int *a, int L, int R){//sx a[L]...a[R-1]
//     if(L>=R-1) return;//suy bien
//     int M=(L+R)/2;
//     mergesort(a,L,M);
//     mergesort(a,M,R);
//     //int b[R+5];
//     for(int i= L, j=M, k= L;k<R; k++)
//     b[k]= j>=R || (i<M && a[i]<a[j])? a[i++]:a[j++];
//     for(int k=L; k<R; k++) a[k]= b[k];
// }
//int b[135525];
// void mergesort( int *L, int *R){//sx con tro L den R-1
//     if(L>=R-1) return;//suy bien
//     int *M=L+(R-L)/2;
//     mergesort(L,M);
//     mergesort(M,R);
//     //int b[R+5];
//     for(int *i= L, *j=M, *k=b;k<b+(R-L); k++)
//     *k= j>=R || (i<M && *i<*j)? *i++:*j++;
//     for(int *k=L, *p=b; k<R; k++) *k=*p++;
// }
// void mergesort( int *L, int *R, int*b){//sx con tro L den R-1
//     if(L>=R-1) return;//suy bien
//     int *M=L+(R-L)/2;
//     mergesort(L,M,b);
//     mergesort(M,R,b);
//     //int b[R+5];
//     for(int *i= L, *j=M, *k=b;k<b+(R-L); k++)
//     *k= j>=R || (i<M && *i<*j)? *i++:*j++;
//     for(int *k=L, *p=b; k<R; k++) *k=*p++;
// }
// void ms(int *L, int* R){
//     int *b= new int [R-L+5];
//     mergesort(L,R,b);
//     delete []b;
// }
template<class T, class CMP>
void mergesort(T *L,T *R,T*b, CMP ss){//sx con tro L den R-1
    if(L>=R-1) return;//suy bien
    T *M=L+(R-L)/2;
    mergesort(L,M,b,ss);
    mergesort(M,R,b,ss);
    //int b[R+5];
    for(T *i= L, *j=M, *k=b;k<b+(R-L); k++)
    *k= j>=R || (i<M && ss(*i,*j))? *i++:*j++;
    for(T *k=L, *p=b; k<R; k++) *k=*p++;
}
template<class T, class CMP= less<T>>
void ms(T *L, T* R, CMP ss= less<T>()){
    T *b= new T [R-L+5];
    mergesort(L,R,b,ss);
    delete []b;
}
int main(){
    int a[]= {23,64,74,68,38,78,86,62,43,28,39,18}, n= sizeof(a)/sizeof(int);
    // mergesort(a,0,n);
    // mergesort(a, a+n);
    // ms(a,a+n);
    ms(a, a+n, greater<int>());
    for(auto z:a) cout<<z<<" ";
}
