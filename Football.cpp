#include <bits/stdc++.h>
using namespace std;
bool solve(string inp){
    for(int i = 0; i<inp.length(); i++){
        int ctr = i+1 , rep = 0;
        while(inp[ctr]==inp[i]){
            rep++;
            if(rep==7){
                return true;
            }
            i++;
        }
    }
    return false;
}

int main(){
    string inp;
    cin>>inp;
    if(solve(inp)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}