#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
using namespace std;

//*********************************************************************
// STRUTTURA SEQUENZIALE
//*********************************************************************
void es1()
{
    //1. Chiesti due numeri in input determinare la somma di due numeri.
    int num1, num2;
    cout << "Dammi i tuoi num\n";
    cin >> num1 >> num2;
    cout << num1 + num2;
}
//-----------------------------------
void es2()
{
    //2. Chiesti tre numeri in input determinare la media di tre numeri.
    float num1, num2, num3;
    cout << "Dammi i tuoi num\n";
    cin >> num1 >> num2 >> num3;
    cout << (num1 + num2 + num3) / 3;
}
//-----------------------------------
void es3()
{
    //3. Dato in input il lato, trovare perimetro e area di un quadrato.
    int lato;
    cout << "Dammi il lato\n";
    cin >> lato;
    cout << lato * 4 << endl;
    cout << lato * lato;
}
//-----------------------------------
void es4()
{
    //4. Dati i due cateti calcolare la misura dell’ipotenusa di un triangolo rettangolo.
    int cateto1, cateto2;
    cout << "Dammi i cateti\n";
    cin >> cateto1;
    cin >> cateto2;
    cout << sqrt(pow(cateto1, 2) + pow(cateto2, 2));
}

//*********************************************************************
//STRUTTURA DI SELEZIONE
//*********************************************************************

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
//-----------------------------------
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
    cout << "Abiti in provincia?(1 == si | 0 == no)\n";
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
        cout << "Sei lontano almeno 20km?(1 == si | 0 == no)\n";
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
            cout << "Usi L'autobus?(1 == si | 0 == no)\n";
            do
            {
                cin >> risposta;
            } while (risposta > 1 || risposta < 0);
            if (risposta == 0)
            {
                cout << "Usi il treno?(1 == si | 0 == no)\n";
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
//-----------------------------------
void es7()
{
    //3. Dati tre numeri, visualizzarli in ordine crescente.
    int num1, num2, num3, max, max1, ultimo;
    cout << "Inserisci tre numeri interi.\n";
    cin >> num1 >> num2 >> num3;
    max = num1;
    if (num1 >= max)
    {
        max = num1;
        if (num2 >= num3)
        {
            max1 = num2;
            ultimo = num3;
        }
        else
        {
            max1 = num3;
            ultimo = num2;
        }
    }
    if (num2 >= max)
    {
        max = num2;
        if (num1 >= num3)
        {
            max1 = num1;
            ultimo = num3;
        }
        else
        {
            max1 = num3;
            ultimo = num1;
        }
    }
    if (num3 >= max)
    {
        max = num3;
        if (num2 >= num1)
        {
            max1 = num2;
            ultimo = num1;
        }
        else
        {
            max1 = num1;
            ultimo = num2;
        }
    }
    cout << ultimo << "\t" << max1 << "\t" << max;
}
//-----------------------------------
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
//-----------------------------------
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
    else
    {
        cout << "Il primo numero non e' multiplo del secondo\n";
    }
}
//-----------------------------------
void es10()
{
    /*6. Dati due numeri interi, stabilire se il primo è divisibile per il secondo. Produrre in output la stringa “non
divisibile” se si verifica questa eventualità, altrimenti produrre in output il quoziente della divisione dei
due numeri.*/
    int divisore, dividendo;
    cout << "Ciao! dammi il dividendo!\n";
    cin >> dividendo;
    cout << "Dammi il divisore\n";
    cin >> divisore;
    if (divisore == 0 && dividendo == 0)
    {
        cout << "Indefinito\n";
    }
    else if (divisore == 0)
    {
        cout << "Impossibile\n";
    }
    else
    {
        cout << dividendo / divisore;
    }
}
//-----------------------------------
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
//-----------------------------------
void es12()
{
    float lato1, lato2, lato3, cateto1, cateto2, ipotenusa, teorema;
    cout << "Inserisci i tre lati del triangolo.\n";
    cin >> lato1 >> lato2 >> lato3;
    ipotenusa = max(lato1, lato2);
    ipotenusa = max(ipotenusa, lato3);
    if (ipotenusa == lato1)
    {
        cateto1 = lato2;
        cateto2 = lato3;
    }
    if (ipotenusa == lato2)
    {
        cateto1 = lato1;
        cateto2 = lato3;
    }
    if (ipotenusa == lato3)
    {
        cateto1 = lato1;
        cateto2 = lato2;
    }
    teorema = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    if (ipotenusa == teorema)
        cout << "Il triangolo e' un triangolo rettangolo.\n";
    else
        cout << "Il triangolo non e' rettangolo.\n";
}
//-----------------------------------
void es13()
{
    /*9. Un'agenzia di viaggi offre uno sconto sul prezzo di una crociera, che varia in funzione della durata della
crociera stessa e del numero di persone che vi partecipano. Se la durata supera le due settimane e vi
partecipano più di due persone lo sconto è del 15%. Altrimenti lo sconto è del 5%. Calcolare il prezzo
della crociera tenendo conto di tutte le possibili condizioni di sconto.*/
    int settimane, persone, costo;
    const int sconto = 15, sconto1 = 5;
    cout << "Quante persone ci sono?\n";
    do
    {
        cin >> persone;
    } while (persone < 0);
    cout << "Per quante settimane?\n";
    do
    {
        cin >> settimane;
    } while (settimane < 0);
    cout << "Quanto devi pagare?\n";
    do
    {
        cin >> costo;
    } while (costo < 0);
    if (persone > 2 && settimane > 2)
    {
        cout << "Dovrai pagare: " << costo - (costo / 100) * sconto;
    }
    else
    {
        cout << "Dovrai pagare: " << costo - (costo / 100) * sconto1;
    }
}
//-----------------------------------
void es14()
{
    /*10. Un'azienda deve effettuare un certo numero di consegne di pacchi ai propri clienti. Può scegliere tra due
fornitori che propongono le seguenti tariffe
Fornitore A: costo fisso annuale di 600 euro;
Fornitore B: costo fisso annuale di 350 euro + tariffa unitaria di 0,10 euro per ogni spedizione.
Progettare un'applicazione che, data la quantità di consegne che deve effettuare l'azienda, stampi il
fornitore che applica le condizioni più convenienti e, in ogni caso il costo del fornitoreB. Determinare
inoltre la quantità per cui la scelta dei fornitori è indifferente.*/
    const int costofisso = 600, costofisso1 = 350;
    const float tariffa = 0.10;
    int pacchi;
    cout << "Quanti pacchi devi consegnare?\n";
    do
    {
        cin >> pacchi;
    } while (pacchi < 0);

    cout << "Costo fornitore A: " << costofisso << endl;
    cout << "Costo fornitore B: " << pacchi * tariffa + costofisso1 << endl;
    if (pacchi * tariffa + (costofisso - costofisso1) == costofisso)
    {
        cout << "Scelta dei fornitori è indifferente\n";
    }
    else if (pacchi * tariffa + (costofisso - costofisso1) < costofisso)
    {
        cout << "Ti conviene fornitore B\n";
    }
    else if (pacchi * tariffa + (costofisso - costofisso1) > costofisso)
    {
        cout << "Ti conviene fornitore A\n";
    }
}
//-----------------------------------
void es15()
{
    /*11. Una compagnia aerea privata applica due tipologie di biglietti, in relazione a due fasce chilometriche
diverse:
fino a 500 Km il costo del biglietto è pari a X euro + Y euro per ogni Km percorso;
oltre 500 Km il costo del biglietto è pari a Z euro (con Z minore di X) + Y euro per ogni Km percorso.
Scrivere un algoritmo che, dato il numero di Km percorsi, stampi il prezzo del biglietto, supponendo X,
Y e Z costanti.*/
    const int X = 10, Y = 2, Z = 5;
    int risposta;
    cout << "Ciao! Quanti chilometri hai percorso?\n";
    cin >> risposta;
    if (risposta < 500)
    {
        cout << "Il biglietto costera': " << X + Y * risposta;
    }
    else
    {
        cout << "Il biglietto costera': " << Z + Y * risposta;
    }
}

//*********************************************************************
// STRUTTURA ITERATIVA
//*********************************************************************
void es16()
{
    //1. Inseriti N numeri, determinare quanti numeri sono positivi.
    int num, cont = 0;
    cout << "Quanti numeri?\n";
    cin >> num;
    for (int i = num; i > 0; i--)
    {
        cin >> num;
        if (num > 0)
        {
            cont++;
        }
    }
    cout << "Ci sono " << cont << " Numeri positivi\n";
}
//-----------------------------------
void es17()
{
    //2. Inseriti N numeri determinare quanti numeri sono pari e positivi.
    int num, cont = 0;
    cout << "Quanti numeri?\n";
    cin >> num;
    for (int i = num; i > 0; i--)
    {
        cin >> num;
        if (num > 0 && num % 2 == 0)
        {
            cont++;
        }
    }
    cout << "Ci sono " << cont << " Numeri positivi e pari\n";
}
//-----------------------------------
void es18()
{
    //3. Sommare N numeri dati in input e comunicare il risultato.
    int num, somma = 0;
    cout << "Quanti numeri?\n";
    cin >> num;
    for (int i = num; i > 0; i--)
    {
        cin >> num;
        somma += num;
    }
    cout << "La somma e' " << somma << endl;
}
//-----------------------------------
void es19()
{
    //4. Moltiplicare N numeri dati in input e comunicare il risultato.
    int num, prodotto = 1;
    cout << "Quanti numeri?\n";
    cin >> num;
    for (int i = num; i > 0; i--)
    {
        cin >> num;
        prodotto = prodotto * num;
    }
    cout << "Il prodotto e' " << prodotto << endl;
}
//-----------------------------------
void es20()
{
    /*5. Dati due numeri, calcolarne il prodotto utilizzando il solo operatore “+”. (senza usare quindi l’operatore
*)*/
    int num, num2, prodotto = 0;
    cout << "Dammi i num\n";
    cin >> num >> num2;
    for (int i = num2; i > 0; i--)
    {
        prodotto += num;
    }
    cout << "il prodotto e' " << prodotto;
}
//-----------------------------------
void es21()
{
    //6. Calcolare e comunicare la media aritmetica di 10 numeri forniti in input.
    int num, somma = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Dammi un num\n";
        cin >> num;
        somma += num;
    }
    cout << "la media e' " << somma / 10;
}
//-----------------------------------
void es22()
{
    //7. Determinare e comunicare il massimo e il minimo di 10 numeri forniti in input.
    int num, max = -20000, min = 20000;
    for (int i = 0; i < 10; i++)
    {
        cout << "Dammi un num\n";
        cin >> num;
        if (num > max)
        {
            max = num;
        }
        if (num < min)
        {
            min = num;
        }
    }
    cout << "Il massimo e' " << max << "\n il minimo e' " << min;
}
//-----------------------------------
void es23()
{
    //8. Determinare e comunicare la somma dei primi N numeri naturali.
    int num, somma = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Dammi un num\n";
        cin >> num;
        if (num > 0)
        {
            somma += num;
        }
    }
    cout << "\nLa somma dei num naturali e': " << somma;
}
//-----------------------------------
void es24()
{
    //9. Calcolare la somma dei numeri inseriti da tastiera fintanto che si mantengono positivi.
    int num, somma = 0;
    do
    {
        cout << "Dammi un num\n";
        cin >> num;
        if (num > 0)
        {
            somma += num;
        }
    } while (num > 0);
    cout << somma;
}
//-----------------------------------
void es25()
{
    /*10. Dato in input un valore limite intero positivo, determinare e comunicare quanti numeri naturali (a partire
da 1) in sequenza, occorre sommare per raggiungere o eventualmente superare tale limite.*/
    int risposta;
    float sommare;
    cout << "Dammi un numero limite\n";
    do
    {
        cin >> risposta;
    } while (risposta < 0);
    for (int i = 1; i <= risposta; i++)
    {
        sommare = risposta / i;
        cout << "Hai bisogno di " << ceil(sommare) << " (numero: " << i << ") per raggiungere il numero " << risposta << endl;
    }
}
//-----------------------------------
void es26()
{
    /*11. Un numero primo è un numero maggiore di uno e divisibile solo per se stesso e per uno. Ad esempio 2, 3, 5,
7, 11 sono numeri primi. Scrivere un programma che restituisce “PRIMO” se il numero fornito in input è
primo, altrimenti restituisce “NON PRIMO”.*/
    int risposta, cont = 0;
    cout << "Dammi un numero\n";
    cin >> risposta;
    for (int i = 1; i < risposta; i++)
    {
        if (risposta % i == 0)
        {
            cont++;
        }
    }
    if (cont == 2)
    {
        cout << "Il numero e' primo\n";
    }
}
//-----------------------------------
void es27()
{
    /*12. Dati in input n numeri interi determinare la somma di quelli positivi e negativi e visualizzare quale
somma risulta essere maggiore.*/
    int risposta, sommaPos = 0, sommaNeg = 0;
    cout << "Quante volte?\n";
    cin >> risposta;
    for (int i = risposta; i > 0; i--)
    {
        cout << "Dammi un num \n";
        do
        {
            cin >> risposta;
        } while (risposta == 0);
        if (risposta < 0)
        {
            sommaNeg += risposta * -1;
        }
        else
        {
            sommaPos += risposta;
        }
    }
    if (sommaPos > sommaNeg)
    {
        cout << "Numeri positivi più grandi\n";
    }
    else
    {
        cout << "Numeri negativi più grandi\n";
    }
}
//-----------------------------------
void es28()
{
    //13. Determinare la somma dei numeri naturali dispari compresi fra due numeri a e b chiesti all’utente
    int risposta1, risposta2, momentanea, somma = 0;
    cout << "Dammi due numeri\n";
    cin >> risposta1 >> risposta2;
    if (risposta1 < risposta2)
    {
        momentanea = risposta1;
        risposta1 = risposta2;
        risposta2 = momentanea;
    }
    for (int i = risposta1; i > risposta2; i--)
    {
        if (i % 2 == 1)
        {
            somma += i;
        }
    }
    cout << "La somma dei numeri dispari e': " << somma;
}
//-----------------------------------
void es29()
{
    /*14. Leggere e addizionare una quantità non definita a priori di numeri interi fintantoché la somma si mantine
positiva; fornire in output il conteggio.*/
    int risposta, somma = 0;
    cout << "Dammi dei num\n";
    do
    {
        cin >> risposta;
        somma += risposta;
    } while (somma >= 0);
    cout << "La somma e': " << somma;
}

//*********************************************************************
// ESERCIZI SUL LIBRO
//*********************************************************************

void es30()
{
    //scrivi un programma che effettua random il lancio di due dadi e visualizza i risultati.
    int dado1, dado2;
    srand(time(NULL));
    dado1 = rand() % 6 + 1;
    dado2 = rand() % 6 + 1;
    cout << dado1 << "\t" << dado2;
}
//-----------------------------------
void es31()
{
    //Scrivi un programma che genera N numeri random (N inserito dall'utente) e visualizza quanti numeri pari e quanti numeri dispari sono stati generati.
    int risposta, random, par = 0, dis = 0;
    srand(time(NULL));
    cout << "Dammi un numero\n";
    cin >> risposta;
    for (int i = risposta; i > 0; i--)
    {
        random = rand() % 100 + 1;
        if (random % 2 == 0)
        {
            par++;
        }
        else
        {
            dis++;
        }
    }
    cout << "Numeri pari: " << par << endl;
    cout << "Numeri dispari: " << dis << endl;
}
//-----------------------------------
void es32()
{
    //Scrivi un programma che effettua la somma dei numeri inseriti dall'utente fino a raggiungere il numero 1000 e indica quanti numeri sono stati sommati.
    int risposta, somma = 0, cont = 0;
    const int num = 1000;
    do
    {
        cout << "Dammi un num\n";
        cin >> risposta;
        cont++;
        somma += risposta;
    } while (somma < 1000);
}
//-----------------------------------
void es33()
{
    //Scrivi un programma che, leggendo due numeri, ne esegue la moltiplicazione mediante somme successive visualizzando sullo schermo il risultato di ogni iterazione.
    int moltpl1, moltpl2, somma = 0;
    cout << "Dammi num\n";
    cin >> moltpl1;
    cout << "dammi num2\n";
    cin >> moltpl2;
    for (int i = moltpl2; i > 0; i--)
    {
        somma += moltpl1;
    }
    cout << "moltiplicazione e': " << somma;
}
//-----------------------------------
void es34()
{
    //Scrivi un programma che disegna sullo schermo 3 cornici quadrate concentriche costitute dal carattere "*" rispettivamente di lato 12,8, e 4.
    int stella = 12, spazio = 10;
    for (int i = 3; i > 0; i--)
    {
        for (int j = stella; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
        for (int j = spazio; j > 0; j--)
        {
            cout << "*";
            for (int k = spazio; k > 0; k--)
            {
                cout << " ";
            }
            cout << "*\n";
        }
        for (int j = stella; j > 0; j--)
        {
            cout << "*";
        }
        stella -= 4;
        spazio = stella - 2;
        cout << endl
             << endl
             << endl;
    }
}
//-----------------------------------
void es35()
{
    //Scrivi un programma che visualizzi i primi 100 numeri dispari a gruppi di 5
    int cont = 0, cont2 = 0;
    int numDispari[60]; //ho usato un array solo per ripassarlo, proverò a imparare i vettori in un secondo momento.
    for (int i = 100; i > 0; i--)
    {
        if (i % 2 == 1)
        {
            numDispari[cont] = i;
            cont++;
        }
    }
    for (int i = cont / 5; i > 0; i--)
    {
        cout << numDispari[cont2] << "\t" << numDispari[cont2 + 1] << "\t" << numDispari[cont2 + 2] << "\t" << numDispari[cont2 + 3] << "\t" << numDispari[cont2 + 4] << endl;
        cont2 += 5;
    }
}
//-----------------------------------
void es36()
{
    //Scrivi un programma che legga da tastiera i dati di 4 prodotti, in particolare il codice,
    // il prezzo e la percentuale di sconto e visualizzi sullo schermo il prezzo scontato di ciscuno di essi.
    //Successivamente si indichi sullo schermo il prezzo del prodotto più costoso,
    // il totale degli sconti effettuati, la media dei prezzi e la media degli sconti ipotizzando di avere venduto 100 unità di ogni prodotto.
    float prodotto1[3];
    float prodotto2[3];
    float prodotto3[3];
    float prodotto4[3];
    float max = -1;
    int prodottoCodice;
    const int vendite = 100;
    //Codice prodotto [0], Prezzo [1], sconto [2]
    cout << "Dammi I dati del primo prodotto (Codice prodotto [1], Prezzo [2], sconto [3])\n";
    cin >> prodotto1[0] >> prodotto1[1] >> prodotto1[2];
    cout << "Dammi I dati del secondo prodotto (Codice prodotto [1], Prezzo [2], sconto [3])\n";
    cin >> prodotto2[0] >> prodotto2[1] >> prodotto2[2];
    cout << "Dammi I dati del terzo prodotto (Codice prodotto [1], Prezzo [2], sconto [3])\n";
    cin >> prodotto3[0] >> prodotto3[1] >> prodotto3[2];
    cout << "Dammi I dati del quarto prodotto (Codice prodotto [1], Prezzo [2], sconto [3])\n";
    cin >> prodotto4[0] >> prodotto4[1] >> prodotto4[2];
    max = prodotto1[1];
    prodottoCodice = prodotto1[0];
    if (max < prodotto2[1])
    {
        max = prodotto2[1];
        prodottoCodice = prodotto2[0];
    }
    if (max < prodotto3[1])
    {
        max = prodotto3[1];
        prodottoCodice = prodotto3[0];
    }
    if (max < prodotto4[1])
    {
        max = prodotto4[1];
        prodottoCodice = prodotto4[0];
    }
    cout << "Prodotto piu' costoso: " << max << " Codice: " << prodottoCodice << endl;
    cout << "Prezzo scontato dei prodotti:\n";
    cout << "Prodotto 1\n "
         << "\tPrezzo senza sconto: " << prodotto1[1] << " | Prezzo con sconto: " << prodotto1[1] - (prodotto1[1] / 100 * prodotto1[2]) << " | Sconto: " << prodotto1[2] << endl;
    cout << "Prodotto 2\n "
         << "\tPrezzo senza sconto: " << prodotto2[1] << " | Prezzo con sconto: " << prodotto2[1] - (prodotto2[1] / 100 * prodotto2[2]) << " | Sconto: " << prodotto2[2] << endl;
    cout << "Prodotto 3\n "
         << "\tPrezzo senza sconto: " << prodotto3[1] << " | Prezzo con sconto: " << prodotto3[1] - (prodotto3[1] / 100 * prodotto3[2]) << " | Sconto: " << prodotto3[2] << endl;
    cout << "Prodotto 4\n "
         << "\tPrezzo senza sconto: " << prodotto4[1] << " | Prezzo con sconto: " << prodotto4[1] - (prodotto4[1] / 100 * prodotto4[2]) << " | Sconto: " << prodotto4[2] << endl;
    cout << "Media degli sconti: " << (prodotto1[2] * vendite + prodotto2[2] * vendite + prodotto3[2] * vendite + prodotto4[2] * vendite) / (vendite * 4) << "%\n";
    cout << "Sconti effettuati: " << vendite * 4 << endl;
    cout << "Media dei prezzi: " << (prodotto1[1] * vendite + prodotto2[1] * vendite + prodotto3[1] * vendite + prodotto4[1] * vendite) / (vendite * 4) << endl;
}
//-----------------------------------
void es37()
{
    //Triangolari erano detti i numeri per i quali i punti assumevano la forma di un triangolo, come 1,3,6,10
    //e quadrati erano detti tutti i numeri che si rappresentavno disponendo i punti in modo fa formare un quadrato, come 1,4,9,16 e così via.
    //Inoltre i pitagorici dedussero che un numero quadrato poteva essere ottunuto anche dalla somma di due numeri triangolari successivi. Scrivi l'algoritmo che permette di visualizzare
    //la sequenza nei primi NUM numeri triangolari, dove NUM deve essere compreso tra 4 e 15 e la corrispondente sequenza dei numeri quadrati
    int risposta, numPrecedente = 0, triangolare = 1, cont = 1;
    cout << "Quanti num triangolari vuoi?";
    do
    {
        cin >> risposta;
    } while (risposta < 3 || risposta > 16);
    for (int i = 1; i <= risposta; i++)
    {
        cout << "Numero triangolare: " << triangolare << endl;
        cout << "Numero quadrato corrispondente: " << numPrecedente + triangolare << endl;
        numPrecedente = triangolare;
        cont++;
        triangolare += cont;
    }
}
//-----------------------------------
//MAIN QUA SOTTO !

//  .,.,/(((((//////////##%%%%%%%%%%%%%%%##//(#%%%%%%%%%%####(/*,*******,*,**(/,........................................................................
//  #(/**///////((##%%%%%%%%%%%%&&&%%&&&&&%##%&&%%%&%%%%%%%%%%%###(/(#(*,******,/*..... ............................................................  ......
//  /////(%%%#####(((#%%%&%%&%%%%%%&&&&&&&@&&&&&&&&%%%&&%%&%%%%%%%%#%%(((##(**,*,,/*..... ......................................................
//  //(((####((/#%%%&&&&&&&&&&&&&&%%%%&@@@@@&&&&%%%&&&&&&&&&%%%&&%%%%%%%#//(%#/*****/... ......................................................
//  /(##((/(#%&%%%&&&&&&&&&&&&&&&&&&@@@@@@@@&&&%%@@&&&&&&%%%%&&&&&&%%%%%%%#/**(##/,,*/,  ........   .......  ..................................
//  ////(#&&%%%%&%%&&&&%#%%%&&&&&&&&@@@@@@@@&&@&&&&&&&%%&&&&&&&&&&&&&%%%%%%%#(******/((*,,,........  .     .. ......................................
//  #%%%%%%%%%%&&&&&&%%%%%%%%%%%&&@@@@@@@@@@@@@@&@&%%&&&&&&&&&&&&&&&&&&&&%%%%%%#(//**,,**,,(* ...... .     ...... ..........................................................................................
//  %%%%%%%%%&&&&&&&&&&&%%#%&&&&%%%&@@@@@@@@@@@@&%%&@&&&&&&&&&&&&&&&&&&&&&&&&%%%%%###(//****/*,.......     ...... ..........................................................................................
//  %##((#%&&&&&&&&&&&&&&&&&&&%%%%%&&@@@@@@@@@&&&&@&&&@&&&&&&&&&&&&&&&&&&&&&%&%%%&%%%%###(/***//. .. ..    ............ ...................................................................    .............
//  ((#%&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@@@@&&@@&&&&&&&&&%%&&&&&&&&&&&&&&&&&&&&%##%%%%%####(***/*. .  .  ............. ...................................................................   ...........,,.
//  %%%&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@@&&@&&&&&&&&%&&&&&&&&&&&&&&&&&&&&&&&%%%((#&%%%%###(/**/, ...   ............ ....................................................................................
//  %%%&&&&&&&&&&&&@&&&&&&&&&&@&&&%&&&@@@@@@@&@&&&&&&%&&&&&&&&&&&&&&&&&&&&&&&&&&%%%%#//#&&%%%##(/*,/*. ..  ............ ....................................................................................
//  &&&&&&&&&&&&@@@@@@@@@@&&&&&&&&&&&&&@@@@@@&&&&&&%&&&&&&&@&&&@@@@@@@@&&&&&&&&&&&&%%%(/(%&&&&%%#/***/,  ...................................................................................................
//  &&&&&&&&&&&@@@@@@@@@@@@@@@@@&&&&&&@@@@@@@&&&&&&&@@&&&&@@@@@@@@@@@@@@&&&&&&&&&&&%%%%(/(%&&&&&%#(***/,......... ..........................................................................................
//  &&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@&&@@@@&@@&&@&&@@@@@@@@@@@@@@@@@@&&&&&&&&&&%%%%&%#((%&&@&&%#/**//, ....... ..........................................................................................
//  &&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&%&%&&&&&&&%%%#((&@&&&&%#*/*(/...................................................................................................
//  &&&&&%&%%&@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&%%#%%%%&&%&%%&%(#&@@@&&%(////...................................................................................................
//  %&%%&#&%%&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&%%#%&%#%&&%&%%&#/#&@&&&%%(/*(................................................................................................,,.
//  &%%%%%%%&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&%%%%&&#%#%%(%##&%(#&@&&&&%(*(................................................................................................,..
//  %#&%%&%%@&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&%&&&@&&&&@@&&&&&%%&#%&%%%#%%####%%(#&&&&&%(((...................................................................................................
//  %&%%&%%&&&&@@@&&&&&%#%%##%%%%%%%%%&&&&&@@&&%%&&%##%%##((###%&&&&@@&&&&&&&%&%#&&%##%%%###(#&(/%&&&%((,................................................................................................,..
//  &&%&&%&&&&&@@@&&@&%#######################%################%&&@@&@&&&&&&&%%&%%&&%###%&#(%####/#&%&#..................................................................................................,..
//  &&&&&&&&&&&@@@@@@@&%%#######%%%%######%%&%%%##%%%%%%%%%%%%&&&&@@@&&@&&&&&&&&&&&&&%##%%&&%%%%%#//#(,.....................................................................................................
//  &&&&&&&&&&&@@@@@@@@@&&&&%%%&&&&&&&&%%%%%&%&%&&&&&&&&&&&&&&&&&@@@@@@@@@&&@@&&&&&&&&&&%%&&%%%%%%#(*/(*....................................................................................................
//  &&&&&&&&&&&@@&&@@&@&@@&@&&&@@&&&&&&@@@@@@&@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@&&&&&&&&&&&&&&&&&%%%%%#(/*//,. ,..............................   ..............................................................
//  &&&&&&&&@@@@@@#/%&&@&@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@&&&&&&&&&&&&&&&&&&&%%%%%#(***/*..........................               .......................................................
//  &&&&&&@@@@@&&#/#/(#%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&%#(#%&@@@@@&&&&&&@@@@@@@@@@@&&&&&%%%%##(/**#..............                          .......................................................
//  @@@@@&&%###%(%%(%#/##%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@(###/#%#%%%%&&&&@@@@@@@@@@@@@@@@@@&&&&%%%(//*.............                              ...... ..............................................
//  ##(((#(((#((%#(%%#&#%((&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%*%#%#&##%#########%@@@@@@@@@@@@@@@@@@&&&#(#(..........                                                   .....................................
//  (##(##(##((#(#(##(####%#&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&#/(###############%#%@@@@@@@@@@@@@@@@&@@&%&%*......                                                           ..................................
//  ####%#(((####(#(##(/(((##&@@@@@@@@@@@@@@@@@@@@@@@@@@@@&#(###(/(########%%%##%@@@@@@@@@@@@@@@&&&&&%(.........                                                         ...................................
//  (###%%#######%##(/(#/#(#%%&&@@@@@@@@@@@@@@@@@@@@@@@@@@&%%##(##((#######%%%%#%@@@@@@@@@@@@@&&&#*,*/,........................                               ..............................................
//  %%###(/(#########((#######%@@@@@@@@@@@@@@@@@@@@@@@@@@&&#%(&&########(/##/(&%%&@@&@@@@@@@&@&(,,****/*.......................... ...   ...................................................................
//  &&&#(#(/(#############%##%%%&@@@@@&&&&&@@@@@&@@@@@@@@%#%#%##%%#%%######&@@@&&@@@@@%%&@@@&#****///***............  .      .     .........................................................................
//  &&&&@&&%%%%%%%%%%##%%&%%%%%%&@@&&&%%%%&&@@&%%%&&@@@@%%#%%%&&&&&&&@&&&&&&&&&&@@@&&&&#&@&@&/,*/(#/***/............                 .......................................................................
//  @@&&&%#(###%&&@@@@@@@@@@&&&&@@&%%&&&%%%%&&%&&%%%%%&&&&&@@@@&&@&%#####((%%########/**%&&&#,*/#%%#/***..............             ..................................................................,,.,*//
//  %%((#%#####%%%%%&&&@@@@@@@@@@@&%%%&&&&&&&&&&&&&%%&@@&@@@@&&&%%###%#(/(%&%&&%%(/(//,*&%@#**/#&%%%/**/....................................................................................,,,*,..
//  %%&%%%&%%##%%%&%%&%%&%%&@@@@@@@&&%%%%%&&&&&%%%%&&@@@@@&&%%##%%%%#/,,..*/((#%#(//***#&&&/,/%%%%%%/**/............................................................................,**,...
//  ##%%%#((/*,,.,(%%#*...,/#%&@@@@@@@@&@@@@@@@@@@@@@@@@&%%#(*.,/##(((*.   ,#%%%%#////*(&&#*(#%&%%%%//*/.......................................................................,/,                         ,
//  **/#%%%/......,//*.. .,/#%&&&@@@@@@@@@@@@@@@@@@@@@@@&&%%#/,,,......../%%%%%%#(/**,*#&%*/%&&%&%%#/*//..................................................................,,.                            .*.
//  //***#((%%#(**(%%%%%%%%%&&&&@&&&&&&&&@@@@&&%%%&@&&&@&&&&&&%#%%%%%%%%%&%%%#((/****,,/(#,(%%%%%%%(/*/*..........................................................     ./(*//*****////**,.              .*
//  %%%#(###%%%#(((##%%%&&@@&&&&%#/(%&@&%%%%%%%#%%&%%###&&&@@@&@@@&%##((#((#(**/***,*,/((/*,#&%%%%/**/*..............................................  .....  .......,*/**///////////**/////*,.        .*
//  &&%#(#((((#######%%&&&@@@&%(/(((/(#%%%%%%%%%%%#(////(%&&&@@&%%%%%%%%#%%(******,*(/**#((#%%%%#/,*/,.... ............................................ .,,              *((////(((/*.   .*/(#%(*,     /   .
//  &%#(#(/#%%%%&&&@@@@@@@@&&#//(/(/((/#%##%%%%%%(//(//(/(%&@@@@@&%%%####(##(**/*/(/,***#(%%%%%(,*/*..........................................,*/(((/((((//(((///((/*.  .. ,(%*.               ,#((*. ,# ...
//  %#(#(*(#####(#%&@@@@@@&&(//(((((((/#%%%%&%%%%(/(/(((//(&&@&@&&&%#######(#//(/******/((%#/*,,*/,,.,.      ...   ....    ....    .  .*(#(((((((((((((((((((((((((/(((/..#(,                    ,(%//%( ...
//  #(##//#######%&&@@@@@@&&(//(/(((/(/#%%%%%%&%%(/(/((///(&&&&@@&&%#######((%(********#((**//*(%(//####%%%%(/*,*/((########((////((((((((((((((((((((((((((((((#((((((/#%*           .....        /%(##. .,
//  (###/#########%&&@@@&&&&%(/(//((((/#%&%%%&&%%(/((((//(%&@@@&%%#########(##/*****//#((//(/(%%&%*   ./((//((((#(##%%%###((((((((((((((((((((((((((#(((((###%%#########%* . .........,,,........ ./.*(%, .,
//  ###/*(###########%&&&@@&@%((/(((((/#%%%%%%%%%(/(/((/(%&&&&&%###########(##***////*#(((((%&&&&%*.  .  ,((//(((((((((###%%%%%#######((####################((#%%&%%%##%*.,..,,,,,,,,,,,,,,,,,.. .,, .(%%(*,
//  (#(///###########%##%%&&&&&#((((((/#%%#%#%%#%(/(((/#&&&&%%################/(//**//#(((#&&&&&&%/.       ,((((((((((########%%&&%&%%#########%%%%#######%%####((#%%%&(,,,,,,,,,,,,,,,****,*,,..**.. ,/%%%#
//  #/*///(########%%%%%%%##%%&&&#((#%#%%%#%%%%%%%%#%#%&&&%%#%%##############(/******(%###%&&&&%##%, .    .  ,(#####%%##########%&&&&&&%##########%%&&%%#((((((((((((%#*.,,,,,,,,**************,/*. ....#%&%
//  (##(##(#######%%%%%%#%%%%%%%%&&&&&@&&&%%%%&&&@@@@@@&%%%%%%#%%%%##########//**////%&#(((%&&%%##%*..... .    /%##(##(((((####%%%%&&&&&%#%%%%######(#%&&%##(((((#((#&(,,,,********************//,,.....//(%
//  */((///(#####%%%%%%%%%%%%%%%%%%&@@@@@@@@@@@@@@@@@&&%##%%%%%%%%%#########(//**/(((%(((((%&%%%%%&/,.. ...    ,(%%#######(((##((((#%&&&&%##########((###%%%%#((((((%&%(#((/*****************/(/,,*,...,*. .
//  ///#(///########%&&@@@@&@@&&@@@@&&@@@@@@@@@@@@@@&&&@@@&&&&&@@@&&%#######/*/#(//*#((((((#&%#%##&/,,,....  . .*%&%%########(((###((#%&&&%(##############(#%&%%####%&&%%##%#(/***********,*(/****,,,,./,...
//  ////(##((#%%%#&@@@@@@@@@@@@@@@&&&&&&@@@@@@@@@@@&&&@@@@@@@@@@@@&&&%#%##%%((/////(#(((((((#%%###%/,,,,... ..../&&&&%##########(((#((#%%&&%###############(##%&%%%##&@%%%%%%%###/*/******(/**********(*,..,
//  (//////(#%%#%&@&@@@@@@@@@&&&%%%%%%%%&@@@@@@@&%%%%%%&&@@@@@@@@@@@@&&%###(*//////##((((((((%%%%%%/,,,,,.......(&&&&&&%##########((##(##%&&%##################%%&&%#%&&%%%%%%%%%%#(***/#/***********(*,,*,.
//  ##(((//((/(%&&&@@@@@&&%%%%%%%%%%%%%%%%&@&&&%%%%%%%%%%%%%%%%&@@@@@@@%%%(///////(##(#(#((((#%%%%%/,,,,,.......#%&&&&&&%#%%##############%&&%####################%&&%&&@&&%&%%%%%%%#(//#(,********/#*,/****
//  ######((((//#%@@&@@&%%%%%&&&@@@@@@@@&&&&&&@@@@@@@@@@@@&&%%%%&@@@@@@&%%(///((#(##(###(##((#%##%(*,,,,,,.....,%&&&@@&&&%%%%##############%%&%###############%%%&&&&&&&&&@&&&&&&%%%%%%#//#(*,,*(((/********
//  ###########(/(#&@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&@@@@@@@&#//(#(//#%#########((#%#%**,***,,,....*&&&&@@@@&&&%%%%%%%%##########%&%##%#%%%%%%%%%%%%%%%&&&@&&&&@&&&&&&&&&%%%%#***//**,********/(
//  %%%%%%%%%%%%##((&&&@@&@&%%%%%%######################%&&@@@@@@&@@@@@@&%#(///#&%######%#(##(#%##*,***,,,,,.. /&%%&&@@@@&&&&&&&&&&%%%%%%%%%%%&&&%%&&%%%%%%%%%%&&&&&&&&&&&&&&&&&&&&&&&&&&%%#(/********/*****
//  %%%%%%%%%%%%%%%#(#&%%%%%%&&&&&&&&%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@@@@@&%(///#%&&%###%%%%#####(#%(********,,.../&%&&&&@@@@@&&&&&&&&&%%%%%%%%%&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@&&&&&&&&&%%%%#(/*//********
//  %%%%%%%%%%%%%%%%%##%&%&%%%%%%%%%%%%%%%%%%%%%%%##(((###%%%%%%%&@@@&%%#//#%&@&%%#%#%%%%#######%**********,.../%%&&&&&&@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@&&&&&&&&%%%%%%###%#(/***
//  %%%%%%%%%%%%%%%%%%%&&&%%%&&%%%%%%%%%%%%%%%%%%%%%%%%%&&&&%%%%%@@@&%#(((&&&&@&%%%%%%%%%#######/*/*********,..((#&&&&&&&@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@&&&&&&&&&&%%%%%%%%#%#
//  %%%%%%%%%%%%%%%%%%%%&@&%%%%&@@@@@@@@@@@@@@@@@@@@@@@@&&%%%%%&&&%%%#((%@&&&@@&%%%%%&&%%%#####/*/*/*********,,#(##&&&&&&&@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@@@&&&&&&&&&&&%%%%%%
//  %%%%%%%%%%%%%%%%%%%%%&&&%%%%&&&@@@@@@@@@@@@@@@@@@@&&%%%%%%%%%%%%#(#&@&@@@@&%%%%%%%&%%%####(/*/***********,,####%&&&&&&&@@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@@@@@@@@&&&&&&&&&%%%
//  %%%%%%%%%%%%%%%%%%%%&&@&&%&&%%%%&&&&@@@@@@&&&&&&%&%%%%%%&&%%%%%##&@@@@@@@@&%%%%%%%%%%%##%(////////***//****#####%&&&&&&&@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@@@@@@@&&&&&&&&&&&%
//  %%%%%%%%%%%%%%%%&%%%&@@@&&%&&&%%&&&&&&&&%%&&&&&&&%%%%%%%%&&%%%%&@@@@@@@@@&%%%%%%%%%%%##%(//////////*/(/****######%&&&&&&@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@&&&&&&&&&
//  %%%%%%%%%%%%%%%%%%%&@@@@&&%&&&&&%%&&&%%&&&&&&&%%%&&&&&&&%%%%&&@@@@@@@@@@@&%%%%%%%%%%%#(///////////*/(/**/*/%%#####%&@&&&&@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@@&&&&&&&
//  %%%%%%%%%%%%%%&%&&@@@@@@@&%&&%&&&&&&&&&&&&&&&&%&&&&&&&&&&&&&@@@@@@@@@@@@&&%%%%%%%%%#(//////////////(/*/////%%%##%%%%@&&&@@@@@@@@@@@@@@@&&&&@@&&&&&&&&@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@@&&&
//  &&&%%%%%%&%%%%&&@@@@@@@@@&%&&&&&&&&&&&&&&&&&&&&&&&&&&&%&&&@@@@@@@@@@@@@&&%%%%%%%%#(///////////////((///////%%%%%%%#%&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&@&&&&@&%#/*..,/#&&&&&&&@@@@@@@@@@@@@@@@
//  &&&%%%%&%%&&&&&@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@@@@@@@@@@@&%%%%%%%%((((((((((///////((///////(%%%&&%%%%%&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&%&@&%/*,,*/,  ...  ,(&&&&&@@@@@@@@@@@@@@
//  &&&&&&&&%%&&@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&%&&&%@&%&&&@@@@@@@@@@@@@@@&&&%%%%%%#((/(/(((///((/(///%(/(*/////&&%&&&%#&%%&@@&@@@&&@&@@@@@@@&@@@@@@&@&@@&@@@&@&%%%%&&%((/*,/(,  .. ........*(%&&&@@@@@@@&#((
//  &&&&&&&%%&&@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&(. . *&@&@@@@@@@@@@@@@@( #@&%%%%@%((##(#(/((/(## #///(#%(..#(/&..#&@%&@@%%#%&%.#@@@@@@@&@@@@@&@@@@@@#%@@@@@@@&&%%#%%@%##/,*(*. ..................*#&&&&&&((%&&
//  &&&&&&%%&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*.@@&&@@# ., /@@@@%*,..&# .*. %%,.* *%(.* .%(,.,, #/(((%%#.*,#% , ##..,/&&%%&%& %@* ,,.&&..*.,%, *,(/.,,%#,,..%# ../#/(#*,//.., .,..................../%#/#%%%&
//  &&&&&&%&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*.%@&#.&..@@/.&@@@.,## &# #&% %( /((#&,,(/ %( #(# %(#(#%%# @/,./# %% (&%@@@(&%& #@.%@&,/# ####&@%* (% #@%.,%/.%% %%#%%(,//*.,,,,,,,,,,,,,,,,.............*(#%%%
//  &&&&&%&@@@@&%%%&@@@@@@@@@@@@@@@@@@@@@@@@@@&%*,/#@@%/*#&@@@@%/*##@&(%@%/%%%/,*#&#**%(%%(*/##&&.%&%&%/%##(##/%&((((#/%&&&% #@@(**%@&&(,*#@#*,#&@%**&%//##&&/##(#*#//*.,.,,,,,,,,,,,,,,,,,,,,,.,,,,,,,,.,/#
//  %&%%&%%#####%&@&&&@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&%################(((((((##(#%&&%###((#((#%&#(((((#&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@&&@@&##%#//*//,,,,,,,,,****,*******,,,,,,,,,,,,,,**,
//  (%%#((####%&&&&&&&&%((##%&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&###########################(#%&&&%#####(((#%%#(((#((%%%&&%&@@@@@@@@@@@@@@@@@@@@@@@@@@@@%###//////(/*,************//////////////////////
//  &%((####%&&&&&&&&&&%(##########%&@@@@@@@@@@@@@@@@@@@@@@@&&%%#################################%&&&&%#########%%#(#((##(%&&%&&&@@@@@@@@@@@@@@@@@@@@@@@@&@#/##(/#(((((((((////(((((((((((((((((((((((((((((
//  %#####%&&&&&&&&&&&&#(####%&&%#####%@@@@@@@@@@@@@@@&&%%#######################################%&&&&%#########%%#####(#(%&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@#(%#(((##(((((((((#####((((((((###################
//  %####%&&&&@@@@@@@&%#####%&&&&@@&%#(%@@@@@@@@@@&%####%%%%%%%%%%%#%############################&@&&&&#########%%#########%&&&&&&@@@@@@@@@@@@@@@@@@@@@@@%##(((((%&###############%%########################
//
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