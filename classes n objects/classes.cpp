#include <iostream>
using namespace std;


class student {       //  class creation :

    public :
        int age;
        int weight;
        double height ;
        string name;



} ;
int main(){

    student s1 ;
    s1.age = 20 ;
    s1.weight = 77;
    s1.height = 5.10 ;
    s1.name = "yashwanth rambha" ;

    cout << "name of student : " << s1.name << endl ;
    cout << "age of student : " << s1.age << endl ;
    cout << "weight of student : " << s1.weight << endl ;
    cout << "height of student : " << s1.height << endl ;
    
}
 