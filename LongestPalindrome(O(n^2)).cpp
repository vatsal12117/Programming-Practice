#include<iostream>

using namespace std;

int main(){
    string s,temp;
    int m,st,dst;
    do{
        getline(cin,temp);
        s+=temp;
    }while(temp!="");
    int maxlen=1,len=s.length();
    for(int i=1;i<len-1;i++){
        m=1;
        while(s[i-m]==s[i+m]){
            m++;
        }
        if((m*2-1)>maxlen){
            maxlen=m*2-1;
            st=i-m+1;
            dst=i+m-1;
        }
    }
    for(int i=st;i<=dst;i++){
        cout<<s[i];
    }
    cout<<"\nLength : "<<maxlen;
    return 0;
}
