#include <iostream>
#include <string>
using namespace std;

int main () {


    string s = "hello world" ;
    string sub = s.substr(6, 5) ; //  start at index 6, take 5 characters

    cout << sub << endl ;
}