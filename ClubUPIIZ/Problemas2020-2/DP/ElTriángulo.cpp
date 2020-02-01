#include<iostream>
#include<algorithm>
using namespace std;

unsigned short n, arr[101][101];


int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<(i+1); j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=(n-2); i>=0; i--){
        for(int j=0; j<(i+1); j++){
            arr[i][j]+=max(arr[i+1][j],arr[i+1][j+1]);
        }
    }
    
    cout<<arr[0][0]<<endl;
    
return 0;
}
