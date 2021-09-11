
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>


// 59. จงเขียนโปรแกรมรับตัวอักษร 1 ชุด แล้วแสดงผลลัพธ์จากหลังมาหน้า (Level 3)



int main()
{
	char sen[100];
	int i;
	printf("Input : ");
	scanf("%s",&sen);
	printf("Output : ");
	int length = strlen(sen);



	for (i = length; i >= 0; i--)
	{
		printf("%c", sen[i]);
	}



}