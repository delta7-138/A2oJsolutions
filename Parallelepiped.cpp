#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll solve(ll a1 , ll a2 , ll a3){
    if(a1==a2 && a2==a3){
        int sum = (int)sqrt(a1) * 12;
        return sum;
    }
    vector<vector<ll>>divList;
    ll magicnum = (ll)sqrt(a1 * a2 * a3);
    for(ll i = 1; i<=magicnum; i++){
        if(magicnum%i==0){
            for(ll j = 1;j<=magicnum/i; j++){
                vector<ll>temp;
                if((magicnum/i)%j==0){
                    temp.push_back(i);
                    temp.push_back(j);
                    temp.push_back(magicnum/(i *j));
                    //cout<<i<<" "<<j<<" "<<magicnum/(i*j)<<endl;
                }
                divList.push_back(temp);
            }
        }
    }

    vector<ll>ans;
    for(ll i = 0; i<divList.size(); i++){
        ans = divList[i]; 
        if(a1!=ans[0]*ans[1] && a1!=ans[1]*ans[2] && a1!=ans[2]*ans[0]){
            continue;
        }else{
            if(a2!=ans[0]*ans[1] && a2!=ans[1]*ans[2] && a2!=ans[2]*ans[0]){
                continue;
            }else{
                break;
            }
        }
    }
    ll sumedges = ans[0] + ans[1] + ans[2];
    return sumedges*4;
}

int main(){
    ll a1 , a2 , a3;
    cin>>a1>>a2>>a3;
    ll ans = solve(a1 , a2 , a3);
    cout<<ans;
    return 0;
}