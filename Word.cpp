#include <bits/stdc++.h>
using namespace std;
string convToUpper(string inp){
    for(int i = 0; i<inp.length(); i++){
        if(inp[i]>='a'){
            inp[i] = (char)(inp[i] - 32);
        }
    }
    return inp;
}
string convToLower(string inp){
    for(int i = 0; i<inp.length(); i++){
        if(inp[i]<='Z'){
            inp[i] = (char)(inp[i] + 32);
        }
    }
    return inp;
}
string solve(string inp){
    int upp = 0;
    for(int i = 0; i<inp.length(); i++){
        if(inp[i]>='A' && inp[i]<='Z'){
            upp++;
        }
    }
    string ans;
    int low = inp.length() - upp;
    if(low<upp){
        ans = convToUpper(inp);
    }else{
        ans = convToLower(inp);
    }
    return ans;
}
int main(){
    string inp;
    cin>>inp;
    string res = solve(inp);
    cout<<res;
    return 0;
}