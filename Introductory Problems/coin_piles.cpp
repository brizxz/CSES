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
    
    rei(num) {
        ll a, b;
        cin >> a >> b;
        if ((a+b)%3 == 0 && 2*a >= b && 2*b >= a) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

}