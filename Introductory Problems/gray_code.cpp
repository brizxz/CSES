#include<bits/stdc++.h>
using namespace std;
#define ac std::ios::sync_with_stdio(false),std::cin.tie(0)
#define ll long long 

#define rei(x) for (int i=0; i<x; i++)
#define rei_rev(x) for (int i=x-1; i>=0; i--)
#define rei1(x) for (int i=1; i<=x; i++)

#define rej(x) for (int j=0; j<x; j++)
#define rej1(x) for (int j=1; j<=x; j++)

vector<string> str;
int main(){
    ac;
    int len;
    cin >> len;
    str.push_back("0");
    str.push_back("1");

    for (int i = 2; i<=len; i++) {
        int now_size = str.size();

        for (int j=now_size-1; j>=0; j--) str.push_back(str[j]);
        for (int j=0; j<now_size; j++) str[j] = "0" + str[j];
        for (int j=now_size; j<now_size*2; j++) str[j] = "1" + str[j];
    }

    for (auto i: str) {
        cout << i << endl;
    }
}