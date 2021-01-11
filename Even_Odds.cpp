#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll solve(ll n , ll k){
    ll evest = 0;
    if(n%2==0){
        evest = n/2 + 1;
    }else{
        evest = (n+1)/2 + 1;
    }
    if(k<evest){
        return (2 * k - 1);
    }
    return (2 * (k-evest+1));
}
int main(){
    ll n , k;
    cin>>n>>k;
    ll ans = solve(n , k);
    cout<<ans;
}