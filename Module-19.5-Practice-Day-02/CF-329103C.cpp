#include <iostream>
#include <algorithm>

#define lli long long int

int compare(const void *a, const void *b) {
    return (*(lli *)b - *(lli *)a);
}

int main() {
    using namespace std;

    int n, k;
    cin >> n >> k;

    lli ar[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    qsort(ar, n, sizeof(lli), compare);

    lli sum = 0;
    for (int i = 0; i < k; i++) {
        if( sum+ar[i]>= sum)
            sum += ar[i];
    }
    
    if (sum >= 0)
        cout << sum << endl;
    else
        cout << "0" << endl;

    return 0;
}
