#include<bits/stdc++.h>
using namespace std;
#define ac std::ios::sync_with_stdio(false),std::cin.tie(0)
#define ll long long 

#define rei(x) for (int i=0; i<x; i++)
#define rei_rev(x) for (int i=x-1; i>=0; i--)
#define rei1(x) for (int i=1; i<=x; i++)

#define rej(x) for (int j=0; j<x; j++)
#define rej1(x) for (int j=1; j<=x; j++)

void hanoi(int num, int source, int auxiliary, int destination) {
    if (num == 1) {
        return;
    }

    hanoi(num-1, source, destination, auxiliary);
    cout << source << " " << destination << endl;
    hanoi(num-1, auxiliary, source, destination);

}
int main(){
    ac;
    int num;
    cin >> num;

    cout << pow(2, num) - 1 << endl;
    hanoi(num+1, 1, 2, 3);
}