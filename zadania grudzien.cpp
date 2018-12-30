

// zadania grudzien.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "pch.h"
#include <iostream>
#include <string.h>
//2.1. bool IsSorted
bool IsSorted(int *tab, int s)
{
	for (int i = 0; i < s; i++)
	{

		if (tab[i] > tab[i+1])
		{

			return 0;
		}
	}
	return 1;
}

//2.2. void printBackwards
void printBackwards(int *tab, int s)
{
	int i;
	for (i = s - 1; i >= 0; i--)
	{
		printf("%d\n", tab[i]);
	}
}

//2.3 printDots
void printDots(int *tab, int s)
{ 
	int i, x;
	for (i = 0; i < s; i++)
	{
		for (x = 0; x < tab[i]; x++)
		{
			printf(".");
		}
		printf("\n");
	}
}

//2.4 int Sum										
int sum(int *tab, int s)
{
	int x, i;
	for (x = 0, i = 0; i < s; i++)
	{
		x = x + tab[i];
	}
	return x;
}

//3.1 int getLenght

int getLenght(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

//3.2 void Reverse 
void reverse(char *str) 
{
	//zadania działą bez tej linijki
}

//3.3 bool containsDigits
bool containsDigits(char *str)
{

	int i;
	for (i = 0; i < getLenght(str); i++)
	{
		if (isdigit(str[i]))
		{
			return 1;
		}
	}
	return 0;
}

//4.3 bool AreArraysldentical
	bool AreArreysIdentical(int *a1, int s1, int *a2, int s2)
	{
		int i;
		if (s1 != s2)
		{
			return 0;
		}
		for (i = 0; i < s1; i++)
		{
			if (a1[i] != a2[i])
			{
				return 0;
			}
		}
		return 1;
	}

	//4.4 char * reverseString
	
	char * reverseString(char*str)
	{
		int size = getLenght(str);
		int i = 0;
		char x;
		char *str2;
		str2 = (char*)malloc((size + 1) * sizeof(char));
		strcpy(str2, str); //Funkcja kopiuje łańcuch znaków 
		while (i < size / 2)
		{
			x = str2[i];
			str2[i] = str2[size - i - 1];
			str2[size - i - 1] = x;
			i++;
		}
		return str2;
	}



	int main()
	{
		setlocale(LC_ALL, "polish");// polskie znaki
		int z = 1;



		printf("Program czytany od poczatku od zadania 1.1\n");

		switch (z)
		{
			/*1.1. Utworzyć 5-cio elementową tablicę typu int. Pobrać od użytkownika 5 elementów i dodać je do tablicy. Następnie
			wyświetlić największą liczbę z tablicy (algorytm do samodzielnej implementacji). */
		case 1:

			printf("Zadanie 1.1\n\n");
			{

				int tab[5];
				int a, b, c, d, e, x1;
				printf("Podaj pięć elementów do tablicy:a,b,c,d,e\n");
				scanf("%d", &a);
				scanf("%d", &b);
				scanf("%d", &c);
				scanf("%d", &d);
				scanf("%d", &e);
				tab[0] = a;
				tab[1] = b;
				tab[2] = c;
				tab[3] = d;
				tab[4] = e;
				printf("Przeczytanie największego elementu tablicy\n");
				x1 = tab[0];
				if (tab[1] > x1) x1 = tab[1];
				if (tab[2] > x1) x1 = tab[2];
				if (tab[3] > x1) x1 = tab[3];
				if (tab[4] > x1) x1 = tab[4];
				printf("Najwieksza liczba w tablicy to %d\n", x1);


			}
			printf(" \n");

			/*1.2. Wyświetlić w pętli tablice z zadania 1.1 od początku i od końca (dwie pętle) */

		case 2:
			printf("Zadanie 1.2\n");
			{
				int tablica[5];
				int a1, b1, c1, d1, e1, x2;

				printf("Podaj pięć elementów do tablicy:a,b,c,d,e\n");
				scanf("%d", &a1);
				scanf("%d", &b1);
				scanf("%d", &c1);
				scanf("%d", &d1);
				scanf("%d", &e1);
				tablica[0] = a1;
				tablica[1] = b1;
				tablica[2] = c1;
				tablica[3] = d1;
				tablica[4] = e1;
				printf("Teraz wyswietli je od poczatu i od końca \n");

				printf("Tablica od początku: ");
				for (x2 = 0; x2 < 5; x2++)
				{
					printf("%d ", tablica[x2]);
				}
				printf("\nTablica od końca:    ");
				for (x2 = 4; x2 >= 0; x2--)
				{
					printf("%d ", tablica[x2]);
				}

			}










			printf(" \n");
			/*1.3 Napisać algorytm sprawdzający, czy tablica jest posortowana w kolejności niemalejącej*/
		case 3:
			printf(" \n");
			printf(" Zadanie 1.3\n");
			{
				int *tab;

				int n, i = 0, y = 0;
				printf("Podaj liczbę elementów tablicy:  ");
				scanf("%d", &n);
				tab = (int *)malloc(sizeof(int) * n);
				printf("Podaj ciąg cyfr w kolejności ROSNĄCEJ lub MALEJĄCEJ. Ciąg cyfr nie może być pomieszany.\n");
				printf("Program sprawdzi czy ciąg zapisany przez ciebie jest posortowany w kolejności niemalejącej.\n");
				for (i = 0; i < n; i++)// mam nadzieje,że dobrze zrozumiałem treść zadania 
				{
					printf("Podaj liczbe nr: %d:  ", i + 1);
					scanf("%d", &tab[i]);
				}
				for (i = 0; i < n; i++)
				{
					if (tab[i] < tab[i + 1])
					{
						y = 1;
					}
				}
				if (y == 1)
				{
					printf("Wartości w tablicy są posortowane w kolejności niemalejącej.");
				}
				else
				{

					printf("Wartości w tablicy NIE są posortowane w kolejności niemalejącej.");
				}
			}


			printf(" \n");
			/*2.1.Utworzyć osobną metodę bool IsSorted(int *, int) realizującą zadanie 1.3 (UWAGA - w języku C niedostępny jest
					typ bool z wartościami true i false, zamiast niego należy użyć int i wartości 1 i 0)*/
		case 4:
			printf(" \n");
			printf("Zadanie 2.1\n");
			{
				printf("Sprawdzenie metody bool isSorted na tablicy tab[5]={5,10,25,20,15}.\n");
				int tab[5];
				*tab = 5;
				*(tab + 1) = 10;
				tab[2] = 25;
				tab[3] = 20;
				tab[4] = 15;
				if (IsSorted(tab, 5))
				{
					printf("Wartości w tablicy są posortowane w kolejności niemalejącej.");
				}
				else
				{
					printf("Wartości w tablicy NIE są posortowane w kolejności niemalejącej.");
				}
			}
			printf(" \n");
			/*2.2. Utworzyć metodę void printBackwards(int *a, int s) służącą do wypisania tablicy OD KOŃCA*/
		case 5:
			printf(" \n");
			printf("Zadanie 2.2\n");
			{
				int tab[5];
				*tab = 5;
				*(tab + 1) = 10;
				tab[2] = 15;
				tab[3] = 20;
				tab[4] = 25;
				printBackwards(tab, 5);

			}

			printf(" \n");
			/*2.3 Utworzyć metodę printDots(int *a, int s) wyświetlającą w nowych liniach tyle kropek, ile znajduje się w danym
			elemencie tablicy. */
		case 6:
			printf("Zadania 2.3\n");
			{



				int tab[5];
				*tab = 5;
				*(tab + 1) = 10;
				tab[2] = 15;
				tab[3] = 20;
				tab[4] = 25;
				printDots(tab, 5);





			}

			printf(" \n");

			//2.4. Utworzyć metodę int Sum(int *a, int s) liczącą sumę elementów tablicy. 
		case 7:
			printf("Zadania 2.4\n");
			{

				int tab[5];
				*tab = 5;
				*(tab + 1) = 10;
				tab[2] = 15;
				tab[3] = 20;
				tab[4] = 25;


				printf("Metoda int sum dla liczb {5,10,15,20,25}");
				printf("Suma wszystkich elementów tablicy to:%d\n", sum(tab, 5));





			}

			printf(" \n");


			/*2.5.Zaimplementować algorytm sortowania bąbelkowego(w funkcji main(), nie ma potrzeby tworzenia dodatkowej
				funkcji).Algorytm powinien posortować dowolnie dużą tablicę w kolejności niemalejącej.*/

		case 8:
			printf("Zadania 2.5\n");
			{
				printf("Sortowanie bąbelkowe liczb podanych w tablicy: 25,16,19,76,31,2.\n");
				int tab[6] = { 25,16,19,76,31,2 }, pamiec, zamiana; //przypisanie liczb do tablicy 
				do
				{
					zamiana = 0;
					for (int i = 0; i < 5; i++)
					{
						if (tab[i] > tab[i + 1])
						{
							zamiana = zamiana + 1; //zmiana powieksza wartosc o 1
							pamiec = tab[i];//wartość tab[i] jest kopiowana do pamieci
							tab[i] = tab[i + 1];//tab[i] przyjmuje wartosc kolejnego większego elementu
							tab[i + 1] = pamiec;//kolejny element tablicy przejmuje wcześniejszą wartość poprzedniego elementu, gdyż jest on większy
						}
					}
				} while (zamiana != 0);//błąd
				printf("Posortowane liczby to:  ");
				for (int j = 0; j <= 5; j++)

				{

					printf("%d ", tab[j]);// posortowane liczby z tablicy
				}

			}

			printf(" \n");


			/*3.1. Napisać metodę int getLength(char *str) , w której WŁASNORECZNIE (nie wolno korzystać z metody strlen() )
			przeliczony zostanie rozmiar łańcucha(bez null - terminatora).Dla przykładu dla „Hello!" wynik powinien wynosić 6. */
		case 9:
			printf("\nZadania 3.1\n");

			{

				char str[] = "METODA getLength";
				printf("METODA getLength\n");
				printf("Łańcuch ma długość: %d", getLenght(str));


			}

			printf(" \n");



			/*3.2. Napisać metodę void Reverse (char *str) , która wypisze łańcuch znaków od końca (zakaz używania strlen,
		można uzyć metodę z zadania 3.1.)*/

		case 10:
			printf("\nZadania 3.2\n");
			printf("METODA void Reverse \n");
			{

				char str[] = "METODA void Reverse";
				int i = 0;
				for (i = getLenght(str) - 1; i >= 0; i--) 
				{
					printf("%c", str[i]);
				}
			}




			printf(" \n");



			/*3.3. Napisać metodę bool containsDigits(char * str), która zwróci informację, czy w danym stringu znajduje się
	jakakolwiek cyfra. Dla przykładu : „asdfgzxcv" -> false, „asdf5asdf" -> true */

		case 11:
			printf("\nZadania 3.3\n");

			{
				
				char str[256];
				printf("Podaj lancuch znakow (max 255 znakow) : \n");//od 0 do 255 znaków możliwych do wpisania
				scanf("%s", str);
				printf("!!!Sprawdzenie czy podany łancuch zawiera liczbę!!!\n");
				if (containsDigits(str))
				{
					printf("String zawiera liczby.\n");
				}
				else
				{
					printf("String nie zawiera liczb.\n");
				}




			}



				printf(" \n");
				// 3.4.Pobrać od użytkownika łańcuch znaków(dowolna metoda).Przekazać go do każdej z metod z 3. części zadań.


		case 12:
			printf("\nZadania 3.4\n");

			{
				char str[256];
				printf("Podaj lancuch znakow (max 255 znakow) : \n");//od 0 do 255 znaków możliwych do wpisania
				scanf("%s", str);
				printf("-----------------------------\n");
				printf("Metoda z zadania 3.1\n ");
				printf("Łańcuch ma długość: %d\n", getLenght(str));// metoda z zadania 3.1
				printf("-----------------------------\n");
				printf("Metoda z zadania 3.2\n ");
				printf("Przepisanie podanego łańcucha od końca:\n ");
				int i = 0;
				for (i = getLenght(str) - 1; i >= 0; i--)// metoda z zadania 3.2
				{
					printf("%c", str[i]);
				}
				printf(" \n");
				printf("-----------------------------\n");
				printf("Metoda z zadania 3.3\n ");
				if (containsDigits(str))
				{
					printf("String zawiera liczby.\n");// metoda z zadania 3.3
				}
				else
				{
					printf("String nie zawiera liczb.\n");
				}


			}




			printf(" \n");



			/* 4.1. Pobrać od użytkownika liczbę n. Zaalokować pamięć na n elementów int i pobrać je od użytkownika. Wykonać na
			niej metodę printBackwards z 2.2. */

		case 13:
			printf("\nZadania 4.1\n");

			{
				int * tab;
				int n, i;
				printf("Podaj liczbę elementów tablicy:  ");
				scanf("%d", &n);
				tab = (int *)malloc(sizeof(int) * n);
				for (i = 0; i < n; i++)
				{
					printf("Podaj liczbe nr: %d:  ", i + 1);
					scanf("%d", &tab[i]);//tablica stworzona przez użytkownika
				}

				printf(" \n");
				printf("Teraz program wyświetli je od końca:\n");
				printBackwards(tab, n);//metoda printBackwards
				free(tab);
			}




			printf(" \n");



			/* 4.2. Pobrać od użytkownika liczbę n. Zaalokować pamięć na n elementów int i pobrać je od użytkownika. Następnie
		zaalokować pamięć i utworzyć tablicę, w której będą tylko UJEMNE wartości z pierwszej tablicy. Na koniec zwolnić
		pamięć na obie tablice.  */

		case 14:
			printf("\nZadania 4.2\n");

			{
				int *tab;

				int n, i, m = 0, j = 0;
				printf("Proszę podać elementy tablicy w których conajmniej jeden będzie ujemny.\n");
				printf("Podaj liczbę elementów tablicy:  ");
				scanf("%d", &n);
				tab = (int *)malloc(sizeof(int) * n);
				for (i = 0; i < n; i++)
				{
					printf("Podaj liczbe nr: %d:  ", i + 1);
					scanf("%d", &tab[i]);//pierwsza tablica utworzona przez użytkownika
					if (tab[i] < 0)
					{
						m++;
					}

				}

				int *tab1;

				tab1 = (int *)malloc(sizeof(int) * m); //druga tablica na UJEMNE elementy z tablicy pierwszej
				for (i = 0, j = 0; i < n; i++)
				{
					if (tab[i] < 0)
					{

						tab1[j] = tab[i];
						j++;
					}
				}


				printf("Tablica z wartościami ujemnymi z pierwszej tablicy\n");
				printf("Liczby ujemne z pierwszej tablicy: ");//wartosci ujemne przekazane drugiej tablicy
				for (i = 0; i < m; i++)
				{
					printf("%d ", tab1[i]);
				}
				free(tab1);
				free(tab);








			}


			printf(" \n");




			/* 4.3. Napisać metodę bool AreArraysldentical(int * al, int sl, int * a2, int s2) zwracającą informację, czy dwie tablice
		podane jako parametr są identyczne, tj. czy mają taką samą długość i czy na każdym indeksie występuje taki sam
		element.  */

		case 15:
			printf("\nZadania 4.3\n");

			{
				int * tab1;
				int n, i;
				printf("Podaj liczbę elementów pierwszej tablicy:  ");
				scanf("%d", &n);
				tab1 = (int *)malloc(sizeof(int) * n);
				for (i = 0; i < n; i++)
				{
					printf("Podaj liczbe nr: %d:  ", i + 1);
					scanf("%d", &tab1[i]);//pierwsza tablica stworzona przez użytkownika
				}
				printf("----------------------------------------- \n");
				int * tab2;
				int m, j;
				printf("Podaj liczbę elementów drugiej tablicy:  ");
				scanf("%d", &m);
				tab2 = (int *)malloc(sizeof(int) * m);
				for (j = 0; j < m; j++)
				{
					printf("Podaj liczbe nr: %d:  ", j + 1);
					scanf("%d", &tab2[j]);//druga tablica stworzona przez użytkownika
				}


				if (AreArreysIdentical(tab1, n, tab2, m))//porównanie rozmiaru i elementów dwóch tablic podawanych przez uzytkownika
				{
					printf("---------------------- \n");
					printf("!!!Tablice są takie same!!!\n");


				}
				else
				{
					printf("---------------------- \n");
					printf("!!!Tablice są różne!!!\n");
				}
				free(tab1);
				free(tab2);

			}




			printf(" \n");



			/*4.4. Napisać metodę char * reverseString(char*s), która ZWRÓCI (a nie wypisze!) string, który jest odwróconym
	stringiem przekazanym jako pierwszy parametr. Funkcja zaalokuje pamięć na nowy łańcuch i go zwróci. (cały
	algorytm należy zaimplementować samodzielnie). Należy go następnie „przechwycić" w funkcji main, aby pamięć na
	koniec wyczyścić */

		case 16:
			printf("\nZadania 4.4\n");

			{
				char str[256];
				printf("Podaj dowolny łańcuch znaków (max 255 znakow) : \n");//od 0 do 255 znaków możliwych do wpisania
				scanf("%s", str);
				
			
				char * result = reverseString(str);
				printf("%s\n", result); // wypisanie od konca
					
				
				free(result); // zwracamy wynik z funkcji, który „przechwycił" main()
			}

		}
		printf("\n");
		printf("|||Koniec programu|||\n");
		printf("|||MATEUSZ PROC 12A|||\n");
		return 0;
	}
		