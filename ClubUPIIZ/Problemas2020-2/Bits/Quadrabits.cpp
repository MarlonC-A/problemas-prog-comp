// https://omegaup.com/arena/problem/Quadrabits#problems
// MarlonC-A, 2020

#include<iostream>
#include<math.h>
using namespace std;

string s;
short n, p, co, ck;
unsigned int num;

int main(){
    
    cin>>s>>n;
    
    for(int i=0; i<s.size(); i++){
        num+=((s[i]-48)*(1<<(s.size()-i-1)));
    }
    
    while(n--){
        cin>>co>>ck;
        if(co==1)
            num=(num>>ck);
        else
            num=(num<<ck);
    }
    
    cout<<num<<endl;
    
return 0;
}
