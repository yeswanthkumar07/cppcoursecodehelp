#include <iostream>
using namespace std ;

// int main(){
//     int yashwanth[5] = {1,2,3,4,5};
//     for (int i=0 ;i < 5 ; i++){
//         cout << yashwanth[i] << endl ;


   
//     }
//      return 0 ;
// }
// int main (){
//     int arrays[5];
//     for (int i = 0; i < 5; i++)
//     {
//         cout << "enter values" << endl ;

//         cin >> arrays[i] ;

//         cout << endl ;
//     }

//     int sum = 0; // initialization
//     for (int i = 0; i < 5; i++) // declaration
//     {
//         sum =  sum + arrays[i]  ; //  adding elements to sum
        
//     }
//     cout << sum << endl;
    
//     return 0;
// }
void printarray(int arr[][4],int row,int col){ // you have to compulosary declare size of array i.e arr[][4] (i can be null but j shhould be declared )
    for (int i = 0 ; i < row; i ++){
        cout << "enter numbers for row " << i << " : " ;
        for (int j = 0 ; j < col; j++ ){
            cin >> arr[i][j] ;
        }
    }

    cout << endl ;



    for (int i = 0 ; i < row; i++){
        for (int j = 0 ; j < col; j++ ){
            cout << arr[i][j] << " ";
        }
        cout << endl;

    }
}
int main (){
    int arr[2][4];
    printarray(arr ,2,4);
    return 0;
}