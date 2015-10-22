//
//  String.cpp
//  Homework3
//
//  Created by Eric Franco on 10/15/15.
//  Copyright (c) 2015 Eric Franco. All rights reserved.
//
#include "String.h"

 String::String(const char * s) {
     strcpy(this->buf, s);
 }
String::String(const String & s) {
    strcpy(this->buf, s.buf);
}
void String::print(ostream & out ){
    int i =0;
    while(inBounds(i)){
        out.put(buf[i]);
        ++i;
    }
}
ostream & operator << ( ostream & out, String str ){
    str.print(out);
    return out;
}
void  String::read(istream & in ){
        in >> buf;
}
istream & operator >> ( istream & in, String & str ){
    str.read(in);
    return in;
}
char & String::operator [] ( int index ){
    if (!inBounds(index))
        return buf[size()];
    
    return buf[index];
}

int String::indexOf( const char c ){
    char * i = strchr(buf, c);
    int index = (int) (i - buf);
    return ((index  < size()) ? index : -1);
     
}
int String::indexOf(String s ){
    int i = 0, j = 0, k =0;
    while (inBounds(i)){
        while (buf[k] == s.buf[j] || s.buf[j] == '\0'){
            if (s.buf[j] == '\0'){
                return i;
            }
            ++j, ++k;
        }
        k = ++i;
        j = 0;
    }
    return -1;
}

int String::size(){
    return strlen(buf);
}
bool String::inBounds( int i ){
    return i >= 0 && i < strlen(buf);
}

String String::reverse(){
    String s;
    int j =0;
    for (int i = size() - 1; inBounds(i); --i){
        s.buf[j] = this->buf[i];
    ++j;
    }
    return s;
}
String String::operator+(const String s){
    return strcat(this->buf, s.buf);
}
String String::operator = ( const String & s ){
    strcpy(this->buf, s.buf);
    return *this;
}
String String::operator+=(const String s){
    return *this = strcat(this->buf, s.buf);
}
bool String::operator == ( const String s ){
    int i =  strcmp(this->buf, s.buf);
    return ((i == 0) ? 1 : 0);
}
bool String::operator != ( const String s ){
    int i =  strcmp(this->buf, s.buf);
    return ((i != 0) ? 1 : 0);
}
bool String::operator > ( const String s ){
    int i =  strcmp(this->buf, s.buf);
    return ((i == 1) ? 1 : 0);
}
bool String::operator < ( const String s ){
    int i =  strcmp(this->buf, s.buf);
    return !((i == -1) ? 1 : 0);
}
bool String::operator >= ( const String s ){
    int i =  strcmp(this->buf, s.buf);
    return ((i == 1 || i == 0) ? 1 : 0);
}
bool String::operator <= ( const String s ){
    int i =  strcmp(this->buf, s.buf);
    return ((i == -1 || i == 0) ? 1 : 0);
}

int String::strlen(const char *s){
    int i = 0;
    while (s[i] != '\0')
        ++i;
        
    return i;
}

char * String::strcpy(char *dest, const char *src){
    int i = 0;
    while((dest[i] = src[i]))
        ++i;
    return dest;
}

char * String::strcat(char *dest, const char *src){
    int i = strlen(dest);
    for (int j = 0; src[j] != '\0'; ++j){
        dest[i] = src[j];
        ++i;
    }
    dest[i] = '\0';
    
    return dest;
}

int String::strcmp(const char *left, const char *right){
    while (*left == *right){
        if (*left == '\0')
            return 0;
        ++left;
        ++right;
    }
    return (*left - *right);
}

char * String::strchr(const char * str, int c){
    while (*str && *str != c){
        ++str;
    }
    return (char*)str;
}

String::~String(){
    
}


