#include<iostream>
using namespace std ;


int getlength(char arr[]){

    int count = 0 ;
    int index = 0 ;

    while (arr[index] != '\0')
    {
        count++ ;
        index++ ;

        
    }
    return  count;

}



int main() {

    char arr[] = "yash" ;
    cout << getlength (arr)<< endl ;
    

}