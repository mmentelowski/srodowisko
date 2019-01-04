#include<time.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
	/***** LOSOWANIE TABLICY ******/
	srand( time( NULL ) );      // inicjalizacja generatora liczb pseudolosowych
	int tab[20];                // deklaracja tablicy
	for (int i=0; i<20; i++)    // dla kazdego elementu
		tab[i] = rand() % 20;   // 'wylosuj' liczbe z zakresu 0..19


	/***** Tutaj umieść rozwiązanie zadania ******/

    int t[21];
    t[0] = 0;
    for (int i=0; i<21; i++)
    {
     t[i+1] = t[i] +tab[i+1];


    }



	/***** WYŚWIETLENIE ZAWARTOŚCI TABLICY ******/
	printf("tab = [");
	for (int i=0; i<19; i++){
		printf("%d, ", tab[i]);
		}
	printf("%d]\n", tab[19]);

printf("t = [");
	for (int i=0; i<20; i++){
		printf("%d, ", t[i]);
		}
	printf("%d]\n", t[20]);
return 0;
}







