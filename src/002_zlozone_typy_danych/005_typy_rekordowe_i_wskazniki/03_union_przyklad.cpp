// Try it ! https://www.w3schools.com/cpp/trycpp.asp?filename=demo_helloworld
#include <iostream>
using namespace std;

union komorka_pamieci {
    short num1;
    int num2;
};

int main() {

    komorka_pamieci kp;

	kp.num1 = 123;
    kp.num2 = 7534;

    cout << "Short: " << kp.num1 << ", int: " << kp.num2 << "." << endl;

    return 0;
}
