#include <bits/stdc++.h>
using namespace std;
int solve(int n){
    int numsolveable = 0;
    int flagsum ,flag;
    for(int i = 0; i<n; i++){
        flagsum = 0;
        for(int i = 0; i<3; i++){
            cin>>flag;
            if(flag){
                flagsum++;
            }
        }
        if(flagsum>=2){
            numsolveable++;
        }
    }
    return numsolveable;
}
int main(){
    int n;
    cin>>n;

    cout<<solve(n);
    return 0;
}