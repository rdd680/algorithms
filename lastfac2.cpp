#include <iostream>
#include <stdio.h>

int main() {
    int last[11];
    last[1] = 1;
    for (int i = 2; i < 11; ++i) {
        last[i] = (last[i-1]*i)%10;
    }
    int n;
    std::cin>>n;
    for (int i = 0; i < n; ++i) {
        int m;
        std::cin>>m;
        std::cout<<last[m]<<std::endl;
    }
    return 0;
}