#include <iostream>
#include <string>
using namespace std;

int main () {

    string s = "hello" ;
    s.insert(2,"o");
    cout << s << endl ; // insert "o" at index 2
}