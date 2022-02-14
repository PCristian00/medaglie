#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
#define CARATTERI_MAX 10
struct nazione
{
    char nome[CARATTERI_MAX + 1];
    int ori;
    int argenti;
    int bronzi;
};
/* Restituisce il numero di righe contenute nel file “nomefile”. Si tenga
presente che ogni riga è strutturata come nell'esempio “medagliere.txt”. */
int contaRighe(const char* nomefile)
{
// 4 Punti
}
/* Legge in input il file “nomefile” e popola il vettore “nazionali”, con il
nome, gli ori, gli argenti e i bronzi di ogni nazione. */
void leggiFile(nazione nazionali[], const char* nomefile)
{
// 4 Punti
}
/* Ordina il vettore “nazionali” di lunghezza “n” in maniera decrescente
secondo i seguenti criteri:
– numero di ori
– a parità di ori, numero di argenti
– a parità di ori e argenti, numero di bronzi. */
void ordinaNazioni(nazione nazionali[], int n)
{
// 4 Punti
}
/* Stampa a schermo il vettore “nazionali” di lunghezza n, come nell'esempio
di esecuzione. Ogni colonna ha l'intestazione “Ori”, “Argenti”, “Bronzi”,
come nell'esempio di esecuzione. */
void stampaMedagliere(nazione nazionali[], int n)
{
// 3 Punti
}
// Programma principale
int main()
{
// 3 Punti
}