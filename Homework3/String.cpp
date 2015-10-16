//
//  String.cpp
//  Homework3
//
//  Created by Eric Franco on 10/15/15.
//  Copyright (c) 2015 Eric Franco. All rights reserved.
//
#include "String.h"

 String::String(const char * s) {
     strcpy(buf, s);
 }

String String::operator+(const String s){
    
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
}