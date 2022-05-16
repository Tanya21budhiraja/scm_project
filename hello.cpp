#include <iostream>

using namespace std;

class Test {

    public:
        string n1;

   public:
     Test(){
         cout << "Constructor one" << endl;
     }
     Test(string a){
         n1 = a;
     }    
};

int main(){

    Test *t1 = new Test("kapil");
    cout << t1->n1 << endl;
    cout << &t1 << endl;

    delete t1;
    cout << t1->n1 << endl;
    cout << &t1 << endl;

    return 0;
}

