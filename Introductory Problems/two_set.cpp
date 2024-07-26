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
    if (num%4 == 1 || num%4 == 2) {
        cout << "NO" << endl;
    }
    else {
        if (num%4 == 0) {
            cout << "YES" << endl;
            cout << num/2 << endl;
            for (int i=1; i<=num; i+=4) {
                cout << i << " ";
            }
            for (int i=4; i<=num; i+=4) {
                cout << i << " ";
            }
            cout << endl;
            cout << num/2 << endl;
            for (int i=2; i<=num; i+=4) {
                cout << i << " ";
            }
            for (int i=3; i<=num; i+=4) {
                cout << i << " ";
            }
        }
        else {
            cout << "YES" << endl;
            cout << num/2+1 << endl;
            cout << 1 << " " << 2 << " ";
            for (int i=4; i<=num; i+=4) {
                cout << i << " ";
            }
            for (int i=7; i<=num; i+=4) {
                cout << i << " ";
            }

            cout << endl;
            cout << num/2 << endl;
            cout << 3 << " ";
            for (int i=5; i<=num; i+=4) {
                cout << i << " ";
            }
            for (int i=6; i<=num; i+=4) {
                cout << i << " ";
            }
            cout << endl;
        }
    }


}