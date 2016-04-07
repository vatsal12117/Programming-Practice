#include<iostream>
#include<vector>


using namespace std;

int mapped(char i){
    return i-96;
}

void print(int freq[]){
    char i='a';
    for(int j=1;j<27;j++,i++){
        while(freq[j]--){
            cout<<i;
        }
    }
}

int main(){
    long t,n,k,len,temp,cnt;
    char i;
    vector<char> a;
    vector<char>::iterator it;
    int freq[27]={0};
    cin>>t;
    while(t--){
        cin>>n>>k;
        i='a';cnt=0;temp=0;
        while(temp<k){
            temp=mapped(i);
            if(temp%2==0){
                freq[temp]+=2;
                cnt+=2;
            }
            else{
                freq[temp]++;
                cnt++;
            }
            //cout<<i<<cnt;
            i++;
        }
        //cout<<cnt;
        temp=n-cnt;
        //cout<<temp;
        if(temp==0)
            print(freq);
        else if((temp)>0){
            if(temp%2==0)
                freq[1]+=temp;
            else{

            }
            print(freq);
        }else{
            cout<<"No such string.";
        }
    }
    return 0;
}

