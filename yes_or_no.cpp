#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int A=0;
        if(s[0]=='Y' || s[0]=='y'){
            A++;
        }
        if(s[1]=='E' || s[1]== 'e'){
            A++;
        }
        if(s[2]=='S' || s[2]=='s'){
            A++;
        }
        if(A==3){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}