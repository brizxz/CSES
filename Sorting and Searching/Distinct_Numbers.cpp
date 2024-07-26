#include<bits/stdc++.h>
using namespace std;
#define ac std::ios::sync_with_stdio(false),std::cin.tie(0)
#define ll long long 

#define rei(x) for (int i=0; i<x; i++)
#define rei_rev(x) for (int i=x-1; i>=0; i--)
#define rei1(x) for (int i=1; i<=x; i++)

#define rej(x) for (int j=0; j<x; j++)
#define rej1(x) for (int j=1; j<=x; j++)

int main(){
    ac;
    int num;
    cin >> num;
    vector<int> arr(num);

    rei(num){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int count = 1;
    rei1(num-1){
        if(arr[i] != arr[i-1]){
            count++;
        }
    }
    cout << count << endl;
}