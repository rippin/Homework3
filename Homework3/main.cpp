//
//  main.cpp
//  Homework3
//
//  Created by Eric Franco on 10/15/15.
//  Copyright (c) 2015 Eric Franco. All rights reserved.
//

#include <iostream>
#include "String.cpp"

using namespace std;
int main(){
    
    String test("test string");
    String test1("hi lol");
    String test2(test + "2");
    String test3(test2);
    cout << "Testing size " <<endl;
    cout << test2.size() << endl;
    cout << test1.size() <<endl;
    cout << "Testing relational operators " <<endl;
    
    cout << test + test1 <<endl;
    cout << (test > test2) << endl;
    cout << (test >= test2) << endl;
    cout << (test <= test2) << endl;
    cout << (test < test2) << endl;
    cout << (test2 == test3) << endl;
    cout << (test2 != test2) << endl;
    
    cout << (test3 > test2) << endl;
    cout << (test3 >= test2) << endl;
    cout << (test3 <= test2) << endl;
    cout << (test3 < test2) << endl;
    cout << (test2 == test) << endl;
    cout << (test2 != test) << endl;
    
    cout << "Testing array notation" <<endl;
    cout << (test2[0]) <<endl;
    cout << (test2[7]) <<endl;
    
    String testin;
    cout << "Enter input: " << endl;
    cin >> testin;
    
    cout << "Testing concatenation " <<endl;
    cout << (testin += "lmfao") <<endl;
    cout << (test+= "hi") <<endl;
    
    cout << "Testing indexOf looking for o in" <<endl;
    cout << testin <<endl;
    cout << testin.indexOf('o')<<endl;
    cout << "Next index of should return -1 if no q in String" <<endl;
    cout << testin.indexOf('q') << endl;
    
    cout << "Enter a pattern to search for in string ";
    cout << testin << endl;
    
    String pat;
    cin >> pat;
    cout << testin.indexOf(pat) <<endl;
    cout << "Next index of should return -1" <<endl;
    cout << testin.indexOf("uh") <<endl;;
    
    cout << "Testing reverse " <<endl;
    cout << test3.reverse() <<endl;
    cout << test1.reverse() <<endl;
    
    return 0;
}
