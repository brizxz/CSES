#include<bits/stdc++.h>
using namespace std;
#define ac std::ios::sync_with_stdio(false),std::cin.tie(0)
#define ll long long 

#define rei(x) for (int i=0; i<x; i++)
#define rei_rev(x) for (int i=x-1; i>=0; i--)
#define rei1(x) for (int i=1; i<=x; i++)

#define rej(x) for (int j=0; j<x; j++)
#define rej1(x) for (int j=1; j<=x; j++)

void findmax(int len, int num, vector<ll> arr, ll sum, ll *ans, ll now) {

    if (len >= num) {
        *ans = min(*ans, abs(sum - 2 * now)); 
        return;
    }

    findmax(len+1, num, arr, sum, ans, now + arr[len]);
    findmax(len+1, num, arr, sum, ans, now);
}

int main(){
    ac;
    int num;
    cin >> num;
    vector<ll> arr(num);
    rei(num) cin >> arr[i];

    ll sum = 0;
    rei(num) sum += arr[i];
    ll res = 1e18;
    findmax(0, num, arr, sum, &res, 0);
    cout << res << endl;
}