// https://omegaup.com/arena/problem/COMI-Canchas/#problems
// MarlonC-A, 2020

#include<algorithm>
#include<iostream>
using namespace std;

int a,b,x,y,a1,b1,x1,y1,k;

int main(){    
    
    cin>>a>>b>>x>>y>>a1>>b1>>x1>>y1;
    
    if(x<a)
        swap(x,a);
    
    if(y<b)
        swap(y,b);
    
    if(x1<a1)
        swap(x1,a1);
    
    if(y1<b1)
        swap(y1,b1);
    
    int A[]={a,x,a1,x1},B[]={b,y,b1,y1};
    
    sort(A,A+4);
    sort(B,B+4);
    
    bool bul=((a<=a1 && a1<=x)||(a1<=a && a<=x1)) && ((b<=b1 && b1<=y)||(b1<=b && b<=y1));
    
    cout<<(x-a)*(y-b)+(x1-a1)*(y1-b1)-((A[2]-A[1])*(B[2]-B[1]))*bul<<endl;
    
return 0;
} 
