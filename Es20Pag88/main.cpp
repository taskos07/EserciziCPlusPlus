int main() {
    CatalogoComputer catalogo;

    Computer c1(1, "Dell", "Inspiron",
                3.6, 16, 512, 15.6, 2024);

    Computer c2(2, "HP", "Pavilion",
                2.8, 8, 256, 15.0, 2023);

    catalogo.aggiungi(c1);
    catalogo.aggiungi(c2);

    cout << "Tutti i computer:" << endl;
    catalogo.visualizzaTutti();

    cout << "Ricerca del computer con codice 1:" << endl;
    catalogo.cerca(1);

    cout << "Computer migliori di 3 GHz, 8 GB RAM e 256 GB:" << endl;
    catalogo.cercaMigliori(3.0, 8, 256);

    catalogo.elimina(2);

    return 0;
}