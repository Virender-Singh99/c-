#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a, n, total;
    float pos = 0., neg = 0., zer = 0.;
    
    cin >> a;
    
    total = a;
    
    while (a--) {
        cin >> n;
        if (n > 0) pos++;
        else if (n < 0) neg++;
        else zer++;
    }
    
    cout << pos / total << endl;
    cout << neg / total << endl;
    cout << zer / total << endl;
    
    return 0;
}