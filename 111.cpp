#include<stdio.h>
#include<math.h>

main()
{
	int a, b, c;
	printf("Nhap a, b, c: ");
	scanf("%d %d %d", &a, &b, &c);
	if(a > 10 || b > 10 || c > 10 || a < 0 || b < 0 || c < 0)
		printf("Nhap lai diem\n");
	else printf("Diem tbc = %d", (a + b + c) / 3);
}
