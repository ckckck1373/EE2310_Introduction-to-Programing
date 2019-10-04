#include <iostream>
#include <fstream> // for FILE IO
#include <stdio.h>
#include <string> // for C++ string objects
#include <string.h> // for C-style strings
#include <vector> // by STL for Class Vector
#include <algorithm> // for Vector Sorting

using namespace std;

void process_a_line(string, vector<string>&);
void process_a_word(string cpp_word, vector<string>& A,vector<int>& B);

vector<string> A;
vector<int> B;
int line_count=0;
int main(int argc, char *argv[])
{
    if(argc<2){
        cout << "Too few arguments!" << endl;
        return(-1); // exit(-1); is also fine
        printf("Usage: %s <filename>\n", argv[0]);
    }
    cout << argv[0] << endl;
    cout << argv[1] << endl;

    ifstream in_fp(argv[1], ios::in);
    if(!in_fp)
    {
        cout<< "Input file  " << argv[1] << " is not valid\n";
        exit(-1);
    }

    string cpp_line;

    while(getline(in_fp, cpp_line))
    {
        process_a_line(cpp_line,A);
        line_count++;
    }


    cout << "Total no. of lines:" << line_count-1 << endl;
    cout << "The total number of words in \"picasso,txt\": " << A.size() << endl;


    vector<int>::iterator biggest0 = max_element(B.begin(),B.end());
    cout << "The 0-th frequent word is (" << A[distance(B.begin(),biggest0)] << ") with no. of appearances (" << *biggest0 << ")" << endl;
    B.erase(biggest0);
    B.insert(biggest0,0);

    vector<int>::iterator biggest1 = max_element(B.begin(),B.end());
    cout << "The 1-th frequent word is (" << A[distance(B.begin(),biggest1)] << ") with no. of appearances (" << *biggest1 << ")" << endl;
    B.erase(biggest1);
    B.insert(biggest1,0);

    vector<int>::iterator biggest2 = max_element(B.begin(),B.end());
    cout << "The 2-th frequent word is (" << A[distance(B.begin(),biggest2)] << ") with no. of appearances (" << *biggest2 << ")" << endl;
    B.erase(biggest2);
    B.insert(biggest2,0);

    vector<int>::iterator biggest3 = max_element(B.begin(),B.end());
    cout << "The 3-th frequent word is (" << A[distance(B.begin(),biggest3)] << ") with no. of appearances (" << *biggest3 << ")" << endl;
    B.erase(biggest3);
    B.insert(biggest3,0);

    vector<int>::iterator biggest4 = max_element(B.begin(),B.end());
    cout << "The 4-th frequent word is (" << A[distance(B.begin(),biggest4)] << ") with no. of appearances (" << *biggest4 << ")" << endl;
    B.erase(biggest4);
    B.insert(biggest4,0);

    vector<int>::iterator biggest5 = max_element(B.begin(),B.end());
    cout << "The 5-th frequent word is (" << A[distance(B.begin(),biggest5)] << ") with no. of appearances (" << *biggest5 << ")" << endl;
    B.erase(biggest5);
    B.insert(biggest5,0);

    vector<int>::iterator biggest6 = max_element(B.begin(),B.end());
    cout << "The 6-th frequent word is (" << A[distance(B.begin(),biggest6)] << ") with no. of appearances (" << *biggest6 << ")" << endl;
    B.erase(biggest6);
    B.insert(biggest6,0);

    vector<int>::iterator biggest7 = max_element(B.begin(),B.end());
    cout << "The 7-th frequent word is (" << A[distance(B.begin(),biggest7)] << ") with no. of appearances (" << *biggest7 << ")" << endl;
    B.erase(biggest7);
    B.insert(biggest7,0);

    vector<int>::iterator biggest8 = max_element(B.begin(),B.end());
    cout << "The 8-th frequent word is (" << A[distance(B.begin(),biggest8)] << ") with no. of appearances (" << *biggest8 << ")" << endl;
    B.erase(biggest8);
    B.insert(biggest8,0);

    vector<int>::iterator biggest9 = max_element(B.begin(),B.end());
    cout << "The 9-th frequent word is (" << A[distance(B.begin(),biggest9)] << ") with no. of appearances (" << *biggest9 << ")" << endl;
    B.erase(biggest9);
    B.insert(biggest9,0);
    return 0;

}


/*--- Subroutine of "Process_a_Line" ----*/
void process_a_line(string cpp_line, vector<string>& A)
{
    string cpp_word; // a token
    char c_line[1000000]; // for holding one line in C-string
    char *word;

    strcpy(c_line, cpp_line.c_str());
    word = strtok(c_line, "\"-,:;.() " );

    while(word != 0){
        cpp_word = word;
        process_a_word(cpp_word, A, B);
        word = strtok(NULL, "\"-,:;.() ");

    }

}
/*--- Subroutine of "Process_a_Word" ----*/
void process_a_word(string cpp_word, vector<string>& A,vector<int>& B)
{
    bool if_exist = false;
    int i;

    for(i=0; i<(int) A.size(); i++)
    {
        if(cpp_word == A[i]){
            if_exist = true;
            B[i]++;
            break;
        }
    }

    if(if_exist==false){ // Add the new word in A
        A.push_back(cpp_word);
        B.push_back(1);
    }
}
