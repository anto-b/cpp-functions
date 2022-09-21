#include <iostream>

using namespace std;

string greeting();

int main(){
    string greet = greeting();
    cout<<greet;
    return 0;
}

string greeting(){
    return "Hello World!";
}