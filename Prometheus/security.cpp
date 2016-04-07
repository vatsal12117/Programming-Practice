#include<iostream>
#include<vector>


using namespace std;

int mapped(char i){
    return i-96;
}

int main(){
    long t,n,k,len;
    char i;
    vector<char> a;
    vector<char>::iterator it;
    cin>>t;
    while(t--){
        cin>>n>>k;
        i='a';
        while(mapped(i)<=k){
            if(mapped(i)%2==0){
                a.push_back(i);
                a.push_back(i);
            }
            else
                a.push_back(i);
            i++;
        }
        len=a.size();
        if(len==n){
                for(it=a.begin();it!=a.end();it++)
                    cout<<*it;
        }
        else if(len<n){
            a.insert(a.begin(),n-len,'a');
            for(it=a.begin();it!=a.end();it++)
                    cout<<*it;
        }
        else
            cout<<"No such string."<<endl;
    }
    return 0;
}
