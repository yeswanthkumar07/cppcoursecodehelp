// adding of elements in a array :


#include <iostream> 
using namespace std; 
int main() {
    int arr[7] = {10,20,30,40,50,60,70};
    int sum= 0;
    for (int i =0 ; i < 7; i++ ){
       sum = sum + arr[i];
    }
    cout << sum;
    return 0;
   
}
