#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;


    if (!isPrime(b)) {
        cout << "NO" << endl;
        return 0;
    }


    int nextPrime = a + 1;
    while (!isPrime(nextPrime)) {
        nextPrime++;
    }


    if (nextPrime == b) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
