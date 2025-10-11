#include <iostream>
using namespace std;


class student {       //  class creation :

    public :
        int age;
        int weight;
        double height ;
        string name;


        void studying(){
            cout << "i am studying" << endl ;
        }

        void running(){

            cout << "i am running" << endl ;
        }

} ;
int main(){

    student s1 ;
    s1.age = 20 ;
    s1.weight = 77;
    s1.height = 5.10 ;
    s1.name = "yashwanth rambha" ;  // object creation :

    cout << "name of student : " << s1.name << endl ;
    cout << "age of student : " << s1.age << endl ;
    cout << "weight of student : " << s1.weight << endl ;
    cout << "height of student : " << s1.height << endl ;

    s1.studying();  // function call
    s1.running();
    
    return 0 ;
}
 