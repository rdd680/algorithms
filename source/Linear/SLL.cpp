#include <iostream>
#include "SLL.hpp"

SLL::SLL(){
    head = NULL;
    len = 0;
}

SLL::~SLL(){

}

int SLL::at(int index){
    index =(index = 0) ? len
}

unsigned int length();

void push_front(int data);
void push_back(int data);
void push(int data, int index);

int pop_front();
int pop_back();
int pop(int index);

int set(int index, int data);

void clear();

void remove(int data);

int index(int data);

void reverse();
