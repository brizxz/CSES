#include<bits/stdc++.h>
using namespace std;
#define ac std::ios::sync_with_stdio(false),std::cin.tie(0)
#define ll long long 

int main(){
    ac;
    ll num;
    cin >> num;
    ll total =  (num * (num + 1)) / 2;
    int val;
    for (int i=0; i<num-1; i++) {
        cin >> val;
        total -= val;
    }
    cout << total << endl;
}