#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
bool checkLucky(int num){
    if(num==0){
        return false;
    }
    if(num==7 || num==4){
        return true;
    }
    int r = 0;
    while(num!=0){
        r = num%10;
        num = num/10;
        if(r!=4 || r!=7){
            return false;
        }
    }
    return true;
}

bool solve(ll inp){
    ll r = 0;
    int dig = 0;
    while(inp!=0){
        r = inp%10;
        inp = inp/10;
        if(r==4 || r==7){
            dig++;
        }
    }
    if(checkLucky(dig)){
        return true;
    }
    return false;
}
int main(){
    ll inp;
    cin>>inp;
    if(solve(inp)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}