#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

// 15. เขียนโปรแกรมเพื่อรับค่าจำนวนเต็มมา 1 จำนวน (ผู้ตรวจจะใส่ค่าตั้งแต่ 100 – 999) แล้วทำการแยกตัวเลขแต่ละหลักออกมาแล้วหาผลคูณของตัวเลขทุกหลัก ให้ทําซ้ำเช่นนี้ไปเรื่อย ๆ
// จนเหลือผลลัพธ์เป็นเลขหลักเดียว ดังตัวอย่างการทำงานของโปรแกรม (Level 2)

int main()
{
	int a,b,c,sum;
	printf("Input Number : ");
	scanf("%d%d%d", &a,&b,&c);

	while ((a * b * c) > 0)
	{
		sum = (a * b * c);
		printf("%d . %d . %d = %d\n", a , b , c , sum);
		c = sum % 10;
		sum /= 10;
		b = sum % 10;
		sum /= 10;
		a = sum % 10;
	}

	

} 