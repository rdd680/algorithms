#include <iostream>
#include <vector>

int main(){
    static const int arr[] = {1, 3, 2};
    std::vector<int> sequence(arr, arr + sizeof(arr) / sizeof(arr[0]));
    bool answer = false;
    int a=0;
    int b=0;
    int sequence2[sequence.size()];
    for(int t=0;t<=sequence.size();++t){
        sequence2[t]=sequence[t];
    }
    if(sequence.size()<=2){
        answer = true;
    }
    else{
        for(int i=0;i<=sequence.size()-1;++i){
            if(sequence[i]>=sequence[i+1]){
                for(int j=i;j<=sequence.size()-2;++j){
                    sequence[j]=sequence[j+1];
                }
                for(int j=i+1;j<=sequence.size()-2;++j){
                    sequence2[j]=sequence2[j+1];
                }
            }
        }
    }
    for(int z=0;z<=sequence.size()-3;++z){
        if(sequence[z]>=sequence[z+1]){
            ++a;
        }
        if(sequence2[z]>=sequence2[z+1]){
            ++b;
        }
    }
    if(a*b!=0){
        answer = false;
    }
    else{
        answer = true;
    }
//std::cout << answer << std::endl;
return answer;
}