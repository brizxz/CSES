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
    
    ll base = 1;
    rei(num) {
        base = (base*2)%1000000007;
    }

    cout << base << endl;

}