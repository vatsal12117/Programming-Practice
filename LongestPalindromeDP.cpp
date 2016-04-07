#include<iostream>
#include<string>

using namespace std;

int main(){
    string s,temp;
    int curlen,maxlen=1,st;
    do{
        getline(cin,temp);
        s+=temp;
    }while(temp!="");
    int len=s.length();
    bool a[len][len];
    for(int i=0;i<len;i++)
        a[i][i]=true;
    for(int i=0;i<len-1;i++){
        if(s[i]==s[i+1]){
            a[i][i+1]=true;
            maxlen=2;
            st=i;
        }
    }
    for(int curlen=3;curlen<=len;curlen++){
        for(int i=0;i<len-curlen+1;i++){
            int j=i+curlen-1;
            if(s[i]==s[j] && a[i+1][j-1]==true){
                a[i][j]=true;
                maxlen=curlen;
                st=i;
            }
        }
    }
    for(int i=st;i<st+maxlen;i++)
        cout<<s[i];
    cout<<"\nLength : "<<maxlen;
    return 0;
}
