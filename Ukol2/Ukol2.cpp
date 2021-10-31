#include <stdio.h>
#include <stdlib.h>
//Porovnání tří čísel
int main() {
	int a = 1;
	int b = 2;
	int c = 3;

	if ((a - b == 0) && (a - c == 0)) {
		printf("Cisla si jsou rovna");
		//Nejdříve musíme zjistit, jestli náhodou nejsou čísla rovna
	}
	else {
		if ((a > b) && (a > c)) {
			printf("Nejvetsi cislo je %d\n", a);
			//pak zjistíme jestli je číslo a větší než číslo b a zátoveň větší než číslo c
		}
		else {
			if ((b > a) && (b > c)) {
				printf("Nejvetsi cislo je %d\n", b);
				//uděláme to samé co s číslem a
			}
			else {
				if ((c > a) && (c > b)) {
					printf("Nejvetsi cislo je %d\n", c);
					//a to samé i s číslem c(není úplně nezbytné)
				}
				else {
					if (a == b && a > c) {
						printf("c je nejmensi; a ciala b a a jsou stejna");
						//pro jistotu ještě porovnáme jednotlivé dvojce čísel, protože se může stát že budou dvě čísla stejná a zároveň "největší"
					}
					else {
						if (b == c && b > a) {
							printf("a je nejmensi; a ciala b a c jsou stejna");
						}
						else {
							if (c == a && c > b) {
								printf("b je nejmensi; a ciala c a a jsou stejna");
							}
						}
					}
				}
			}
		}
	}
}
