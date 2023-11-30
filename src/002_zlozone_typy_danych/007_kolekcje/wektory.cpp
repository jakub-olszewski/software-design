#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> wektor;
    wektor.push_back("0");
    wektor.push_back("1");
    wektor.push_back("2");
    wektor.push_back("3");
    cout<<"Wielkosc tablicy: "<< wektor.size() <<endl;
    for (int i = 0; i < int(wektor.size()); i++) {
        cout<<wektor.at(i) <<" ";
    }
    cout << endl;
    cout << wektor.front() << endl;
    cout << wektor.back() << endl;

    system("pause");
    return 0;
}
