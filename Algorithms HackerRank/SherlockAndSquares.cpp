#include<iostream>
#include<cmath>

using namespace std;

int main(){
    long t,a,b,temp,cnt;
    cin>>t;
    while(t--){
        cin>>a>>b;
        cnt=floor(sqrt(b))-ceil(sqrt(a))+1;
        cout<<cnt<<endl;
    }
    return 0;
}
