#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,t,temp,i,j,ans;
    cin>>n>>t;
    vector<int> a;
    for(int k=0;k<n;k++){
        cin>>temp;
        a.push_back(temp);
    }
    while(t--){
        cin>>i>>j;
        ans=a[i];
        for(int k=i+1;k<=j;k++)
            if(a[k]<ans)
                ans=a[k];
        cout<<ans<<endl;
    }
    return 0;
}
