# 📘 Esercizi in C

Questa repository contiene esercizi di base svolti in linguaggio C. Ogni link porta direttamente al file sorgente all’interno della repository.


## 📂 **VARIABILI, OPERAZIONI, CICLI, CONDIZIONI**

​🟢 ​[Esercizio_01](./esercizio_01.c)  

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
​🟢​ [Esercizio_02](./esercizio_02.c)
   
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

​🟢​ [Esercizio_03](./esercizio_03.c) 

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

​🟢​ [Esercizio_04](./esercizio_04.c)  

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
   
​🟢 ​[Esercizio_05](./esercizio_05.c)  

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

​🟢​ [Esercizio_06](./esercizio_06.c)  

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

🟢​ [Esercizio_07](./esercizio_07.c)  

**Titolo:** Creazione della tabellina di un numero intero  
**Descrizione:**  
Questo programma chiede all’utente di inserire un numero intero minore o uguale a 100 e stampa la tabellina del numero da 0 a 10 usando un ciclo `for`. Se il numero inserito è maggiore di 100, viene mostrato un messaggio di errore.

**Obiettivi didattici:**
- Utilizzo del ciclo `for` per iterare un numero definito di volte
- Comprensione di operazioni aritmetiche e formattazione di output con `printf`
- Gestione semplice di input e condizioni di controllo
- Pratica con input da tastiera tramite `scanf`

Questo esercizio aiuta a consolidare la comprensione dei cicli e delle operazioni aritmetiche base in C.

##

🟢 [Esercizio_08](./progetto_bevande.c)  

**Titolo:** Selezione bevanda con `switch`  
**Descrizione:**  
In questo esercizio viene chiesto all'utente di selezionare una bevanda tra cinque opzioni disponibili. A seconda della scelta inserita (tramite numero da 1 a 5), il programma utilizza l'istruzione `switch` per determinare quale messaggio stampare. Ogni `case` rappresenta una bevanda diversa, e viene gestita anche una `default` per gestire input non validi.

**Obiettivi didattici:**

- Utilizzare l'istruzione `switch-case` per il controllo del flusso
- Gestire input numerico da parte dell’utente
- Imparare a fornire un'interfaccia testuale semplice e interattiva
- Gestire condizioni non previste tramite il `default`

Questo tipo di struttura è comunemente usato in menù, distributori virtuali o simulazioni di scelte multiple.

##

🟢 [Esercizio_09](./progetto_media.c)  

**Titolo:** Calcolo della media di 5 voti  
**Descrizione:**  
Questo semplice progetto richiede all'utente di inserire 5 voti (numeri in virgola mobile) tramite terminale. Dopo l'inserimento, il programma calcola e stampa la media aritmetica dei valori forniti.

**Obiettivi didattici:**

- Gestione dell’input utente con `scanf`
- Dichiarazione e utilizzo di variabili `float`
- Calcolo di una media aritmetica
- Utilizzo della `printf` per visualizzare i risultati con due cifre decimali

Il programma mostra un approccio diretto e chiaro al calcolo della media senza l'uso di array o cicli, rendendolo ideale per chi sta imparando le basi della programmazione in C.


## 📂 ARRAY E OPERAZIONI CON ESSI


🟢 [Array_01](./array_puntatore.c)  

**Titolo**: Somma degli elementi di un array tramite puntatori  
**Descrizione**:  
Questo esercizio mostra come sommare gli elementi di un array intero utilizzando puntatori. L’array è inizializzato con quattro valori, e il programma accede a ciascun elemento usando un puntatore, sommando progressivamente i valori e stampando il risultato finale.

**Obiettivi didattici**:

- Comprendere che un array è una sequenza contigua di indirizzi di memoria  
- Imparare ad accedere agli elementi di un array tramite puntatori  
- Praticare l’uso dell’operatore `*` (dereferenziazione) per accedere al valore puntato  
- Consolidare la logica di somma iterativa usando i puntatori in un ciclo

Questo esercizio è utile per introdurre il concetto fondamentale della relazione tra array e puntatori, e per iniziare a gestire la memoria in modo più consapevole nel linguaggio C.

##

🟢 [Array_02](./inverso_arr.c)

**Titolo**: Inversione di un array  
**Descrizione**:  
In questo esercizio, un array di interi già inizializzato viene invertito e i suoi valori vengono copiati in un secondo array. Entrambi gli array (originale e invertito) vengono stampati a schermo per confronto.

**Obiettivi didattici**:

- Comprendere l’accesso agli elementi di un array tramite indici
- Utilizzare un ciclo `for` per iterare sugli elementi in ordine inverso
- Copiare dati da un array a un altro con modifiche strutturali
- Stampare array a scopo di debug e verifica

Questo esercizio è utile per consolidare la logica di manipolazione di array e comprendere come accedere e modificare gli elementi tramite cicli.

##

🟢 [Array_03](./inverso_arr_punt.c)  

**Titolo**: Inversione di un array usando solo puntatori  
**Descrizione**:  
Questo esercizio mostra come invertire un array di interi utilizzando la sola aritmetica dei puntatori, senza accedere agli elementi tramite notazione con indici. Gli elementi dell'array originale vengono copiati in un secondo array in ordine inverso e stampati durante la copia.

**Obiettivi didattici**:

- Comprendere la relazione tra array e puntatori in C
- Applicare la logica di inversione su array usando solo la manipolazione degli indirizzi
- Utilizzare variabili per calcolare la dimensione di un array in modo dinamico
- Rafforzare il concetto di iterazione inversa

Questo esercizio è utile per approfondire l’uso dei puntatori in contesti pratici e migliorare la padronanza della gestione della memoria in C.

##

🟢 [Array_04](./max_min.c)  

**Titolo**: Trova il valore massimo e minimo in un array  
**Descrizione**:  
Questo esercizio scorre un array di numeri interi per determinare il valore massimo e il valore minimo contenuti al suo interno. I risultati vengono stampati a schermo.

**Obiettivi didattici**:

- Scorrere un array utilizzando un ciclo `for`
- Applicare strutture di controllo condizionali `if` per confronti
- Gestire variabili di appoggio per tracciare massimo e minimo
- Pratica con la stampa formattata e l’output dei risultati

Questo esercizio è utile per consolidare l'uso degli array e la logica comparativa, fondamentali per algoritmi di base.

##

🟢 [Array_05](./media_pos.c)  

**Titolo**: Calcolo della media dei numeri positivi in un array  
**Descrizione**:  
Questo esercizio permette all’utente di inserire un array di numeri reali e calcola la media dei soli numeri positivi. Se nessun numero positivo viene inserito, il programma segnala un errore.

**Obiettivi didattici**:

- Uso dell’input dinamico per definire la dimensione di un array
- Scansione dell’array con un ciclo `for`
- Applicazione di condizioni `if` per filtrare valori positivi
- Utilizzo di una variabile per accumulare la somma e calcolare la media
- Gestione degli errori (nessun valore positivo) in fase di calcolo

Questo esercizio aiuta a capire il filtraggio di dati in un array e l’elaborazione statistica di base (media).

##

🟢 [Array_06](./media_voti.c)  

**Titolo**: Calcolo della media dei voti inseriti da tastiera  
**Descrizione**:  
Questo programma richiede all’utente di inserire un numero definito di voti tramite tastiera. I voti vengono memorizzati in un array e successivamente viene calcolata e stampata la loro media.

**Obiettivi didattici**:

- Uso di array per memorizzare dati numerici
- Lettura di input da tastiera con `scanf`
- Applicazione di cicli `for` per inserimento e somma dei valori
- Calcolo della media e visualizzazione con due decimali (`%.2f`)
- Gestione dinamica della dimensione dell’array

Questo esercizio rafforza le competenze di base sull’uso di array, input da terminale e media aritmetica.

##

🟢 [Array_07](./pari_dispari.c) 

**Titolo:** Conteggio di numeri pari e dispari in un array  
**Descrizione:**  
Questo programma scorre un array di 10 numeri interi predefiniti e conta quanti di essi sono pari e quanti sono dispari, stampando infine i risultati.

**Obiettivi didattici:**

- Uso dell’operatore modulo `%` per determinare la parità di un numero
- Utilizzo di cicli `for` per visitare gli elementi di un array
- Dichiarazione e uso di variabili contatore
- Stampa formattata dei risultati con `printf`

Questo esercizio è utile per imparare a manipolare array e a usare le strutture di controllo per analizzare dati numerici.

##

🟢 [Array_08](./zero_fondo.c)  

**Titolo:** Spostamento degli zeri in fondo all'array  
**Descrizione:**  
Questo esercizio dimostra come spostare tutti gli zeri presenti in un array di interi verso la fine, preservando l'ordine degli altri elementi. L'operazione viene eseguita in-place, sovrascrivendo gli elementi non-zero a partire dall'inizio e riempiendo il resto dell'array con zeri.

**Obiettivi didattici:**

- Comprendere l'uso di array e degli indici per modificare i dati in-place
- Applicare tecniche di filtraggio (elementi diversi da zero)
- Rafforzare il concetto di efficienza nello spostamento e nella riorganizzazione dei dati
- Evitare l'uso di strutture dati aggiuntive (soluzione con spazio costante)

Il programma stampa l'array prima e dopo l'elaborazione per evidenziare il cambiamento.

##

🟢 [Array_09](./ricerca_in_array.c) 

**Titolo:** Ricerca di un elemento in un array  
**Descrizione:**  
Questo programma richiede all'utente di inserire un numero e verifica se esso è presente all'interno di un array predefinito. La ricerca si interrompe non appena viene trovato il primo valore corrispondente, migliorando l'efficienza. Se il numero non è presente, viene restituito un messaggio di errore.

**Obiettivi didattici:**

- Eseguire la ricerca di un elemento in un array
- Usare il costrutto `for` per iterare su una struttura dati
- Applicare una condizione di uscita anticipata (`break`)
- Gestire l'input dell'utente e produrre un output condizionato

Questo esercizio aiuta a comprendere i concetti di ricerca lineare e controllo del flusso in C.

## 📂 PUNTATORI E OPERAZIONI CON ESSI

🟢 [Puntatori_01](./cambio_valori.c)  

**Titolo**: Scambio di valori tramite puntatori  
**Descrizione**:  
Questo esercizio mostra come scambiare i valori di due variabili intere usando una funzione e i puntatori. Il programma definisce due interi, li inizializza, e poi li passa per riferimento a una funzione `converti` che effettua lo scambio tramite una variabile di supporto.

**Obiettivi didattici**:

- Comprendere il passaggio di variabili per riferimento tramite puntatori  
- Imparare a manipolare direttamente i valori in memoria  
- Implementare una funzione che modifica i valori delle variabili chiamanti  
- Consolidare l’uso di operatori `*` (dereferenziazione) e `&` (indirizzo)

Questo esercizio è un classico esempio di come si può interagire con la memoria per ottenere effetti diretti sulle variabili, utile per introdurre concetti come l’inversione e il passaggio per indirizzo nelle funzioni.

##

🟢 [Puntatori_02](./somma_punt_pos.c)  

**Titolo:** Somma di valori positivi con funzione e ciclo `do while`  
**Descrizione:**  
Questo esercizio implementa un programma che somma valori positivi inseriti dall'utente. La somma viene effettuata tramite una funzione dedicata `sum`, alla quale vengono passati il valore corrente e un puntatore alla variabile somma. L'inserimento dei dati avviene all'interno di un ciclo `do while`, che continua fino a quando l'utente inserisce `0`. I numeri negativi vengono ignorati e segnalati con un messaggio.

**Obiettivi didattici:**

- Comprendere l'utilizzo dei puntatori per modificare variabili all'interno di una funzione
- Applicare il ciclo `do while` per acquisire input ripetuto
- Separare la logica in funzioni per migliorare la chiarezza e la riusabilità
- Gestire input condizionato (positivi, negativi, condizione di uscita)

L'esercizio sviluppa competenze fondamentali nella manipolazione della memoria, controllo del flusso e modularità del codice in C.

##

🟢 [Puntatori_03](./puntatore.c) 

**Titolo:** Incremento tramite funzione con puntatore  
**Descrizione:**  
Questo programma dimostra come passare un puntatore a una funzione in C per modificare direttamente il valore di una variabile. L'utente inserisce un valore iniziale e un valore da aggiungere. Il programma passa l'indirizzo della variabile alla funzione `increment`, che modifica direttamente il valore originale.

**Obiettivi didattici:**

- Uso dei puntatori per modificare variabili all'interno di funzioni
- Passaggio di parametri per riferimento
- Approccio base alla manipolazione della memoria in C
- Chiarezza sulla differenza tra passaggio per valore e per riferimento

Questo esercizio è utile per apprendere i fondamenti della gestione della memoria e l'uso dei puntatori in C.

## 📂 STRINGHE

🟢 [Stringhe_01](./compare.c)  

**Titolo**: Confronto tra due stringhe  
**Descrizione**:  
Questo esercizio richiede all’utente di inserire due nomi (stringhe) e utilizza la funzione `strcmp` per verificare se i nomi inseriti sono uguali o diversi. Il programma stampa il risultato del confronto.

**Obiettivi didattici**:

- Uso della funzione `fgets` per leggere stringhe da tastiera  
- Comprensione della funzione `strcmp` per confrontare stringhe in C  
- Introduzione alla gestione dell’input utente tramite array di caratteri  
- Rafforzare la comprensione della manipolazione di stringhe con la libreria `<string.h>`

È un esercizio fondamentale per iniziare a gestire e comparare stringhe in C, ponendo le basi per programmi più complessi come ordinamenti o ricerche testuali.

## 

🟢 [Stringhe_02](./concatena.c) 

**Titolo**: Concatenazione di due stringhe  
**Descrizione**:  
Questo esercizio mostra come unire due stringhe in C utilizzando la funzione `strcat`. Viene creata una nuova stringa che contiene la concatenazione della prima e della seconda stringa iniziali.

**Obiettivi didattici**:

- Comprendere l’uso della funzione `strlen` per calcolare la lunghezza delle stringhe  
- Apprendere come concatenare due stringhe usando `strcat`  
- Gestire correttamente array di caratteri come buffer per contenere stringhe combinate  
- Introdurre la nozione di gestione della memoria per operazioni su stringhe

Questo esercizio è utile per capire come manipolare stringhe e concatenare contenuti testuali in C.

##

🟢 [Stringhe_03](./conta_vocali.c)

**Titolo**: Conteggio delle vocali in una stringa  
**Descrizione**:  
Questo esercizio richiede all'utente di inserire una stringa e conta quante vocali (sia maiuscole che minuscole) sono presenti al suo interno. L'output finale mostra il numero totale di vocali rilevate.

**Obiettivi didattici**:

- Uso della funzione `fgets` per acquisire stringhe da input  
- Utilizzo della funzione `strlen` per determinare la lunghezza di una stringa  
- Scansione carattere per carattere di una stringa usando un ciclo `for`  
- Applicazione di strutture condizionali per confrontare caratteri  
- Comprendere il concetto di conteggio condizionale in un array di caratteri

Questo esercizio è utile per prendere dimestichezza con le stringhe e il controllo di ciascun carattere in C.

##

🟢 [Stringhe_04](./copia_string.c)  

**Titolo**: Copia di una stringa  
**Descrizione**:  
Questo esercizio richiede all'utente di inserire un nome, che viene poi copiato in un'altra variabile stringa. Successivamente, le due stringhe vengono confrontate per verificarne la corrispondenza.

**Obiettivi didattici**:

- Uso della funzione `fgets` per leggere stringhe da tastiera  
- Utilizzo di `strcpy` per copiare contenuti tra array di caratteri  
- Impiego di `strcmp` per confrontare stringhe  
- Comprendere il concetto di copia e confronto di dati testuali

È un esercizio utile per introdurre le principali funzioni della libreria `string.h` in C.

## 

🟢 [Stringhe_05](./leggi_stringa.c) 

**Titolo**: Saluto personalizzato con input dell’utente  
**Descrizione**:  
Questo esercizio chiede all’utente di inserire il proprio nome e successivamente lo saluta visualizzando il messaggio a schermo. Utilizza `fgets` per leggere la stringa e `puts` per stampare un messaggio predefinito.

**Obiettivi didattici**:

- Uso della funzione `fgets` per leggere stringhe da input standard
- Utilizzo di `puts` e `printf` per l’output a schermo
- Introduzione alla gestione base delle stringhe in C
- Prendere dimestichezza con la lettura e stampa di dati testuali

È un esercizio semplice ma importante per chi inizia, in quanto consolida i concetti di input/output con stringhe.

🟢 [Stringhe_06](./palindromo.c)  

**Titolo:** Verifica se una parola è palindroma  
**Descrizione:**  
Questo programma richiede all'utente di inserire una parola e ne verifica se è palindroma, ovvero se si legge uguale da sinistra a destra e da destra a sinistra. La parola viene invertita manualmente in un array separato, e poi confrontata con l'originale.

**Obiettivi didattici:**

- Utilizzo di array di caratteri (stringhe) in C
- Uso della funzione `strlen()` per determinare la lunghezza di una stringa
- Inversione manuale di una stringa tramite ciclo for
- Confronto tra stringhe con `strcmp()`
- Pratica nella gestione dell’input con `scanf` e dell’output con `printf`

Questo esercizio è utile per comprendere i fondamenti delle operazioni sulle stringhe e i concetti base di confronto e manipolazione.

## 📂 STRUCT E TYPEDEF

🟢 [Struct_01](./libreria.c)

**Titolo**: Registrazione di una libreria di libri con struct  
**Descrizione**:  
Questo esercizio utilizza una struttura `Libro` per memorizzare informazioni su una collezione di libri (titolo, autore e anno di pubblicazione). L’utente può inserire un numero di libri (massimo 100), e il programma ne registra i dati.

**Obiettivi didattici**:

- Comprendere l'uso delle **struct** in C per modellare dati complessi
- Pratica nella dichiarazione e gestione di array di strutture
- Utilizzo della funzione `scanf` per acquisire stringhe e numeri
- Validazione dell’input per evitare sovraccarico del sistema

Questo esercizio è utile per introdurre la gestione di collezioni strutturate di dati, un concetto chiave nella programmazione C più avanzata.

##

🟢 [Struct_02](./persona_struct.c)  

**Titolo:** Utilizzo di una struttura per rappresentare una persona  
**Descrizione:**  
Questo esercizio introduce l’uso delle strutture (`struct`) in C per rappresentare un’entità composta da più attributi. In questo caso, viene definita una struttura `Persona` contenente età, altezza e nome. Viene poi creata un'istanza della struttura, inizializzata e stampata a schermo.

**Obiettivi didattici:**

- Comprendere la definizione e l'utilizzo delle strutture in C
- Dichiarare e accedere ai campi di una `struct`
- Utilizzare `strcpy` per assegnare valori a stringhe all’interno di una struttura
- Consolidare le basi della programmazione strutturata

È un esercizio essenziale per imparare a modellare dati complessi tramite strutture personalizzate, concetto fondamentale nella programmazione in C.

##

🟢 [Struct_03](./persona_typedef.c)  

**Titolo:** Struttura `Persona` con sintassi semplificata (`typedef`)  
**Descrizione:**  
Questo esercizio migliora la leggibilità e l'usabilità del codice rispetto a una struttura tradizionale, utilizzando `typedef` per creare un alias del tipo `struct`. Viene definita la struttura `Persona` con i campi: `anni`, `genere`, `nome` e `cognome`. I valori sono assegnati direttamente e poi stampati a video.

**Obiettivi didattici:**

- Usare `typedef` per semplificare la dichiarazione di strutture
- Accedere e manipolare campi all’interno di una struttura
- Utilizzare `strcpy` per lavorare con stringhe nei campi della `struct`
- Sviluppare codice più leggibile e manutenibile

Questa versione "sugar syntax" rende l'uso delle strutture più pulito ed è molto usata in programmi reali per definire tipi personalizzati.


# 📚​ Progetti extra

🟣​ [Progetto_media](./progetto_media.c)

**Titolo:** Calcolo della media di cinque voti  
**Descrizione:**  
Questo progetto chiede all’utente di inserire cinque voti (numeri reali) tramite tastiera e ne calcola la media aritmetica. Il risultato viene visualizzato con due cifre decimali.

**Obiettivi didattici:**
- Utilizzo del tipo `float` per gestire numeri con la virgola
- Calcolo della media aritmetica con somma e divisione
- Formattazione dell’output con precisione decimale (`%.2f`)
- Pratica con input multipli e strutturazione semplice del codice

Questo esercizio conclude il capitolo introducendo l'uso dei numeri reali e il concetto di aggregazione di dati tramite media.


🟣​ [Progetto_bevande](./progetto_bevande.c)

**Titolo:** Distributore automatico di bevande con `switch`  
**Descrizione:**  
Questo progetto simula un semplice distributore automatico. L’utente può scegliere una tra cinque bevande proposte, e il programma mostra il messaggio corrispondente all’erogazione usando una struttura `switch`. Se la scelta non è valida, viene mostrato un messaggio di errore.

**Obiettivi didattici:**
- Comprendere e applicare l’istruzione `switch-case`
- Gestione di input numerici da tastiera per selezione menu
- Utilizzo del blocco `default` per gestire casi imprevisti
- Introduzione alla logica a scelta multipla

Questo progetto riassume le conoscenze di base sull’interazione con l’utente e sulla gestione di condizioni multiple, rappresentando una struttura ricorrente nei programmi interattivi.
