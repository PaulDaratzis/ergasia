//
// Created by yorgo on 19/4/2021.
//

#ifndef ERGASIA_UNORDERED_ARRAY_H
#define ERGASIA_UNORDERED_ARRAY_H
using namespace std;
#include <string>

class Unordered_Array{

private:
    string *arr{};

public:
    explicit Unordered_Array(long n);
    void setVal(long i,string val){
        arr[i]=val;
    }
    string getVal(long i){
        return arr[i];
    }

};
string removePunctuation(string word); //βγαζω σημεια στιξης
string lower(string word); //τα κανω μικρα γραμματα
#endif //ERGASIA_UNORDERED_ARRAY_H