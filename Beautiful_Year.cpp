#include <bits/stdc++.h>
using namespace std;
bool checkDistinct(int n){
    int hashtable[10];
    for(int i = 0; i<10; i++){
        hashtable[i]=0;
    }
    int r = 0;
    while(n!=0){
        r = n%10;
        n= n/10;
        hashtable[r]++;
        if(hashtable[r]>1){
            return false;
        }
    }
    return true;
}
int solve(int inp){
    for(int i = inp+1; ; i++){
        if(checkDistinct(i)){
            return i;
        }
    }
}
int main(){
    int inp;
    cin>>inp;
    int ans = solve(inp);
    cout<<ans;
    return 0;
}