// Try it ! https://www.w3schools.com/cpp/trycpp.asp?filename=demo_helloworld
#include <iostream>
using namespace std;

struct podrecznik {
    public:
        int numer;
        string autor;
        string tytul;
        int pobierzSekretnyKod() {
            return sekretny_kod;
        }

    private:
        int sekretny_kod;
};

int main() {
    podrecznik podr;
    podr.autor = "Gall Anonim";
    podr.tytul = "INF04 Programowanie";
    podr.numer = 4373;

    cout << "Tytuł: " << podr.tytul << ", autor: " << podr.autor << ", numer: " << podr.numer << "." << endl;

    // Użycie metody do pobrania wartości sekretnego kodu
    cout << "Sekretny kod: " << podr.pobierzSekretnyKod() << endl;

    return 0;
}
