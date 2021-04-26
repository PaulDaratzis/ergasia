#include <iostream>
using namespace std;
#include <string>
#include<algorithm>
#include <fstream>
#include "Unordered_Array.h"
#include <bits/stdc++.h>


int main() {
    fstream file1;
    long long int sum=0;
    string WORD;
    //file.open("test.txt",ios::in);
    file1.open("test.txt");
    while(!file1.eof())
    {
      file1>>WORD;
      sum++;
    }
    cout<<sum<<endl;
    //int n=250000;
    Unordered_Array arr(sum);
    int num[sum];

    for (int x=0;x<sum;x++){
        num[x]=0;
    }

    fstream file;
    string word, filename;

    file.open("test.txt");
    if (!file) {
        cerr << "Unable to open file test.txt";
        exit(1);
    }
    int i=0;
    int c=0;
    while (file >> word && i<sum)
    {

        string tempword = removePunctuation(lower(word)); // ΛΕΞΗ ΧΩΡΙΣ ΣΗΜΕΙΟ ΣΤΙΞΗΣ ΚΑΙ ΜΙΚΡΑ ΓΡΑΜΜΑΤΑ


        int flag=0; //0 αν δεν βρεθηκε ξανα, 1 αν βρέθηκε
            for (int v = 0; v < sum; v++) {
                if (tempword == arr.getVal(v)) { //αν η λεξη μας ειναι ιδια με καποια λεξη που εχω ηδη βαλει στον πινακα
                    flag = 1; // βρεθηκε
                    num[v] += 1; // +1 στο σημειο που βρεθηκε
                    break; //stop η επαναληψη αφου βρηκε την λεξη

                }
            }

        if(flag==0){
            arr.setVal(i,tempword);
            i++;
        }


    }

    for(int j=0;j<sum;j++){
       if (arr.getVal(j)!="") {
        cout <<"Word: "<< arr.getVal(j)<<" - "<< "it appears on the text: "<< num[j]+1 <<" time(s)"<< endl;
        }
    }












}