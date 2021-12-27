#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <cmath>
using namespace std;

//**********************
// STRUTTURA SEQUENZIALE
//**********************

void es1()
{
    //1. Chiesti due numeri in input determinare la somma di due numeri.
    int num1, num2;
    cout << "Dammi i tuoi num\n";
    cin >> num1 >> num2;
    cout << num1 + num2;
}

void es2()
{
    //2. Chiesti tre numeri in input determinare la media di tre numeri.
    float num1, num2, num3;
    cout << "Dammi i tuoi num\n";
    cin >> num1 >> num2 >> num3;
    cout << (num1 + num2 + num3) / 3;
}

void es3()
{
    //3. Dato in input il lato, trovare perimetro e area di un quadrato.
    int lato;
    cout << "Dammi il lato\n";
    cin >> lato;
    cout << lato * 4;
    cout << lato * lato;
}

void es4()
{
    //4. Dati i due cateti calcolare la misura dell’ipotenusa di un triangolo rettangolo.
    int cateto1, cateto2;
    cout << "Dammi i cateti\n";
    cin >> cateto1;
    cin >> cateto2;
    cout << sqrt(pow(cateto1, 2) + pow(cateto2, 2));
}

//**********************
//STRUTTURA DI SELEZIONE
//**********************

void es5()
{
    //1. Sul prezzo del prodotto (chiesto in input) viene praticato lo sconto del 3% se il prezzo è inferiore a 100
    //euro, e del 5% se superiore o uguale a 100. Calcolare il prezzo da pagare, e lo sconto applicato
    float prezzo;
    const int sconto1 = 3, sconto2 = 5;
    cout << "Dammi il prezzo\n";
    cin >> prezzo;
    if (prezzo < 100)
    {
        cout << prezzo - (prezzo / 100 * sconto1);
        cout << "\nSconto applicato: " << prezzo / 100 * sconto1;
    }
    else
    {
        cout << prezzo - (prezzo / 100 * sconto2);
        cout << "\nSconto applicato: " << prezzo / 100 * sconto2;
    }
}

void es6()
{
    /*2. La scuola rimborsa il 15% del costo dell’abbonamento se lo studente abita in provincia, usa l’autobus ed
è lontano almeno 20 km dalla scuola. Alle stesse condizioni, se usa il treno, il rimborso è del 10%.
Calcolare il rimborso, stampare il nome dello studente e l’ammontare del rimborso.*/
    string nome;
    int risposta;
    const int sconto = 15, sconto1 = 10;
    bool provincia = false, autobus = false, treno = false, distanza = false;
    float costo;
    cout << "Come ti chiami?\n";
    cin >> nome;
    cout << "Quanto costa l'abbonamento?\n";
    cin >> costo;
    cout << "Abiti in provincia?";
    do
    {
        cin >> risposta;
    } while (risposta > 1 || risposta < 0);
    if (risposta == 0)
    {
        cout << "Ci dispiace " << nome << " ma non possiamo rimbossare l'abbonamento\n";
        cout << "MOTIVO: non abiti in provincia\n";
    }
    else
    {
        cout << "Sei lontano almeno 20km?\n";
        do
        {
            cin >> risposta;
        } while (risposta > 1 || risposta < 0);
        if (risposta == 0)
        {
            cout << "Ci dispiace " << nome << " ma non possiamo rimbossare l'abbonamento\n";
            cout << "MOTIVO: Non sei lontano 20km\n";
        }
        else
        {
            cout << "Usi L'autobus?\n";
            do
            {
                cin >> risposta;
            } while (risposta > 1 || risposta < 0);
            if (risposta == 0)
            {
                cout << "Usi il treno?\n";
                do
                {
                    cin >> risposta;
                } while (risposta > 1 || risposta < 0);
                if (risposta == 0)
                {
                    cout << "Ci dispiace " << nome << " ma non possiamo rimbossare l'abbonamento\n";
                    cout << "MOTIVO: Non utilizzi un treno/autobus\n";
                }
                else
                {
                    cout << "Congratulazioni " << nome << "!\n";
                    cout << "Il tuo abbonamento sara' rimborsato del " << sconto1 << "%\n";
                    cout << "Sara' rimborsato: " << costo / 100 * sconto1 << " euro\n";
                    cout << "Quanto dovrai pagare: " << costo - costo / 100 * sconto1 << " euro\n";
                }
            }
            else
            {
                cout << "Congratulazioni " << nome << "!\n";
                cout << "Il tuo abbonamento sara' rimborsato del " << sconto << "%\n";
                cout << "Sara' rimborsato: " << costo / 100 * sconto << " euro\n";
                cout << "Quanto dovrai pagare: " << costo - costo / 100 * sconto << " euro\n";
            }
        }
    }
}

void es7()
{
    //3. Dati tre numeri, visualizzarli in ordine crescente.
    int num1, num2, num3;
    cout << "Dammi dei num\n";
}

void es8()
{
    //4. Determinare se un numero intero positivo è pari.
    int num;
    cout << "Dammi un num\n";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "Il numero e' pari\n";
    }
    else
    {
        cout << "Il numero e' dispari\n";
    }
    if (num < 0)
    {
        cout << "Il numero e' negativo\n";
    }
    else if (num > 0)
    {
        cout << "Il numero e' positivo\n";
    }
    else
    {
        cout << "neutro\n";
    }
}

void es9()
{
    //5. Dati due numeri interi, stabilire se il primo è multiplo del secondo.
    int num1, num2;
    cout << "Dammi i num\n";
    cin >> num1 >> num2;
    if (num1 % num2 == 0)
    {
        cout << "il primo numero e' multiplo del secondo\n";
    }
}

void es10()
{
    /*6. Dati due numeri interi, stabilire se il primo è divisibile per il secondo. Produrre in output la stringa “non
divisibile” se si verifica questa eventualità, altrimenti produrre in output il quoziente della divisione dei
due numeri.*/
    int divisore, dividendo;
}

void es11()
{
    /*7. Di un rettangolo è nota la base (valore costante pari a 5 cm), mentre l’altezza viene fornita in input. Se
l’altezza è maggiore di zero, si vuole calcolare e comunicare area e perimetro del rettangolo. In caso contrario
si produca in output il messaggio “rettangolo degenere”.*/
    const int base = 5;
    int altezza;
    cout << "Forniscimi l'altezza\n";
    cin >> altezza;
    if (altezza > 0)
    {
        cout << altezza * 2 + base * 2;
        cout << endl
             << altezza * base;
    }
    else
    {
        cout << "rettangolo degenere\n";
    }
}

void es12()
{
    //8. Date le misure dei lati di un triangolo, stabilire se è rettangolo.
}

void es13()
{
    /*9. Un'agenzia di viaggi offre uno sconto sul prezzo di una crociera, che varia in funzione della durata della
crociera stessa e del numero di persone che vi partecipano. Se la durata supera le due settimane e vi
partecipano più di due persone lo sconto è del 15%. Altrimenti lo sconto è del 5%. Calcolare il prezzo
della crociera tenendo conto di tutte le possibili condizioni di sconto.*/
}

void es14()
{
    /*10. Un'azienda deve effettuare un certo numero di consegne di pacchi ai propri clienti. Può scegliere tra due
fornitori che propongono le seguenti tariffe
Fornitore A: costo fisso annuale di 600 euro;
Fornitore B: costo fisso annuale di 350 euro + tariffa unitaria di 0,10 euro per ogni spedizione.
Progettare un'applicazione che, data la quantità di consegne che deve effettuare l'azienda, stampi il
fornitore che applica le condizioni più convenienti e, in ogni caso il costo del fornitoreB. Determinare
inoltre la quantità per cui la scelta dei fornitori è indifferente.*/
}

void es15()
{
    /*11. Una compagnia aerea privata applica due tipologie di biglietti, in relazione a due fasce chilometriche
diverse:
fino a 500 Km il costo del biglietto è pari a X euro + Y euro per ogni Km percorso;
oltre 500 Km il costo del biglietto è pari a Z euro (con Z minore di X) + Y euro per ogni Km percorso.
Scrivere un algoritmo che, dato il numero di Km percorsi, stampi il prezzo del biglietto, supponendo X,
Y e Z costanti.*/
}

//********************
// STRUTTURA ITERATIVA
//********************

void es16()
{
    //1. Inseriti N numeri, determinare quanti numeri sono positivi.
}

void es17()
{
    //2. Inseriti N numeri determinare quanti numeri sono pari e positivi.
}

void es18()
{
    //3. Sommare N numeri dati in input e comunicare il risultato.
}

void es19()
{
    //4. Moltiplicare N numeri dati in input e comunicare il risultato.
}

void es20()
{
    /*5. Dati due numeri, calcolarne il prodotto utilizzando il solo operatore “+”. (senza usare quindi l’operatore
*)*/
}

void es21()
{
    //6. Calcolare e comunicare la media aritmetica di 10 numeri forniti in input.
}

void es22()
{
    //7. Determinare e comunicare il massimo e il minimo di 10 numeri forniti in input.
}

void es23()
{
    //8. Determinare e comunicare la somma dei primi N numeri naturali.
}

void es24()
{
    //9. Calcolare la somma dei numeri inseriti da tastiera fintanto che si mantengono positivi.
}

void es25()
{
    /*10. Dato in input un valore limite intero positivo, determinare e comunicare quanti numeri naturali (a partire
da 1) in sequenza, occorre sommare per raggiungere o eventualmente superare tale limite.*/
}

void es26()
{
    /*11. Un numero primo è un numero maggiore di uno e divisibile solo per se stesso e per uno. Ad esempio 2, 3, 5,
7, 11 sono numeri primi. Scrivere un programma che restituisce “PRIMO” se il numero fornito in input è
primo, altrimenti restituisce “NON PRIMO”.*/
}

void es27()
{
    /*12. Dati in input n numeri interi determinare la somma di quelli positivi e negativi e visualizzare quale
somma risulta essere maggiore.*/
}

void es28()
{
    //13. Determinare la somma dei numeri naturali dispari compresi fra due numeri a e b chiesti all’utente
}

void es29()
{
    /*14. Leggere e addizionare una quantità non definita a priori di numeri interi fintantoché la somma si mantine
positiva; fornire in output il conteggio.*/
}

//*******************
// ESERCIZI SUL LIBRO
//*******************

void es30()
{
    //scrivi un programma che effettua random il lancio di due dadi e visualizza i risultati.
}

void es31()
{
    //Scrivi un programma che genera N numeri random (N inserito dall'utente) e visualizza quanti numeri pari e quanti numeri dispari sono stati generati.
}

void es32()
{
    //Scrivi un programma che effettua la somma dei numeri inseriti dall'utente fino a raggiungere il numero 1000 e indica quanti numeri sono stati sommati.
}

void es33()
{
    //Scrivi un programma che, leggendo due numeri, ne esegue la moltiplicazione mediante somme successive visualizzando sullo schermo il risultato di ogni iterazione.
}

void es34()
{
    //Scrivi un programma che disegna sullo schermo 3 cornici quadrate concentriche costitute dal carattere "*" rispettivamente di lato 12,8, e 4.
}

void es35()
{
    //Scrivi un programma che visualizzi i primi 100 numeri dispari a gruppi di 5
}

void es36()
{
    //Scrivi un programma che legga da tastiera i dati di 4 prodotti, in particolare il codice,
    // il prezzo e la percentuale di sconto e visualizzi sullo schermo il prezzo scontato di ciscuno di essi. Successivamente si indichi sullo schermo il prezzo del prodotto più costoso,
    // il totale degli sconti effettuati, la media dei prezzi e la media degli sconti ipotizzando di avere venduto 100 unità di ogni prodotto.
}

void es37()
{
    //Triangolari erano detti i numeri per i quali i punti assumevano la forma di un triangolo, come 1,3,6,10
    //e quadrati erano detti tutti i numeri che si rappresentavno disponendo i punti in modo fa formare un quadrato, come 1,4,9,16 e così via.
    //Inoltre i pitagorici dedussero che un numero quadrato poteva essere ottunuto anche dalla somma di due numeri triangolari successivi. Scrivi l'algoritmo che permette di visualizzare
    //la sequenza nei primi NUM numeri triangolari, dove NUM deve essere compreso tra 4 e 15 e la corrispondente sequenza dei numeri quadrati
}

//MAIN QUA SOTTO !

int main()
{
    int sceltaES;
    cout << "Quale esercizio vuoi vedere?\n (scelta va da 1 a 37)\n";
    cin >> sceltaES;
    switch (sceltaES)
    {
    case 1:
        es1();
        break;
    case 2:
        es2();
        break;
    case 3:
        es3();
        break;
    case 4:
        es4();
        break;
    case 5:
        es5();
        break;
    case 6:
        es6();
        break;
    case 7:
        es7();
        break;
    case 8:
        es8();
        break;
    case 9:
        es9();
        break;
    case 10:
        es10();
        break;
    case 11:
        es11();
        break;
    case 12:
        es12();
        break;
    case 13:
        es13();
        break;
    case 14:
        es14();
        break;
    case 15:
        es15();
        break;
    case 16:
        es16();
        break;
    case 17:
        es17();
        break;
    case 18:
        es18();
        break;
    case 19:
        es19();
        break;
    case 20:
        es20();
        break;
    case 21:
        es21();
        break;
    case 22:
        es22();
        break;
    case 23:
        es23();
        break;
    case 24:
        es24();
        break;
    case 25:
        es25();
        break;
    case 26:
        es26();
        break;
    case 27:
        es27();
        break;
    case 28:
        es28();
        break;
    case 29:
        es29();
        break;
    case 30:
        es30();
        break;
    case 31:
        es31();
        break;
    case 32:
        es32();
        break;
    case 33:
        es33();
        break;
    case 34:
        es34();
        break;
    case 35:
        es35();
        break;
    case 36:
        es36();
        break;
    case 37:
        es37();
        break;
    }
}