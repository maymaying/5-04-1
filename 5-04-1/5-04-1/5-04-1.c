#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 
#include <windows.h>

/*
typedef struct stu{
	char name[100000];
	int age;
}stu_t;
void Show(stu_t *sp)
{
	printf("%p\n", &sp);
	//printf("%s, %d\n", (*sp).name, (*sp).age);
	//printf("%s, %d\n", sp->name, sp->age);
}
int main()
{
	stu_t s = { "Tom", 19 };
	printf("%p\n", &s);
	int i = 0;
	for (; i < 10; i++){
		Show(&s);
	}
	system("pause");
	return 0;
}
*/


/*
int main()
{
	int i = 0;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int *p = arr; //指针存放数组首元素的地址
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i<sz; i++)
	{
		printf("&arr[%d] = %p <====> p+%d = %p\n", i, &arr[i], i, p + i);
	}
	system("pause");
	return 0;
}
*/



/*
int main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int *p = a;
	int i = 0;
	for (; i < 10; i++){
		printf("%d\n", a[i]);
		printf("%d\n", *(p+i));
		printf("%d\n", p[i]);
		printf("&a[%d]->%p ====> p+%d->%p\n", i, &a[i], i, p + i);
	}
	system("pause");
	return 0;
}
*/



/*
int main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	printf("%p\n", a);
	printf("%p\n", &a[0]);//数组名表示的是数组首元素的地址
	system("pause");
	return 0;
}
*/



/*
int main()
{
	int a[10];
	printf("%p\n", a);//001DFBBC
	printf("%p\n", &a);//001DFBBC
	printf("%d\n", sizeof(a)); //40
	printf("%d\n", sizeof(a + 0)); //4
	printf("%d\n", sizeof(a + 1)); //4
	printf("%d\n", sizeof(&a));//4
	printf("%d\n", sizeof(&a + 1));//4
	system("pause");
	return 0;
}
*/



/*
int main()
{
	int a = 10;
	int *pi = &a;
	char *pc = (char *)&a;
	printf("&a = %p\n", &a);//&a=00CFF74C
	printf("pi = %p\n", pi);//pi=00CFF74C
	printf("pc = %p\n", pc);//pc=00CFF74C
	printf("pi+1 = %p\n", pi+1);//pi+1 = 00CFF750
	printf("pc+1 = %p\n", pc+1);//pc+1 = 00CFF74D
	system("pause");
	return 0;
}
*/



/*
int main()
{
	//double a[10];
	//char *p = (char *)&a[0];
	//char *q = (char *)&a[10];
	//printf("%d\n", q - p);//80   一个double占8个字节
	
	//int a[10];
	//int *p = &a[0];
	//int *q = &a[10];
	//printf("%d\n", q - p);//10  求字符串长度  两指针相减

    //double b[10];
	//double *p = &b[0];
	//double *q = &b[10];
	//printf("%d\n", q - p);//10

	system("pause");
	return 0;
}
*/
