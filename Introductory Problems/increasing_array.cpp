#include<bits/stdc++.h>
using namespace std;
#define ac std::ios::sync_with_stdio(false),std::cin.tie(0)
#define ll long long 
#define rei(x) for (int i=0; i<x; i++)

int main(){
    ac;
    ll cnt = 0; ll num;
    cin >> num;
    vector <int> arr(num+1);
    for (int i=0; i<num; i++) {
        cin >> arr[i];
    }

    for (int i=1; i<num; i++) {
        if (arr[i] < arr[i-1]) {
            cnt += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }

    cout << cnt << endl;
}