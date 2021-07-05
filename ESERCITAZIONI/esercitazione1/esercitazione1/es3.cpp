/*
E’ noto che esiste una definizione matematica della radice quadrata che si basa sulla seguente sequenza
numerica: 𝑥1 = 1, 𝑥𝑛+1 =1/2(𝑥𝑛 +𝑎/𝑥𝑛) dove a è un numero reale positivo.
Si può dimostrare che: lim𝑖→∞ 𝑥𝑖 = √𝑎
Si scriva un programma in cui si calcola la radice quadrata di tre numeri memorizzati in un array.
Il ciclo di calcolo della radice può fermarsi quando la differenza in valore assoluto tra il valore effettivo della radice
(sqrt(a)) e xn+1 diventa inferiore ad un valore di soglia (es: 0.001). Utilizzare la funzione abs() per calcolare la
differenza in valore assoluto.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	float num[3] = { 35.0, 84.0, 144.0 };

	float xi, xi1;

	for (int i = 0; i < 3; ++i) {
		xi1 = 1.0;
		do {
			xi = xi1;
			xi1 = 0.5 * (xi + num[i] / xi);
		} while (abs(sqrt(num[i]) - xi1) > 0.001);
		cout << "Valore finale di radice di " << num[i] << " :" << xi1 << endl;
	}
	return 0;
}