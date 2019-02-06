// zadania styczeń.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "pch.h"
#include <iostream>
#include <locale.h>

//struktura student
struct Student
{
	int Age;
	int Height;
	int Semester;
};

// student create
Student* StudentCreate(int age, int height, int semester)
{
	Student * student = (Student*)malloc(sizeof(Student));
	student->Age = age;
	student->Height = height;
	student->Semester = semester;
	return student;
}

// print student
void PrintStudent(Student *s)
{
	printf("Age = %d \nHeight = %d\nSemester = %d", s->Age, s->Height, s->Semester);
}

//are equal
bool AreEqual(Student *s1, Student *s2)
{
	if (s1->Age == s2->Age && s1->Height == s2->Height && s1->Semester == s2->Semester)
	{
		return true;
	}
	return false;
}

//---------------------------------------------------------------------------------------
//lista jednokierunkowa

//struktura Node
struct Node
{
	int Value;
	Node * Next;
};
//Node Create
Node * Create(int value)
{
	Node *pole = (Node*)malloc(sizeof(Node));
	
		pole->Value = value;
		pole->Next = pole;
		return pole;
		//tworzymy liste jednoelementową
}

//Node GetTail
Node* GetTail(Node* root)
{
	Node *tail = root;
	while (tail->Next != root)
	{
		tail = tail ->Next;
	}
	return tail;
	//ustalamy wartosc ostatniego elementu 
}

//Add Node
void Add(Node* root, int value)
{
	Node * tail = GetTail(root);
	Node* newNODE = (Node*)malloc(sizeof(Node));
	tail->Next = newNODE;
	newNODE->Next = root;
	newNODE->Value = value;
	//dodajemy wezel do listy
}

//PrintList
void PrintList(Node* root)
{
	Node * crt = root;
	Node * tail = GetTail(root);
	do
	{
		printf("%d->",crt->Value);
		crt =crt->Next;
	} while (crt != root);
	 printf("\n");
	
		
	
	//crt-current- ang. obecny
	//wypisanie listy
}


//Remove Node
void RemoveNode(Node * root, int value)
{
	Node * crt = root;
	if (crt->Value == value)
	{
			Node*tail = GetTail(root);
			tail->Next = crt->Next;
			Node * tmp = crt;
			crt = crt->Next = root;
			free(tmp);
	}
	while (crt->Next != root)
	{
		if (crt->Next->Value == value)
		{
			Node * tmp = crt->Next;
			crt->Next = tmp->Next;
			free(tmp);
		}
		crt = crt->Next;
		//usuwamy wezel o wartosci podanej jako parametr
	}
}

	
	

//Free List
void FreeList(Node * root)
{
	Node *crt = root->Next;
	while (crt->Next != root)
	{
		Node * tmp = crt;
		crt = crt->Next;
		free(tmp);
	}
	free(root);
	//czyszczenie pamieci po liscie
}

//Count Node
int Count(Node *root)
{
	Node * countNODE= root;
	int count = 1;
	while (countNODE->Next != root)
	{
		countNODE = countNODE->Next;
		count++;
	}
	return count;
	// zwracamy rozmiar listy
}







//MAIN
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


int main()
{

	setlocale(LC_ALL, "polish");// polskie znaki
	int z = 1;



	printf("Program czytany od poczatku (od zadania 1.1) do końca (do zadanie 3.3). \n");

	switch (z)
	{

		/*1.1 Utworzyć strukturę Student taką jak powyżej.Napisać metody :
		Student * Create(int age, int height, int semester) // alokuje pamięć i tworzy studenta o podanych parametrach.
			WAŻNE - pamięć należy potem zwolnić w main() !
			void PrintStudent(Student *s) // wypisuje wszystkich składowych struktury
			bool AreEqueal(Student* s1, Student* s2) // zwraca informację, czy składowe są takie same (Uwaga - w C int zamiast bool)*/
	case 1:
		printf("------------------------------------------------------------------------------------------------------------------------\n");
		printf("Zadanie 1.1 cz.1\n");
		{

			Student *s = StudentCreate(21, 178, 6);
			PrintStudent(s);
			free(s);

		}
	case 2:
	{ //dane pierwszego studenta sa odgornie podane, natomiast drugiego podaje uzytkownik w celu sprawdzenia działania fukncji "bool are egueal"

		printf("\n------------------------------------------------------------------------------------------------------------------------\n");
		int a2, h2, se2, a1, h1, se1, i;
		printf("Zadanie 1.1 cz.2\n");
		printf("Proszę podac dane pierwszego studenta(kolejno-> age, heiht, semestr)\n");
		scanf("%d %d %d", &a1, &h1, &se1);
		Student *s1 = StudentCreate(a1, h1, se1);

		printf("\nProszę podac dane drugiego studenta(kolejno-> age, heiht, semestr)\n");
		scanf("%d %d %d", &a2, &h2, &se2);
		Student *s2 = StudentCreate(a2, h2, se2);

		bool result = AreEqual(s1, s2);
		printf("Czy tablice są identyczne? %s", result ? "true" : "false");


		free(s2);
		free(s1);



	}





	
		
	
		/*Utworzyć tablicę 3 studentów.Zapełnić ją wartościami, wyświetlić, zwolnić pamięć.Tablica powinna być utworzona za pomocą metody malloc(proszę pilnować odpowiedniej ilości gwiazdek!)*/
	case 3:
		printf("\n------------------------------------------------------------------------------------------------------------------------\n");
		printf("Zadanie 1.2\n");
		{

			int tablica = 3;
			int i;
			
			Student* size_tab = (Student*)malloc(tablica * sizeof(Student));
			for (i = 0; i < tablica; i++)
			{
				printf( "Proszę wprowadzić dane studenta nr %d:( age/height/semestr)\n", i + 1);
				
				scanf("%d %d %d", &size_tab[i].Age, &size_tab[i].Height, &size_tab[i].Semester);
				
			}
			for (i = 0; i < tablica; i++)
			{
				printf("Student %d: Age = %d, Height = %d, Semester = %d\n", i + 1, size_tab[i].Age, size_tab[i].Height, size_tab[i].Semester);
			}
		}
		//Zaimplementować cykliczną listę jednokierunkową 
	case 4:
		printf("\n------------------------------------------------------------------------------------------------------------------------\n");
		printf("Zadanie 3.2\n");
		{
			Node * root = Create(2);
			PrintList(root); // 2
			
			Add(root, 4);
			Add(root, 8);
			Add(root, 16);
			PrintList(root); // 2 -> 4 -> 8 -> 16
			
			Add(root, 20);
			PrintList(root); // 2 4 8 16 20
			printf("Ostatni wezel ma wartosc %d\n", GetTail(root)->Value); // 20
			
			Add(root, 16);
			PrintList(root); // 2 -> 4 -> 8 -> 16 -> 20 -> 16
			printf("%d\n", Count(root)); // 6
			
			RemoveNode(root, 8);
			PrintList(root); // 2 -> 4 -> 16 -> 20 -> 16
			RemoveNode(root, 10); // element nieistniejący
			PrintList(root); // 2 -> 4 -> 16 -> 20 -> 16
			RemoveNode(root, 16); // usuń wszystkie węzły o wartości 16
			PrintList(root); // 2 -> 4 -> 20
			
			printf("%d\n", Count(root)); // 3
			
			FreeList(root); // zwolnienie pamięci na wszystkie węzły.
			//PrintList(root); -> wyrzuca błąd, wiec usunełem go by program mógł sprawnie przejść na następne zadannie
			
		
		}
		//Wczytywać od użytkownika lizcby, aż nie poda on 0. Wszystkie liczby zapisac do pliku numbers.txt
	case 5: 
		printf("\n------------------------------------------------------------------------------------------------------------------------\n");
		printf("Zadanie 3.1\n");
		{
			printf("Podaj liczby, w przypadku podania cyfry 0 program sie zakonczy.\n");
			int l=1;
			

			FILE *plik;

			plik = fopen("numbers.txt", "w");
			
			while (l !=0) 
			{
				scanf("%d", &l);
				
					if (l != 0)
					{
						fprintf(plik, "%d\n", l);
					}
			}		
				fclose(plik);
		
			
			
			
			
			


		}
		//Wczytać z numbers.txt liczby. Utworzyc listę jednokierunkową (z zadania 2) zawierającą te liczby. Wypisaćje na ekran.
	case 6:
		printf("\n------------------------------------------------------------------------------------------------------------------------\n");
		printf("Zadanie 3.2\n");
		{

			FILE *plik;

			plik = fopen("numbers.txt", "r");
			int l = 0;
			fscanf(plik, "%d ", &l);
			Node * root = Create(l);
			while (fscanf(plik, "%d ", &l) != EOF)
			{
				Add(root, l);
			}
			PrintList(root);
			fclose(plik);
			//lista kończy się "->" poniewaz kolejnym elementem jest 0 ktore zamyka listę wiec go nie ma 


}
		//Posortować (w dowolnu sposób) listę z zadania 3.2 (już po wczytaniu pliku). Zapisać posortowaną liczbę do pliku sorted.txt. Algorytm sortowania proszę zaimplementować samodzielnie.
	case 7:
		printf("\n------------------------------------------------------------------------------------------------------------------------\n");
		printf("Zadanie 3.3\n");
		{

			FILE *plik;
			plik = fopen("numbers.txt", "r");
			FILE *sorted;
			sorted = fopen("sorted.txt", "w");
			int tab[sizeof(plik)];
			int dane;
			int l;
			
			
			
			for (l=0;(fscanf(plik, "%d ", &dane)) != EOF; l++)
			{
				tab[l] = dane;
			}
			
			dane= tab[0];
			
		for (int i = 0; i < l; i++)
		{
			for (int j = 0; j < l - 1 - i; j++)
			{
				if (tab[j] > tab[j + 1])
				{
					int pamiec; // tworzymy pamiec	
					pamiec = tab[j];//wartość tab[i] jest kopiowana do pamieci
					tab[j] = tab[j + 1];//tab[i] przyjmuje wartosc kolejnego większego elementu
					tab[j + 1] = pamiec;//kolejny element tablicy przejmuje wcześniejszą wartość poprzedniego elementu, gdyż jest on większy

				}
			}
				
		}
			
			
		for (int i = 0; i < l; i++)
		{

				fprintf(sorted, "%d", tab[i]);
		}

		
		fclose(plik);
		fclose(sorted);
        }
	}
return 0;
}

