// decision making


// if-esle statements

#include <iostream> 

using namespace std; 
int main() {
//     int amount ;

//     cout << "enter your amount:" << endl ;

//     cin >> amount ;

//     if (amount > 100000){
//         cout << "you can buy an iphone" << endl; // if else statements
//     }
//     else {
//         cout << "you cant buy an iphone" << endl;
//     }


   
// }

// // marks for if else
//  int marks ;
//   cout << "enter marks:" << endl ;

//   cin >> marks ;

//   if (marks > 70){
//     cout << "you got A" << endl ;

//   }
//   else if(marks > 50) {
//     cout << "you got B" << endl ;
//   }
//   return 0;
  
// }

int height ;
cout << "enter your height" ;
cin >> height ;

int weight ;
cout << "enter weight" ;  // nested if staatements
cin >> weight;

if (height > 5.5){
  if (weight > 50){
    cout << "you got good BMI";
  }
  else {
    cout << "you dont have good BMI";
  }
}
}