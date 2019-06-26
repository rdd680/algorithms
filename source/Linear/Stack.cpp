#include "Stack.hpp"
#include "LinkedList.hpp"
#include <iostream>

Stack::Stack(){
    int fr = -1;
}
Stack::~Stack(){
    clear();
}
unsigned int Stack::size(){
    unsigned int count=0;
    for(int i = 0; i<fr; i++){
        count++;
    }
    return count;
}
void Stack::push(int data){
    if(fr >= 10)
    {
        throw "Full";
    }
    else
    {
        stack[++fr] = data;
    }
}
int Stack::pop(){
    if(fr < 0)
    {
        throw "error";
        return 0;
    }
    else
    {
        int p = stack[fr--];
        return p;
    }
}
int Stack::top(){
    return stack[fr]+1;
}
bool Stack::empty(){
    if(fr<0){
        return true;
    } else {
        return false;
    }
}
void Stack::clear(){
    delete[] stack;
}