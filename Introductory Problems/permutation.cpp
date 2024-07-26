#include<bits/stdc++.h>
using namespace std;
#define ac std::ios::sync_with_stdio(false),std::cin.tie(0)
#define ll long long 
#define rei(x) for (int i=0; i<x; i++)

int main(){
    ac;
    ll cnt = 0; ll num;
    cin >> num;
    if (num == 1) cout << 1 << endl;
    else if (num <= 3) {
        cout << "NO SOLUTION" << endl;
    }
    else {
        if (num%2 == 0) {
            for (int i=2; i<=num; i+=2) {
                cout << i << " ";
            }
            for (int i=1; i<=num; i+=2) {
                cout << i << " ";
            }
        }
        else {
            for (int i=1; i<=num; i+=2) {
                cout << i << " ";
            }
            for (int i=2; i<=num; i+=2) {
                cout << i << " ";
            }
        }
    }
}