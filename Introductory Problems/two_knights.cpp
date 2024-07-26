#include<bits/stdc++.h>
using namespace std;
#define ac std::ios::sync_with_stdio(false),std::cin.tie(0)
#define ll long long 
#define rei(x) for (int i=0; i<x; i++)
#define rei1(x) for (int i=1; i<=x; i++)

int main(){
    ac;
    int size;
    cin >> size;
    rei1(size) {
        ll ans = i*i;
        // 扣掉2*3和3*2的情况
        cout << ans*(ans-1)/2 - 4*(i-1)*(i-2) << endl;
    }



}