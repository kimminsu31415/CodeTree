#include <iostream>
#include <string>
using namespace std;

class Mart{
    public:
        string product;
        int code;
        Mart(string product = "codetree", int code = 50){
            this -> product = product;
            this -> code = code;
        }
};

int main() {
    string product;
    int code;

    Mart A = Mart();
    cout << "product " << A.code << " is " << A.product << endl;

    cin >> product >> code;
    Mart B = Mart(product, code);
    cout << "product " << B.code << " is " << B.product << endl;


    

    return 0;
}