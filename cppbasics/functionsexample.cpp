#include <iostream> 
using namespace std;



int converttocelsius(int far){
    int result = (far - 32)*5/9;
    return result;


}
int main() {
    int ans = converttocelsius(100) ;
    cout << ans << endl;

    
    return 0;
   
}
