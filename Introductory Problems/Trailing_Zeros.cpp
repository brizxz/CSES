#include<bits/stdc++.h>
using namespace std;
#define ac std::ios::sync_with_stdio(false),std::cin.tie(0)
#define ll long long 
#define rei(x) for (int i=0; i<x; i++)
#define rei1(x) for (int i=1; i<=x; i++)

int main(){
    ac;
    int num;
    cin >> num;
    
    ll ans = 0;

    for (int i=5; i<=num; i*=5) {
        ans += num/i;
    }

    cout << ans << endl;

}