#include <iostream>
#include <vector>
using namespace std;
//new way , we track turn or !turn 
int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int l = 0, r = n - 1;
    int sereja = 0, dima = 0;
    bool turn = true; // true = Sereja, false = Dima

    while (l <= r) {
        int pick;
        if (v[l] > v[r]) {
            pick = v[l];
            l++;
        } else {
            pick = v[r];
            r--;
        }

        if (turn) sereja += pick;
        else dima += pick;

        turn = !turn; // switch turns
    }

    cout << sereja << " " << dima;
}
