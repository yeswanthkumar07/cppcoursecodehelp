// The ternary operator (?:) is a shorthand for an if-else statement.
// it  takes 3 operands
//(condition) ? expression_if_true : expression_if_false;

#include <iostream> 

using namespace std; 
int main() {


    int age;
    cin >> age;
    (age >18)? cout << "you can vote" : cout << "you cannot vote";
    return 0;
   
}
