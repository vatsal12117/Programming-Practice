#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int main(){
    int n,t,temp,i,j,cnt,ans;
    cin>>n;
    vector<int> a;
    for(int k=0;k<n;k++){
        cin>>temp;
        a.push_back(temp);
    }
    cnt=n;
    while(cnt){
        cnt=0;
        ans=INT_MAX;
        for(int k=0;k<n;k++)
            if(a[k]<ans && a[k]>0)
                ans=a[k];
        for(int k=0;k<n;k++){
            if(a[k]>0){
                a[k]-=ans;
                cnt++;
            }
        }
        if(cnt)
            cout<<cnt<<endl;
    }
    return 0;
}

