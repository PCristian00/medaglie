#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
#define CARATTERI_MAX 10
struct nazione {
    char nome[CARATTERI_MAX + 1];
    int ori;
    int argenti;
    int bronzi;
};

/* Restituisce il numero di righe contenute nel file “nomefile”. Si tenga
presente che ogni riga è strutturata come nell'esempio “medagliere.txt”. */
int contaRighe(const char *nomefile) {
    fstream in;
    in.open(nomefile, ios::in); // ERRORE: messo solo un set di punti e virgola
    int c = 0;

    nazione t;
    while (in.good()) {
        in >> t.nome >> t.ori >> t.argenti >> t.bronzi;
        c++;
    }

    in.close();
    return c;
// 0/4 Punti
}

/* Legge in input il file “nomefile” e popola il vettore “nazionali”, con il
nome, gli ori, gli argenti e i bronzi di ogni nazione. */
void leggiFile(nazione nazionali[], const char *nomefile) {
    fstream in;
    in.open(nomefile, ios::in); // ERRORE: messo solo un set di punti e virgola
    int i = 0;
    while (in.good()) {
        in >> nazionali[i].nome >> nazionali[i].ori >> nazionali[i].argenti >> nazionali[i].bronzi;
        i++;
    }
    in.close();
// 3/4 Punti
}

/* Ordina il vettore “nazionali” di lunghezza “n” in maniera decrescente
secondo i seguenti criteri:
– numero di ori
– a parità di ori, numero di argenti
– a parità di ori e argenti, numero di bronzi. */
void ordinaNazioni(nazione nazionali[], int n) {
    //ERRORE abb. grave: ho scritto n[] anziche nazionali[] ad ogni cosa

    nazione tmp{};
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            if (nazionali[j].ori > nazionali[i].ori) {
                tmp = nazionali[i];
                nazionali[i] = nazionali[j];
                nazionali[j] = tmp;
            } else if (nazionali[j].ori == nazionali[i].ori)
                if (nazionali[j].argenti > nazionali[j].argenti) {
                    tmp = nazionali[i];
                    nazionali[i] = nazionali[j];
                    nazionali[j] = tmp;
                } else if (nazionali[j].argenti == nazionali[i].argenti)
                    if (nazionali[j].bronzi > nazionali[i].bronzi) {
                        tmp = nazionali[i];
                        nazionali[i] = nazionali[j];
                        nazionali[j] = tmp;
                    }
// 2/4 Punti
}

/* Stampa a schermo il vettore “nazionali” di lunghezza n, come nell'esempio
di esecuzione. Ogni colonna ha l'intestazione “Ori”, “Argenti”, “Bronzi”,
come nell'esempio di esecuzione. */
void stampaMedagliere(nazione nazionali[], int n) {
    cout << "\tOri \t Argenti";
    cout << "\t Bronzi" << endl;

    for (int i = 0; i < n; i++) {
        cout << nazionali[i].nome << "\t" << nazionali[i].ori << "\t" << nazionali[i].argenti << "\t";
        cout << nazionali[i].bronzi << endl;
    }
// 3 Punti
}

// Programma principale
int main() {
    int size = contaRighe("C:\\Users\\Thinkpad User\\CLionProjects\\medaglie\\medagliere.txt");
    //int size=7;
    cout << size << endl;
    nazione nazionali[size];
    leggiFile(nazionali, "C:\\Users\\Thinkpad User\\CLionProjects\\medaglie\\medagliere.txt");
    stampaMedagliere(nazionali, size);
    cout << endl;
    ordinaNazioni(nazionali, size);
    stampaMedagliere(nazionali, size);
    return 0;
// 3 Punti
}