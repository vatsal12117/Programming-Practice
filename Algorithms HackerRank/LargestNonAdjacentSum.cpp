#include<iostream>
#include<vector>

using namespace std;

int main(){
    long n,temp;
    cin>>n;
    vector<long> a;
    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back(temp);
    }
    long incl,excl,excl_new;
    incl=a[0];
    excl=0;
    for(int i=1;i<n;i++){
        excl_new=max(incl,excl);
        incl=excl+a[i];
        excl=excl_new;
    }
    cout<<"The Largest Sum with no two elements adjacent is : "<<max(incl,excl);
    return 0;
}
