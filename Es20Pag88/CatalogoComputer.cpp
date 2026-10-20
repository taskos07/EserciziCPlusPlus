#include <vector>

class CatalogoComputer {
private:
    vector<Computer> elenco;

public:
    void aggiungi(Computer c) {
        elenco.push_back(c);
    }

    void visualizzaTutti() {
        for (int i = 0; i < elenco.size(); i++) {
            elenco[i].stampa();
            cout << "-------------" << endl;
        }
    }

    void cerca(int codice) {
        for (int i = 0; i < elenco.size(); i++) {
            if (elenco[i].getCodice() == codice) {
                elenco[i].stampa();
                return;
            }
        }

        cout << "Computer non trovato" << endl;
    }

    void elimina(int codice) {
        for (int i = 0; i < elenco.size(); i++) {
            if (elenco[i].getCodice() == codice) {
                elenco.erase(elenco.begin() + i);
                cout << "Computer eliminato" << endl;
                return;
            }
        }

        cout << "Computer non trovato" << endl;
    }

    void cercaMigliori(double v, int r, int d) {
        for (int i = 0; i < elenco.size(); i++) {
            if (elenco[i].miglioreDi(v, r, d)) {
                elenco[i].stampa();
            }
        }
    }
};