#include <bits/stdc++.h>
using namespace std;
bool inString(string inp , char c){
    for(int i = 0; i<inp.length; i++){
        if(c==inp[i]){
            return true;
        }
    }
    return false;
}

bool solve(string inp){
    int ind = 0;
    string refstr = "hello";
    for(int i = 0; i<inp.length(); i++){
        if(inString(refstr , inp[i])){
             
        }
    }
}

int main(){
    string inp;
    cin>>inp;
    bool ans = solve(inp);
    if(ans){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}