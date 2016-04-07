#include<iostream>

using namespace std;

int main(){
    long t,n,cnt,temp,num;
    cin>>t;
    while(t--){
        cin>>n;
        num=n;
        cnt=0;
        while(n){
            temp=n%10;
            if(temp!=0 && num%temp==0){
                cnt++;
            }
            n=n/10;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
