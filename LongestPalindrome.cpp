#include<iostream>
#include<string>

using namespace std;

string s;

int checkPalindrome(int i,int j){
    int flag=1;
    for(int k=0;k<(j-i+1)/2;k++){
        if(s[i+k]!=s[j-k]){
            flag=0;
            break;
        }
    }
    return flag;
}

int main(){
    int x,y,pal=1;
    string temp;
    do{
        getline(cin,temp);
        s+=temp;
    }while(temp!="");
    cout<<s<<endl;
    int len=s.length();
    for(int i=0;i<len-1;i++){
        for(int j=i+1;j<len;j++){
            if(checkPalindrome(i,j) && (j-i+1)>pal){
                x=i;
                y=j;
                pal=j-i+1;
            }

        }
    }
    for(int k=x;k<=y;k++){
        cout<<s[k];
    }
    cout<<"\nLength : "<<pal;
}
