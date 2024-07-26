#include<bits/stdc++.h>
using namespace std;
#define ac std::ios::sync_with_stdio(false),std::cin.tie(0)
#define ll long long 
#define rei(x) for (int i=0; i<x; i++)

int main(){
    ac;
    ll num;
    cin >> num;
    rei(num) {
        ll row, col;
        cin >> row >> col;

        ll layer = max(row, col);

        if (layer == row) {
            if (layer%2 == 0) {
                cout << layer*layer - col + 1 << endl;
            }
            else {
                cout << (layer-1)*(layer-1) + col << endl;
            }
        }
        else {
            if (layer%2 == 0) {
                cout << (layer-1)*(layer-1) + row << endl;
            }
            else {
                cout << layer*layer - row + 1 << endl;
            }
        }
    }
}