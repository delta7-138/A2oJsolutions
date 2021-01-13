#include <bits/stdc++.h>
using namespace std;
int solve(int n){
    vector<int>llist;
    vector<int>rlist;
    int l,r;
    for(int i = 0; i<n; i++){
        cin>>l>>r;
        llist.push_back(l);
        rlist.push_back(r);
    }
    int minval = llist[0] , maxval = rlist[0];
    for(int i = 1; i<n; i++){
        if(llist[i]<=minval){
            minval = llist[i];
        }
        if(rlist[i]>=maxval){
            maxval = rlist[i];
        }
    }
    for(int i = 0; i<n; i++){
        if(llist[i]==minval && rlist[i]==maxval){
            return (i+1);
        } 
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}