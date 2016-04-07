#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstdio>

using namespace std;

int main(){
    long n,temp;
    cin>>n;
    vector<long> a;
    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back(temp);
    }
    long sum=0;
    for(int i=0;i<n;i++){
        for(int j=i+2;j<n;j++){
            if(a[i]+a[j]>sum)
                sum=a[i]+a[j];
        }
    }
    cout<<sum;
}
