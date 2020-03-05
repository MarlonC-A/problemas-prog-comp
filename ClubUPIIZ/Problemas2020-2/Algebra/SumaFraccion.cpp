// https://omegaup.com/arena/problem/Suma-reduce-fracciones/#problems
// MarlonC-A, 2020

#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int nua, dea, nus, des=1, u;

int mcm(int a, int b);
int MCD(int a, int b);

int main(){
    while(cin>>nua>>dea){
        
        u=mcm(dea,des);
        nua*=u/dea;
        nus*=u/des;
        nus+=nua;
        des=u;
        
    }
    
    u=MCD(nus,des);
    des/=u;
    nus/=u;
    
    if(des<0){
        des*=-1; nus*=-1;
    }
    
    cout<<nus<<" / "<<des<<endl;
    
return 0;
}

int mcm(int a, int b){
    return a*b/(MCD(a,b));
}

int MCD(int a, int b){
    if(abs(b)>abs(a)) swap(a,b);
    if(!b) return a;
    return MCD(a%b,b);
}
