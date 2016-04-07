#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main(){
    int t,n,a,b,flag;
    cin >> t;
    while(t--){
        cin>>n;
        a=0;
        b=n;
        flag=1;
        while(b%3!=0){
            a+=5;
            b=n-a;
            if(b<0){
                flag=0;
                break;
            }
        }
        if(flag){
            for(int i=0;i<b;i++)
                cout<<5;
            for(int i=0;i<a;i++)
                cout<<3;
        }
        else
            cout<<-1;
        cout<<endl;
    }
    return 0;
}

