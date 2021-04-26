//
// Created by yorgo on 19/4/2021.
//

#include "Unordered_Array.h"
using namespace std;
#include <string>
#include<algorithm>


Unordered_Array::Unordered_Array(long n) {
    long rows=n;
    arr=new string[rows];
}

string removePunctuation(string word) {


    word.erase(remove(word.begin(), word.end(), ':'), word.end());
    word.erase(remove(word.begin(), word.end(), ','), word.end());
    word.erase(remove(word.begin(), word.end(), '-'), word.end());
    word.erase(remove(word.begin(), word.end(), '.'), word.end());
    word.erase(remove(word.begin(), word.end(), '!'), word.end());
    word.erase(remove(word.begin(), word.end(), '?'), word.end());
    word.erase(remove(word.begin(), word.end(), ';'), word.end());
    word.erase(remove(word.begin(), word.end(), '_'), word.end());
    word.erase(remove(word.begin(), word.end(), '='), word.end());
    word.erase(remove(word.begin(), word.end(), '+'), word.end());
    word.erase(remove(word.begin(), word.end(), '/'), word.end());
    word.erase(remove(word.begin(), word.end(), '"'), word.end());
    word.erase(remove(word.begin(), word.end(), '&'), word.end());
    word.erase(remove(word.begin(), word.end(), '%'), word.end());
    word.erase(remove(word.begin(), word.end(), '%'), word.end());
    word.erase(remove(word.begin(), word.end(), '`'), word.end());
    word.erase(remove(word.begin(), word.end(), '^'), word.end());
    word.erase(remove(word.begin(), word.end(), '('), word.end());
    word.erase(remove(word.begin(), word.end(), ')'), word.end());
    word.erase(remove(word.begin(), word.end(), '['), word.end());
    word.erase(remove(word.begin(), word.end(), ']'), word.end());
    word.erase(remove(word.begin(), word.end(), '@'), word.end());
    word.erase(remove(word.begin(), word.end(), '#'), word.end());
    word.erase(remove(word.begin(), word.end(), '*'), word.end());
    word.erase(remove(word.begin(), word.end(), '~'), word.end());
    word.erase(remove(word.begin(), word.end(), '1'), word.end());
    word.erase(remove(word.begin(), word.end(), '2'), word.end());
    word.erase(remove(word.begin(), word.end(), '3'), word.end());
    word.erase(remove(word.begin(), word.end(), '4'), word.end());
    word.erase(remove(word.begin(), word.end(), '5'), word.end());
    word.erase(remove(word.begin(), word.end(), '6'), word.end());
    word.erase(remove(word.begin(), word.end(), '7'), word.end());
    word.erase(remove(word.begin(), word.end(), '8'), word.end());
    word.erase(remove(word.begin(), word.end(), '9'), word.end());
    word.erase(remove(word.begin(), word.end(), '0'), word.end());



    return word;


}
string lower(string word){
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    return word;
}