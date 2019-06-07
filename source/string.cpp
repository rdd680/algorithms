#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "string.hpp"
#include <iostream>


/** Constructors */
String::String(){
array = new char[0];
}

String::String(char* str){
unsigned int len = strlen(str);
array = new char[len];
}

String::String(char){
array = new char[0];
}

/** Destructors */
String::~String(){
if (this->array != NULL){
delete[] this->array;
this->array= NULL;
}
}

//char at(int) const;
char String::at(int x) const{
    if (x < 0 || strlen(array) <= x)
        throw;
    return array[x];
}

bool String::empty() const{
if(array[0] == '\0'){
return true;
}else{
return false;
}
}

unsigned int String::size() const{
int i = 0;
while(array[i] != '\0'){
i++;
}
return i;
}

unsigned int String::capacity() const{
int mycap = sizeof(array);
return mycap;
}

void String::reserve(unsigned int x){
for(unsigned int i = 0; i < strlen(array); i++){
array[i] = x;
}
}

void String::insert(char y, int x){
if(x>strlen(array)||x<0){
x = strlen(array)+1;
array[x] = y;
} else {
array[x] = y;
}
}

void String::erase(char c){
//for(int i=0; i<strlen(array); ++i){
// if(array[i]==c){
// array[i];
// }
//}
}

void String::remove(int index){
String tem;
for(unsigned i = 0; i < strlen(array);++i){
if(i != index){
tem.append(array[i]);
}
}
*this=tem;
};

void String::append(char str2){
str2 += *array;
}

void String::prepend(char str2){
array[0] += str2;
};

bool String::compare(char* str2)const{
for(int i=0; i<strlen(array);++i){
if(array[i] != str2[i]){
return false;
}
}
return true;
}
bool String::compare(String str2)const{
// if(str2 == this->String(array)){
// return true;
// } else {
// return false;
// }
return false;
}

void String::concatenate(char*){

};
void String::concatenate(String){

};

unsigned int String::find(char* str2, int start)const{
for(int start; start<strlen(array);++start){
if(array[start] == str2[start]){
return start;
}
}
return strlen(str2);;
}
unsigned int String::find(char str2, int start)const{
for(int start; start<strlen(array);++start){
if(array[start] == str2){
return start;
}
}
return strlen(array);
}

unsigned int String::find(String str2, int start)const{
for(int start; start<strlen(array);++start){
if(String(array[start])== str2){
return start;
}
}
return str2.size();
}

void String::reverse(){

};

void String::shift(int amt){
// for(int i=0; i<strlen(array); ++i){
// int num = int(array[i]);
// int dup = amt;
// char* news;

// // if k-th ahead character exceed 'z'
// if(num + dup > 122){
// dup -= (122-num);
// amt = amt % 26;
// news += char(96 + amt);
// news = array;
// }
// else
// news += char(num + amt);
// news = array;
// }
};

int String::toInt()const{
if((int)c <=9){
return (int)c;
} else {
return toInt(c-48);
}
}

String String::substr(int, int)const{
return array;
}