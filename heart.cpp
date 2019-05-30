#include <iostream>
#include <iomanip> 

int main(){
int n;
std::cin>>n;
for(int i=0; i<n;++i){
    double x;
    double t;
    std::cin>>x;
    std::cin>>t;
    double minABPM = (x-1)*60/t;
    double maxABPM = (x+1)*60/t;
    double BPM = x*60/t;
    std::cout<<std::setprecision(6)<<minABPM<<" "<<BPM<<" "<<maxABPM<<std::endl;
}
return 0;
}