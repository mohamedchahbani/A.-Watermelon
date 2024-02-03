#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
    ll t;
    string ch;
    fast;

    cin>>t;

    if ((t%2==0)&&(t>2))
    {
        cout<<"OUI";
    }else{
        cout<<"NON";
    }  
    return 0;
}