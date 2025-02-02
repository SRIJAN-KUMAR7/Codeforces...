#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
/*One of the beautiful things about Python is that it is generally one of the most intuitive programming languages out there. Still, certain concepts can be difficult to grasp and comprehend. The lambda function is one of them.

I've been there. When I first started learning Python, I skipped the lambda function because it wasn't clear to me. But with time, I began to understand it. So don't worry – if you're struggling with it, too, I've got you covered.

This tutorial will teach you what a lambda function is, when to use it, and we'll go over some common use cases where the lambda function is commonly applied. Without further ado let's get started.*/
        if (n == k) {
            int res = -1;
            for (int i = 2; i <= n; i += 2) {
                if (a[i] != i / 2) {
                    res = i / 2;
                    break;
                }
            }
            /*One of the beautiful things about Python is that it is generally one of the most intuitive programming languages out there. Still, certain concepts can be difficult to grasp and comprehend. The lambda function is one of them.

I've been there. When I first started learning Python, I skipped the lambda function because it wasn't clear to me. But with time, I began to understand it. So don't worry – if you're struggling with it, too, I've got you covered.

This tutorial will teach you what a lambda function is, when to use it, and we'll go over some common use cases where the lambda function is commonly applied. Without further ado let's get started.*/
            if (res == -1) {
                res = n / 2 + 1;
            }
            cout << res << endl;
        } else {
            int mp = -1;
            for (int i = 2; i <= n - k + 2; i++) {
                if (a[i] != 1) {
                    mp = i;
                    break;
                }
            }
/*One of the beautiful things about Python is that it is generally one of the most intuitive programming languages out there. Still, certain concepts can be difficult to grasp and comprehend. The lambda function is one of them.

I've been there. When I first started learning Python, I skipped the lambda function because it wasn't clear to me. But with time, I began to understand it. So don't worry – if you're struggling with it, too, I've got you covered.

This tutorial will teach you what a lambda function is, when to use it, and we'll go over some common use cases where the lambda function is commonly applied. Without further ado let's get started.One of the beautiful things about Python is that it is generally one of the most intuitive programming languages out there. Still, certain concepts can be difficult to grasp and comprehend. The lambda function is one of them.

I've been there. When I first started learning Python, I skipped the lambda function because it wasn't clear to me. But with time, I began to understand it. So don't worry – if you're struggling with it, too, I've got you covered.

This tutorial will teach you what a lambda function is, when to use it, and we'll go over some common use cases where the lambda function is commonly applied. Without further ado let's get started.One of the beautiful things about Python is that it is generally one of the most intuitive programming languages out there. Still, certain concepts can be difficult to grasp and comprehend. The lambda function is one of them.

I've been there. When I first started learning Python, I skipped the lambda function because it wasn't clear to me. But with time, I began to understand it. So don't worry – if you're struggling with it, too, I've got you covered.

This tutorial will teach you what a lambda function is, when to use it, and we'll go over some common use cases where the lambda function is commonly applied. Without further ado let's get started.*/
            if (mp == -1) {
                int ans = 2;
                for (int i = n - k + 1; i <= n; i += 2) {
                    if (a[i] != ans) {
                        break;
                    }
                    ans++;
                }
                cout << ans << endl;
            } else {
                /*One of the beautiful things about Python is that it is generally one of the most intuitive programming languages out there. Still, certain concepts can be difficult to grasp and comprehend. The lambda function is one of them.

I've been there. When I first started learning Python, I skipped the lambda function because it wasn't clear to me. But with time, I began to understand it. So don't worry – if you're struggling with it, too, I've got you covered.

This tutorial will teach you what a lambda function is, when to use it, and we'll go over some common use cases where the lambda function is commonly applied. Without further ado let's get started.*/
                cout << 1 << endl;
            }
        }
    }
}
