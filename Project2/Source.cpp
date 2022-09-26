#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(int argc, char ** argv)
{
	int A, B, result = 0, i;

	printf("Rentrez la valeurs de a \n");
	scanf("%d", &A);

	printf("Rentrez maintenant la valeur de B\n");

	scanf("%d", &B);

	for (i = 0; i < A; i++)
	{
		result += B;
	}

	printf("Le resultat de votre produit est %d x %d = %d\n", A, B, result);

	return 0;
}