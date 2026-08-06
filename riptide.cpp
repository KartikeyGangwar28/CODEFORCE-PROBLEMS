#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--) {
        long long a, b, c;
        cin >>a>>b>> c;

        if (a == b ||b==c ||a== c) {
            cout << 0 << "\n";
            continue;
        }
        long long arr[3] = {a, b, c};
        sort(arr, arr + 3);
        cout << min(arr[1] - arr[0], arr[2] - arr[1]) << "\n";
    }

    return 0;
}