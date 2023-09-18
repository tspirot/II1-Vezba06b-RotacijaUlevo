// Vezba06b.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Rotacija za 1 mesto ulevo
// 0 1 2 3 4 5 6 7 8 9 - niz
//   i               i - ideksi el. koji se pomeraju ulevo
// 1 2 3 4 5 6 7 8 9 0 - niz
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// Deklaracija niza
	int niz[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int i, temp, n = 10;
	temp = niz[0]; // cuvamo prvi element
	for (i = 1; i < n; i++) //	pomeramo sve elemente ulevo
	{
		niz[i - 1] = niz[i];//pomeramo elemente ulevo
	}
	niz[n-1] = temp; // poslednji element dobija vrednost prvog
	// Ispis niza
	for (i = 0; i < n; i++)
		printf("%d ", niz[i]);
}
