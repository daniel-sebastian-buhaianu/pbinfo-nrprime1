#include <stdio.h>

char este_prim(unsigned short n)
{
	if (n == 2) return 1;

	if (n % 2 == 0) return 0;

	unsigned short d = 3;
	while (d*d <= n) {
		if (n % d == 0) return 0;

		d += 2;
	}

	return 1;
}
int main()
{
	unsigned short n, x;

	scanf("%hu", &n);

	printf("2");

	for (x = 3; x <= n; x += 2) {
		if (este_prim(x)) printf(" %hu", x);
	}

	return 0;
}

// scor 100
