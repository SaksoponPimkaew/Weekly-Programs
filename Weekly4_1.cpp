#include<stdio.h>
int a;
void butterfly(int a);
int main() {
	scanf_s("%d", &a);
	butterfly(a);
	return 0;
}
void butterfly(int a) {
	for (size_t i = 1; i <= 2*a+1; i++)
	{
		if (i==a)
		{
			for (int mid = 0; mid < 2*a-1; mid++)
			{
				printf("*");
			}
		}
		else if (i<a)
		{
			for (int fstar = 0; fstar < i; fstar++)
			{
				printf("*");
			}
			for (int space = 0; space < 2*a-1-2*i; space++)
			{
				printf(" ");
			}
			for (int lstar = 0; lstar < i; lstar++)
			{
				printf("*");
			}
		}

		if (i >a && i< 2*a)
		{
			for (int Afstar = 1; Afstar <= 2*a-i; Afstar++)
			{
				printf("*");
			}
			for (int Aspace = 1; Aspace <= (i-a)+(i-a-1) ; Aspace++)
			{
				printf(" ");
			}
			for (int Alstar = 1; Alstar <= 2*a - i ; Alstar++)
			{
				printf("*");
			}
		}
		printf("\n");
	}
}