#include<bits/stdc++.h>
using namespace std;
int solve(int k , int l , int m , int n, int d){
    int ans = 0;
    for(int i = 1; i<=d; i++){
        if(i%k!=0 && i%l!=0 && i%m!=0 && i%n!=0){
            ans++;
        }
    }
    return (d - ans);
}
int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int ans = solve(k , l , m , n , d);
    cout<<ans;
    return 0;
}