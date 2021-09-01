#include<stdio.h>
#include<windows.h>
void butterfly2(int a);
int a;
void gotoxy(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
int main() {
	
	scanf_s("%d",&a);
	butterfly2(a);


	return 0;
}

void butterfly2(int a) {
	for (size_t i = 1; i <= 2 * a + 1; i++)
	{
		if (i == a)
		{
			for (int mid = 0; mid < 2 * a - 1; mid++)
			{
				printf("*");
			}
		}
		else if (i < a)
		{
			for (int fstar = 0; fstar < i; fstar++)
			{
				printf("*");
			}
			gotoxy(2*a -i-1, i);
			for (int lstar = 0; lstar < i; lstar++)
			{
				printf("*");
			}
		}

		if (i > a && i < 2 * a)
		{
			for (int Afstar = 1; Afstar <= 2 * a - i; Afstar++)
			{
				printf("*");
			}
			gotoxy(i-1, i);
			for (int Alstar = 1; Alstar <= 2 * a - i; Alstar++)
			{
				printf("*");
			}
		}
		printf("\n");
	}
}