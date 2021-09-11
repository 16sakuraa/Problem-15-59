#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

// 15. เขียนโปรแกรมเพื่อรับค่าจำนวนเต็มมา 1 จำนวน (ผู้ตรวจจะใส่ค่าตั้งแต่ 100 – 999) แล้วทำการแยกตัวเลขแต่ละหลักออกมาแล้วหาผลคูณของตัวเลขทุกหลัก ให้ทําซ้ำเช่นนี้ไปเรื่อย ๆ
// จนเหลือผลลัพธ์เป็นเลขหลักเดียว ดังตัวอย่างการทำงานของโปรแกรม (Level 2)

/*void threenumber(int num)
{
	int newnum[3], i = 2, temp;

	temp = num;
	while (num > 0)
	{
		newnum[i] = num % 10;
		num /= 10;
		i--;
	}

	if (temp < 100 && temp >= 10)
	{
		newnum[0] = 0;
		num = 0;
		printf("%d . %d . %d = %d\n", newnum[0], newnum[1], newnum[2], num);
	}
	else if (temp >= 100)
	{
		num = newnum[0] * newnum[1] * newnum[2];
		printf("%d . %d . %d = %d\n", newnum[0], newnum[1], newnum[2], num);
	}

	if (num >= 10)
	{
		threenumber(num);
	}

}


int main()
{
	int num;
	printf("Input Number : ");
	scanf("%d", &num);

	threenumber(num);

}

*/


