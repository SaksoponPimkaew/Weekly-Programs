# include <stdio.h>
# include <stdlib.h>

void MaxNumber() {
	int a, b, c, d, max;
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	if (a >= b && a >= c && a >= d)
	{
		max = a;
	}
	else if (b >= a && b >= c && b >= d)
	{
		max = b;
	}
	else if (c >= a && c >= b, c >= d)
	{
		max = c;
	}
	else max = d;
	printf("Max number is %d\n", max);
}
int main() {
	MaxNumber();
	system("pause");
}
