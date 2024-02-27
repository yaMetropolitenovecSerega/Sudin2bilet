#include <iostream>

int main()
{
	int x, y, result;
	printf("Vvedite 4islo x : ");
	scanf_s("%d", &x);

	y = (x * x) + 3;

	printf("Zna4enie virazhenia %d", y);

	result=y/2;

	printf("Zna4enie virazhenia ymenshinnoe v dva raza %d", result);
}
