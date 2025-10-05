#include <iostream>
#include <string>
using namespace std;

int main () {


    string s1 = "hello" ;
    string s2 = "hellloo" ;


    int result =  s1.compare(s2) ;



    if ( s1.compare(s2) == 0) {

        cout << "strings are equal" << endl;
    } 
    else {
        cout << "strings are not equal" << endl;
    }

    return 0;
}