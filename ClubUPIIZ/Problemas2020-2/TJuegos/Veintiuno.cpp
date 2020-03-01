// https://omegaup.com/arena/problem/veintiuno#problems
// MarlonC-A, 2020

#include<iostream>
using namespace std;

short n, k, m;

int main(){
    cin>>n>>k;
    
    m=n%(k+1);
    if(!m) m=k+1;
    
    if(m-1){
        cout<<1<<endl<<m-1<<endl;
    } else {
        cout<<0<<endl<<m<<endl;
    }
    
return 0;
}
