// reusable block of code


#include <iostream> 
using namespace std; 


int sum(int a , int b){   // syntax : return type(int ,float , char >> function name >> parameters)
    int answer =  a + b ;   // defining function
    return answer ;
}
int main() {
    int result = sum(55,90) ; // sum (function call)
    cout << result ;
    
    return 0;
   
} 


/* user input function
int sum() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    return a + b;
}

int main() {
    cout << "Sum = " << sum();
    return 0;
}

*/