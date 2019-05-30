#include <stdio.h>
#include <iostream>

int power(int base, int p) {
    if (p == 0) return 1;
    int ans = base;
    while (p > 1) {
        ans *= base;
        --p;
    }
    return ans;
}

int main() {
    int n;
    std::cin>>n;
    int i;
    int ans = 0;
    for(i = 0; i < n; ++i) {
        int m;
        std::cin>>m;
        int base = m/10;
        int p = m % 10;
        ans += power(base, p);
    }
    std::cout<<ans<<std::endl;
    return 0;
}