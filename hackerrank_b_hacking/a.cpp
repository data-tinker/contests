#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <climits>
#include <cassert>
#include <array>

using namespace std;

#define endl '\n'

int triangle(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return 0;
    }

    if (a == b && b == c) {
        return 1;
    }

    if (a + b > c && a + c > b && b + c > a) {
        return 2;
    }

    return 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(10);

    int a, b, c;
    cin >> a >> b >> c;

    cout << triangle(a, b, c) << endl;

    return 0;
}
