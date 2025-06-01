# 📘 Esercizi in C

Questa repository contiene esercizi di base svolti in linguaggio C. Ogni link porta direttamente al file sorgente all’interno della repository.


## 📂 Indice degli esercizi

​🟢 ​[Esercizio_01](./esercizi_base/esercizio_01.c)  

**Titolo:** Somma di due numeri interi  
**Descrizione:**  
Questo esercizio richiede all'utente di inserire due numeri interi da tastiera, ne calcola la somma e la stampa a schermo in formato leggibile.

**Obiettivi didattici:**
- Prendere confidenza con la funzione `scanf` per leggere input da tastiera
- Comprendere l'uso di variabili di tipo `int`
- Utilizzare `printf` per stampare risultati in modo formattato
- Comprendere il flusso base di un programma: input → elaborazione → output

È uno dei primi esercizi fondamentali per chi inizia a studiare il C, poiché introduce concetti essenziali della programmazione imperativa.

##
​🟢​ [Esercizio_02](./esercizi_base/esercizio_02.c)
   
**Titolo:** Verifica se un numero è pari o dispari  
**Descrizione:**  
Questo esercizio chiede all'utente di inserire un numero intero e determina se il numero è pari o dispari, stampando il risultato a schermo.

**Obiettivi didattici:**
- Uso dell’operatore modulo `%` per calcolare il resto della divisione
- Introduzione alle strutture di controllo condizionale `if`
- Prendere confidenza con input e output tramite `scanf` e `printf`
- Comprendere il flusso decisionale di un programma semplice

È un esercizio base utile per chi vuole capire come lavorare con condizioni e operatori aritmetici in C.

##

​🟢​ [Esercizio_03](./esercizi_base/esercizio_03.c) 

**Titolo:** Calcolo dell'area di un rettangolo  
**Descrizione:**  
Questo esercizio chiede all'utente di inserire due lati interi di un rettangolo, calcola l’area moltiplicando i due valori e stampa il risultato a schermo.

**Obiettivi didattici:**
- Uso delle variabili intere per memorizzare dati numerici
- Utilizzo di `scanf` per acquisire input da tastiera
- Esecuzione di operazioni aritmetiche semplici (moltiplicazione)
- Stampa del risultato formattato con `printf`

È un esercizio base che aiuta a comprendere come manipolare dati numerici e operare calcoli in un programma C.

##

​🟢​ [Esercizio_04](./esercizi_base/esercizio_04.c)  

**Titolo:** Trova il numero maggiore tra tre numeri  
**Descrizione:**  
Questo esercizio chiede all'utente di inserire tre numeri interi e determina quale sia il maggiore tra i tre, stampando il risultato a schermo. Include una gestione semplice di un’eccezione nel caso in cui tutti e tre i numeri siano uguali.

**Obiettivi didattici:**
- Uso di operatori logici (`&&`) per combinare condizioni
- Comprensione delle strutture condizionali multiple con `if`
- Pratica nell’input e output con `scanf` e `printf`
- Gestione di casi particolari con condizioni aggiuntive

È utile per imparare a confrontare valori multipli e prendere decisioni basate su più condizioni.

##
   
​🟢 ​[Esercizio_05](./esercizi_base/esercizio_05.c)  

**Titolo:** Stampa dei numeri da 0 a un numero inserito dall’utente  
**Descrizione:**  
Questo programma chiede all’utente di inserire un numero intero (`num`) e stampa tutti i numeri da 0 fino a `num` (incluso), con un limite massimo fissato a 100 per evitare input troppo grandi.

**Obiettivi didattici:**
- Uso del ciclo `while` per iterare un numero definito di volte
- Controllo dei limiti di input con una condizione `if`
- Pratica di input/output tramite `scanf` e `printf`
- Introduzione alla gestione di semplici errori di input

È un esercizio fondamentale per capire il funzionamento dei cicli e la gestione dei dati da tastiera.


##

​🟢​ [Esercizio_06](./esercizi_base/esercizio_06.c)  

**Titolo:** Calcolo del fattoriale di un numero intero  
**Descrizione:**  
Questo programma chiede all’utente di inserire un numero intero minore o uguale a 10 e calcola il suo fattoriale utilizzando un ciclo `while`. Se il numero inserito è maggiore di 10, il programma segnala un errore.

**Obiettivi didattici:**
- Comprendere l’uso di cicli `while` per eseguire operazioni ripetitive
- Apprendere il calcolo del fattoriale come esempio di algoritmo iterativo
- Gestione dei limiti di input con condizioni `if`
- Pratica di input e output con `scanf` e `printf`

Questo esercizio è utile per introdurre i concetti di ciclo e algoritmo in C.
##

​🟢​ [Esercizio_07](./esercizi_base/esercizio_07.c)  

**Titolo:** Creazione della tabellina di un numero intero  
**Descrizione:**  
Questo programma chiede all’utente di inserire un numero intero minore o uguale a 100 e stampa la tabellina del numero da 0 a 10 usando un ciclo `for`. Se il numero inserito è maggiore di 100, viene mostrato un messaggio di errore.

**Obiettivi didattici:**
- Utilizzo del ciclo `for` per iterare un numero definito di volte
- Comprensione di operazioni aritmetiche e formattazione di output con `printf`
- Gestione semplice di input e condizioni di controllo
- Pratica con input da tastiera tramite `scanf`

Questo esercizio aiuta a consolidare la comprensione dei cicli e delle operazioni aritmetiche base in C.


# 📚​ Progetti fine capitolo

🟣​ [Progetto_media](./esercizi_base/progetto_media.c)

**Titolo:** Calcolo della media di cinque voti  
**Descrizione:**  
Questo progetto chiede all’utente di inserire cinque voti (numeri reali) tramite tastiera e ne calcola la media aritmetica. Il risultato viene visualizzato con due cifre decimali.

**Obiettivi didattici:**
- Utilizzo del tipo `float` per gestire numeri con la virgola
- Calcolo della media aritmetica con somma e divisione
- Formattazione dell’output con precisione decimale (`%.2f`)
- Pratica con input multipli e strutturazione semplice del codice

Questo esercizio conclude il capitolo introducendo l'uso dei numeri reali e il concetto di aggregazione di dati tramite media.


🟣​ [Progetto_bevande](./esercizi_base/progetto_bevande.c)

**Titolo:** Distributore automatico di bevande con `switch`  
**Descrizione:**  
Questo progetto simula un semplice distributore automatico. L’utente può scegliere una tra cinque bevande proposte, e il programma mostra il messaggio corrispondente all’erogazione usando una struttura `switch`. Se la scelta non è valida, viene mostrato un messaggio di errore.

**Obiettivi didattici:**
- Comprendere e applicare l’istruzione `switch-case`
- Gestione di input numerici da tastiera per selezione menu
- Utilizzo del blocco `default` per gestire casi imprevisti
- Introduzione alla logica a scelta multipla

Questo progetto riassume le conoscenze di base sull’interazione con l’utente e sulla gestione di condizioni multiple, rappresentando una struttura ricorrente nei programmi interattivi.
