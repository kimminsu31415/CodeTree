#include <iostream>
using namespace std;
#include <string>

string a, b, c;

class A {
    public:
        string a, b, c;

        A(string input_a, string input_b, string input_c){
            this -> a = input_a;
            this -> b = input_b;
            this -> c = input_c;
        }
};

int main() {
    cin >> a >> b >> c;
    A test = A(a, b, c);
    cout << "secret code : " << test.a << endl;
    cout <<"meeting point : "<<test.b << endl;
    cout << "time : " << test.c;
    
    return 0;
}