#include <iostream>
#include <string>
using namespace std;

class Print{
    public:
        string code;
        char color;
        int second;
        Print(string code, char color, int second){
            this -> code = code;
            this -> color = color;
            this -> second = second;
        }
        Print () {}
};

int main() {
    string code;
    char color;
    int second;

    cin >> code >> color >> second;

    Print A = Print(code, color, second);
    cout << "code : " << A.code << endl;
    cout << "color : " << A.color << endl;
    cout << "second : " << A.second;


    return 0;
}