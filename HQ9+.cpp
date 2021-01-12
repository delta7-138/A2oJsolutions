#include <bits/stdc++.h>
using namespace std;
int main(){
    string inp;
    cin>>inp;
    for(int i = 0; i<inp.length(); i++){
        if(inp[i]=='H'|| inp[i]=='Q' || inp[i]=='9'){
            cout<<"YES";
            break;
        }else if(i==inp.length()-1){
            cout<<"NO";
        }
    }
    return 0;
}