#include <iostream>
#include <climits>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, H, M;
        cin >> n >> H >> M;

        int b = H * 60 + M;

        int sleep = INT_MAX;

        for (int i = 0; i < n; ++i) {
            int hi, mi;
            cin >> hi >> mi;
            int alarm = hi * 60 + mi;

            if (alarm >= b) {
                sleep = min(sleep, alarm - b);
            } else {
                sleep = min(sleep, (1440 - b) + alarm);
            }
        }

        int hours = sleep / 60;
        int minutes = sleep % 60;
        cout << hours << " " << minutes << endl;
    }

    return 0;
}
