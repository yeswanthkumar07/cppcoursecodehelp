#include <iostream>
using namespace std;


class student {       //  class creation :

    public :
        int age;
        int weight;
        double height ;
        string name;


        void studying(){
            cout << name << "is studying" << endl ;
        }

        void running(){

            cout << name <<  "is running" << endl ;
        }

} ;
int main(){

    student* s = new student() ;  // dynamic allocation
    s->age = 20;
    s->weight = 77;
    s->height = 5.10;
    s->name = "yashwanth kumar";

    s->running();
    s->studying();

    
    return 0 ;
}
 