#include<bits/stdc++.h>
using namespace std;
#define ac std::ios::sync_with_stdio(false),std::cin.tie(0)
#define ll long long 

int main(){
    ac;
    string str;
    cin >> str;
    int ans = 1;
    int tmp = 1;
    for (int i=1; i<str.size(); i++) {
        if (str[i] != str[i-1]) tmp = 1;
        else tmp++;
        // cout << tmp << endl;
        ans = max(ans, tmp);
    }

    cout << ans << endl;
}