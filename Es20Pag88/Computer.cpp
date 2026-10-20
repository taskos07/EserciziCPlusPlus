#include <iostream>
#include <string>
using namespace std;

class Computer {
private:
    int codice;
    string marca;
    string modello;
    double velocita;
    int ram;
    int disco;
    double monitor;
    int anno;

public:
    Computer(int c, string ma, string mo,
             double v, int r, int d,
             double m, int a) {
        codice = c;
        marca = ma;
        modello = mo;
        velocita = v;
        ram = r;
        disco = d;
        monitor = m;
        anno = a;
    }

    int getCodice() {
        return codice;
    }

    void stampa() {
        cout << "Codice: " << codice << endl;
        cout << "Marca: " << marca << endl;
        cout << "Modello: " << modello << endl;
        cout << "Velocita: " << velocita << endl;
        cout << "RAM: " << ram << endl;
        cout << "Disco: " << disco << endl;
        cout << "Monitor: " << monitor << endl;
        cout << "Anno: " << anno << endl;
    }

    bool miglioreDi(double v, int r, int d) {
        return velocita > v && ram > r && disco > d;
    }
};