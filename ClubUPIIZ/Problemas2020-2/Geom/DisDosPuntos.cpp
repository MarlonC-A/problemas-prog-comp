// https://omegaup.com/arena/problem/Distancia-entre-dos-puntos#problems
// MarlonC-A, 2020

#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

long long unsigned int x,y,x2,y2;
double r;

int main(){
    
    cin>>x>>y>>x2>>y2;
    
    if(x>x2)
        swap(x,x2);
    if(y>y2)
        swap(y,y2);
    
    r=sqrt(double((x2-x)*(x2-x)+(y2-y)*(y2-y)));
    
    cout<<r<<endl;
return 0;
}
