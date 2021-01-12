#include <bits/stdc++.h>
using namespace std;
double solve(int n){
    int inp;
    double sum = 0;
    for(int i = 0; i<n; i++){
        cin>>inp;
        sum =sum + inp;
    }
    return (sum/n);
}
int main(){
    int n;
    cin>>n;
    double ans = solve(n);
    printf("%.12lf" , ans);
    return 0;
}