#include <iostream>
#include <algorithm>
using namespace std;

int isposs(int*, int, int, int);

int isposs(int* a, int q, int n, int k) {
    int count = 1;
    int rec = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] - rec >= q) {
            count++;
            rec = a[i];
        }
    }
    return (count >= k) ? 1 : 0;
}

int main() {
    int n, k;
    cin >> n >> k;

    int* a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    int maxDiff = 0;

    // Iterate through possible differences and find the maximum satisfying the condition
    for (int i = 1; i <= (a[n - 1] - a[0]); i++) {
        if (isposs(a, i, n, k) == 1) {
            maxDiff = i;
        }
    }

    cout << maxDiff;

    delete[] a;
    return 0;
}