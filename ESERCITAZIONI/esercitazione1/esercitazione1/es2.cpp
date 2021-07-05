/*
Due colleghi intendono fissare una riunione, pertanto devono identificare dei giorni nei quali sono
entrambi liberi da impegni. A tale scopo, si realizzi un programma che permetta a ciascuno di
immettere i propri giorni di disponibilità da tastiera, e che identifichi tutti i giorni nei quali entrambi 
sono liberi. Il programma deve chiedere i giorni di disponibilità ad entrambi i colleghi in successione 
(ciascuna persona può inserire un numero arbitrario di giorni di disponibilità, utilizzare il valore 0 per indicare 
la fine della sequenza dei giorni in cui ciascuna persona è libera da impegni).
Si consideri che la riunione sia nel mese corrente, quindi non interessa acquisire mese e anno, ma solo i giorni. Si
memorizzi la disponibilità di ciascuna persona in un array di interi positivi di 31 elementi in cui il valore 1
rappresenta un giorno disponibile e un valore 0 rappresenta un giorno impegnato.
E’ necessario verificare che i giorni siano numeri interi compresi tra 1 e 31.
Il programma deve alla fine visualizzare tutti i giorni in cui entrambe le persone sono libere da impegni.
*/

#include <iostream>

using namespace std;

int main() {
	const int giorni = 31;
	int cal1[giorni], cal2[giorni],giorno;

	for (int i = 0; i < giorni; i++) {
		cal1[i] = 0;
		cal2[i] = 0;
	}

	do {
		cout << "Inserisci giorni disponibili (da 1 a 31) per collega n°1 ";
		cin >> giorno;
		if (giorno > 0 && giorno <= 31) {
			cal1[giorno - 1] = 1;
		}
	} while (giorno>0);

	do {
		cout << "Inserisci giorni disponibili (da 1 a 31) per collega n°2 ";
		cin >> giorno;
		if (giorno > 0 && giorno <= 31) {
			cal2[giorno - 1] = 1;
		}
	} while (giorno > 0);

	for (int i = 0; i < giorni; ++i) {
		if (cal1[i] == 1 && cal2[i] == 1) {
			cout << "giorni disponibili per entrambi " << i + 1<<endl;
		}
	}

	return 0;
}
