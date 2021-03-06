#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "pch.h"
#include <iostream>
#include <locale.h> 
//dodałem w ustawieniach _CRT_SECURE_NO_WARNINGS

//Funkcje z zadania 3.1-3.4
//newLine
void newLine() 
{
	printf("|\n");  //wstawiłem "|" by sprawdzic czy funkcja zadziałała i pojawiła sie podana liczba lini
	
}
//newLines
void newLines(int parametr){
	int wykładnik;
	for (wykładnik=0; parametr>wykładnik; wykładnik++)
	{
	printf("|\n");  //wstawiłem "|" by sprawdzic czy funkcja zadziałała i pojawiła sie podana liczba lini
	}
}
//WriteBiggerNumber
 int WriteBiggerNumber( int parametr1,  int parametr2) {
	if (parametr1 > parametr2)
	{
		return parametr1;//wiekszy parameter1
	}
	else if (parametr2 > parametr1) 
	{
		return parametr2;//wiekszy parametr2
	}
	else if (parametr1 == parametr2) 
	{
		return NULL ;//oba parametry mają te samą wartość, więc wyjdzie bląd
	}
}
 //Multiply
 int Multiply(int parametr3, int parametr4)
 {
	 return parametr3 * parametr4;
 }





int main(void) {




	setlocale(LC_ALL, "polish");// polskie znaki
	// 1.1. Zadeklarować zmienne typu int, float, char. Przypisać do nich wartość, wyświetlić je na ekran.
	printf("Zadanie 1.1\n\n");
	int a = 20;
	float b = 9.9000;
	char c = 'C';
	printf("%d %f %c\n", a, b, c);

	//1.2. Wyświetlić zmienną typu int na ekran. Należy użyć metody printf i konstrukcji %d
	printf("Zadanie 1.2\n\n");
	int d = 20;
	printf("%d\n", d);


	//1.3. Pobrać od użytkownika liczbę x. Wyświetlić kwadrat liczby x.
	printf("Zadanie 1.3\n\n");

	int x = 0;
	printf(" Podaj liczbę by wyświetlić jej kwadrat\n");
	scanf("%d", &x);
	printf("x=%d\n", x*x);


	/*1.4. Zapoznać się z instrukcjami warunkowymi (if, else if, else oraz switch). Pobrać od używkownika liczbę i wyświetlić informację, czy jest
ona: mniejsza, większa, czy równa 0.*/
	printf("Zadanie 1.4\n\n");
	int liczba;
	printf("Podaj liczbe: \n");
	scanf("%d", &liczba);

	if (liczba > 0)
		printf("Liczba %d jest wieksza od zera\n", liczba);
	else if (liczba == 0)
		printf("Liczba %d jest równa zero\n", liczba);
	else
		printf("Liczba %d jest mniejsza od zera\n", liczba);

	//1.5. Pobrać od użytkownika 3 liczby (x1, x2, x3). Wyświetlić informację, która z tych liczb jest największa.
	printf("Zadanie 1.4\n\n");
	printf("Zostaniesz poproszony o podanie 3 cyfr\n");
	int x1, x2, x3, m;
	printf("Podaj pierwsza liczbe: \n");
	scanf("%d", &x1);
	printf("Podaj drugą liczbę:  \n");
	scanf("%d", &x2);
	printf("Podaj trzecią liczbę:  \n");
	scanf("%d", &x3);
	m = x1;
	if (x2 > m) m = x2;
	if (x3 > m) m = x3;
	printf("Najwieksza liczba to %d\n", m);

	/*1.6. Napisać prosty kalkulator. Należy pobrać od użytkownika 2 liczby oraz operator (jeden z czterech: mnożenie, dzielenie, dodawanie,
odejmowanie). Wymagane jest utworzenie prostego menu użytkownika. Uwaga - należy pamiętać o ułamkach (1/3 powinno dać 0.33, a nie
0)*/
	printf("Zadanie 1.5\n\n");
	printf("Prosty kalkulator\n");

	printf("-------------------------------------------------------------\n\n");

	printf("Wpisz działanie podając cyfrę znak cyfrę: ");

	float z, n; //float bo wyświetla też liczby z przecinkiem

	char znak;

	float Suma, Roznica, Iloczyn, Iloraz;

	scanf("%f", &z);

	scanf("%c", &znak);

	scanf("%f", &n);

	if (znak == '+')
	{
		Suma = z + n;
		printf("Wynik dzialania: %f\n", Suma);
	}

	else if (znak == '-')
	{
		Roznica = z - n;
		printf("Wynik dzialania: %f\n", Roznica);
	}

	else if (znak == '*')
	{
		Iloczyn = z * n;
		printf("Wynik dzialania: %f\n", Iloczyn);
	}

	else if (znak == '/')
	{
		Iloraz = z / n;
		printf("Wynik dzialania: %f\n", Iloraz);
	}


	//2. Pętle
	/*2.1. Zapoznać się z pętlą while. Pętla ta służy do wielokrotnego wykonania fragmentu kodu przez NIEZNANĄ Z GÓRY ilość razy. Pętla
	wykonuje się zawsze, jeśli warunek jest prawdziwy(ewaluowany do true).Napisać pętlę, w któej użytkownik podaje liczbę x.Należy
	wyświetlić tę liczbę.Jeżeli użytkownik poda 0, należy zakończyć program.*/
	printf("Zadanie 2.1\n\n");
	printf("Podaj liczby, liczba 0 zeruje układ\n");
	int g = 1;
	while (g != 0)
	{
		printf("**Podaj liczbę***\n");
		scanf("%d", &g);
		printf("Twoja liczba to %d\n\n", g);
	}


	/*2.2. Przerobić kalkulator z zadania 1.6. Teraz po każdym działaniu program powinien spytać użytkownika, czy ten chce powtórzyć
wszystko od początku. Jeśli tak - restartujemy kalkulator i zaczynamy od nowa. Jeśli nie - kończymy program.*/

	printf("Zadanie 2.2\n\n");
	printf("|||Prosty kalkulator|||\n");
	int tak = 1;
	printf("-------------------------------------------------------------\n\n");
	while (tak != 0)
	{
		printf("Wpisz działanie podając cyfrę znak cyfrę: ");


		float r, t; //float bo wyświetla też liczby z przecinkiem

		char znak1;

		float Suma1, Roznica1, Iloczyn1, Iloraz1;

		scanf("%f", &r);

		scanf("%c", &znak);

		scanf("%f", &t);


		if (znak == '+')
		{
			Suma = r + t;
			printf("Wynik dzialania: %f\n", Suma);
			printf("Czy chcesz powtórzyć wszystko od początku\n");

			printf("**Tak=1/Nie=0?***\n");
			scanf("%d", &tak);
			printf("|||Wracasz na początek|||\n");
		}


		else if (znak == '-')
		{
			Roznica = r - t;
			printf("Wynik dzialania: %f\n", Roznica);
			printf("Czy chcesz powtórzyć wszystko od początku\n");


			printf("**Tak=1/Nie=0?***\n");
			scanf("%d", &tak);
			printf("|||Wracasz na początek||| \n");
		}

		else if (znak == '*')
		{
			Iloczyn = r * t;
			printf("Wynik dzialania: %f\n", Iloczyn);
			printf("Czy chcesz powtórzyć wszystko od początku\n");

			printf("**Tak=1/Nie=0?***\n");
			scanf("%d", &tak);
			printf("|||Wracasz na początek|||\n");
		}

		else if (znak == '/')
		{
			Iloraz = r / t;
			printf("Wynik dzialania: %f\n", Iloraz);
			printf("Czy chcesz powtórzyć wszystko od początku\n");

			printf("**Tak=1/Nie=0?***\n");
			scanf("%d", &tak);
			printf("|||Wracasz na początek|||\n");
		}

	}
	while (tak == 0)
	{
		printf("|||Zdecydowałeś sie wyłączyc kalkulator|||\n");
		break;
	}

	/*2.3. Pobrać od użytkownika liczbę x. Należy wyświetlić wszystkie kolejne potęgi liczby x. Zakończyć program, kiedy liczba przekroczy 100
	000.*/
	printf("Zadanie 2.3\n\n");



	long int h, p, i = 2;
	printf("Podaj liczbę do spotęgowania.\n");
	printf("Limit ustawiony jest do 100000\n");
	scanf("%d", &h);
	p = h;
	while (h < 100000)
	{
		h = h * p;

		printf("%d^%d=%d\n", p, i, h);
		i++;
		while (h >= 100000) {
			printf("!!!Próba przekroczenia limitu 100000!!!\n");
			printf("____|||Koniec liczenia|||____\n");
			break;
		}


	}

	/*2.4. Pobrać od użytkownika liczbę x. Jeśli liczba jest niedodatnia - należy zakończyć program. Następnie należy wyświetlać kolejno (w
	nowej linii) wszystkie liczby mniejsze od x, aż osiągnięte zostanie 0.*/
	printf("Zadanie 2.4\n\n");

	int liczba1;
	printf("Podaj liczbę a ja sprawdzę czy jest ona dodatnia \n");

	scanf("%d", &liczba1);
	while (liczba1 > 0)
	{
		printf("Liczba mniejsza to: ");
		liczba1 = liczba1 - 1;
		printf("%d\n", liczba1);
	}
	while (liczba1 < 0)
	{
		printf("Liczba jest mniejsza niż 0\n");
		break;
	}
	while (liczba1 == 0)
	{
		printf("Liczba równa jest 0\n");
		break;
	}
	/*2.5. Zapoznać się z instrukcjami continue; i break;. Pierwsza służy do zakończenia literacji i przejścia do następnej, a druga natychmiast
kończy pętlę. Przerobić program z zadania 1.4, aby wyświetlał tylko parzyste liczby (użyć if oraz continue). Jeśli liczba wynosi 40, należy
wyjść z pętli i zakończyć program.*/
	printf("Zadanie 2.5\n\n");
	printf("Sprawdzanie parzystości liczb, liczba 40 wyłącza program\n");
	int l;
	do {

		scanf("%d", &l);
		if (l == 40)break;
		if (l % 2 == 1)continue;
		printf("Twoja liczba %d jest parzysta\n", l);
	} while (true);

	/*2.6. Zapoznać się z pętlą for. Pętla służy do wykonania danego fragmentu kodu ZNANĄ Z GÓRY określoną ilość razy. Uwaga - każdą pętlę
	for można zastąpić pętlą while i wzajemnie. Zwyczajowo obowiazuje zasada, że jeśli ilość iteracji jest znana - używamy for, a jeśli nie jest
	znana (zależy od użytkownika lub jakiegoś stanu zewnętrznego) - używamy pętli while. Pętla for składa się z: ZMIENNEJ ITERACYJNEJ,
	czyli stanu początkowego pętli, np. int i = 0. Następnie WARUNKU ZAKOŃCZENIA PĘTLI, np. i<10. Następnie OPERACJI WYKONYWANEJ
	PO KAŻDEJ ITERACJI - zazwyczaj jest to zwiększenie iteratora o 1, czyli i = i + 1, bądź w skrócie i++. Napisać pętlę for, która wyświetli cyfry
	od 0 do 9.*/
	printf("Zadanie 2.6.1\n\n");
	int j = 0;
	printf("Wypisanie cyfr 0-9 za pomocą pętli while\n");
	while (j < 10)
	{
		printf("%d\n", j);
		j++;
	}

	printf("Zadanie 2.6.2\n\n");
	int r;
	printf("Wypisanie cyfr 0-9 za pomocą pętli for\n");
	for (r = 1; r < 10; ++r)
	{
		printf("%d\n", r);

	}

	/*2.7. Pobrać od użytkownika liczby o i u. Zakładamy, że u > o (zawsze, nie musimy tego sprawdzać). Za pomocą pętli for wypisać liczby
	między "o" a "u"(do przemyślenia - co jest stanem początkowym, a co warunkiem zakończenia pętli ? )*/
	printf("Zadanie 2.7\n\n");
	int o, u, q;
	printf("Wpisz liczby różniące sie o conajmniej 2, oddzielone spacją\n");
	scanf("%d %d", &o, &u);
	for (q = 1; o + q != u; q++)
	{
		printf("Liczba pomiędzy to: %d\n", o + q);

	}


	//2.8. Pobrać od użytkownika liczbę x. Za pomocą pętli for wypisać wszystkie liczby mniejsze od x, ale większe niż 0.
	printf("Zadanie 2.8\n\n");
	int e, f;
	printf("Podaj liczbe a ja wyświetle liczby mniejsze od niej ale większe od zera\n");
	scanf("%d", &e);
	for (f = 1; f < e; f++)
	{
		printf("Liczby mniejsze to: %d\n", f);
	}

	/*2.9. Pobrać od użytkownika liczbę x. Za pomocą pętli for wypisywać CO TRZECIĄ liczbę większą od x. Pętla powinna się zakończyć, jeśli
	liczba przekroczy 100. Uwaga - proszę nie używać operacji continue i break, a sterować tylko parametrami pętli.*/
	printf("Zadanie 2.9\n\n");
	int cyfra, wsp;
	printf("Podaj liczbę, a ja wyświetle każdą kolejną o trzy większą liczbę do 100\n");
	scanf("%d", &cyfra);
	for (wsp = cyfra +3 ; wsp < 100; wsp = wsp + 3 )
	{
	
		printf(" Liczby to:%d\n", wsp);
	}

//3.Funkcje
	//3.1.Napisać metodę void NewLine().Powinna ona wypisać na ekran pojedynczą pustą linię.Użyć tej metodę w main().
	printf("Zadanie 3.1\n\n");
	newLine();
		
/*3.2. Napisać metodę void NewLines(int count). Powinna ona wypisać tyle nowych linii, ile zostało podanych W PARAMETRZE count (należy
użyć pętli for). Użyć metodę w main()*/		
	printf("Zadanie 3.2\n\n");
	newLines(4);
	

/*3.3.Napisać metodę void WriteBiggerNumber(int x, int y).Metoda powinna pobrać 2 parametry i zwrócić większy z nich.Wykorzystać
		funckję w metodzie main().UWAGA - pobieranie liczb od użytkownika powinno odbyć się w funkcji main(), a NIE w WriteBiggerNumber!Do
		funkcji należy jedynie przesłać pobrane wcześniej parametry.*/
	printf("Zadanie 3.3\n");

	int parametr1, parametr2;
	printf("Podaj parametr1\n");
	scanf("%d", &parametr1);
	printf("Podaj parametr2\n");
	scanf("%d", &parametr2);
	printf("Parametr %d jest większy\n", WriteBiggerNumber(parametr1, parametr2));


/*3.4. Napisać metodę Multiply(int x, int y) . Metoda powinna ZWRÓCIĆ (słowo kluczowe return) iloczyn dwóch parametrów. Uwaga! Metoda
	NIE POWINNA wypisywać wyniku - powinien on być wyświetlony w funkcji main!*/
	printf("Zadanie 3.4\n\n");
	
	int parametr3, parametr4;
	printf("Podaj parametr1\n");
	scanf("%d", &parametr3);
	printf("Podaj parametr2\n");
	scanf("%d", &parametr4);
	printf("%d*%d=%d\n", parametr3, parametr4, Multiply(parametr3, parametr4));
		

	printf("|||Koniec programu|||\n");
	printf("|||MATEUSZ PROC 12A|||\n");
	return 0;
}

