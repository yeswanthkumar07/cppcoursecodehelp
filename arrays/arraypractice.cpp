#include <iostream>
using namespace std ;

// int main(){
//     int yashwanth[5] = {1,2,3,4,5};
//     for (int i=0 ;i < 5 ; i++){
//         cout << yashwanth[i] << endl ;


   
//     }
//      return 0 ;
// }
int main (){
    int arrays[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "enter values" << endl ;

        cin >> arrays[i] ;

        cout << endl ;
    }

    int sum = 0; // initialization
    for (int i = 0; i < 5; i++) // declaration
    {
        sum =  sum + arrays[i]  ; //  adding elements to sum
        
    }
    cout << sum << endl;
    
    return 0;
}

  