
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>
char password(char a);
void sum(int a, int b);
void showFig(int a, int b);
void f(int* p);
void g(int k);
void minmax(int a[], int len, int* min, int* max);
int myLen(const char* s);
int lenIs(const char* s);
int mycmp(const char* s1, const char* s2);
char mycpy(char* dst, const char* src);
enum animalType
{
	monky,elephent,fish,bird,humen
};
struct date
{
	int month;
	int day;
	int year;
};
struct fightNumber
{
	int speed;
	int atk;
	int def;

};
bool isLight(struct fightNumber s);
int speed(struct fightNumber s);
struct point
{
	int x;
	int y;
};
void getPoint(struct point s);
void outPoint(struct point s);

struct point getStruct(void);
void outTest(struct point s);
struct point getLocation(void);

void outputLocation(struct point o);
void printPointLocation(struct point p);
void outputPointLocation(const struct point* p);


struct point* getPointLocation(struct point* p);


//{
//	
//
//		printf("sum=%d\n", a + b);
//	
//}


//#include <stdlib.h>
//#include <time.h>
int main( int argc,char const *argv[])
{
	/*int aniType = -1;
	char  medicalSuggest[9] ="null" ;
	scanf_s("%d", &aniType);
	switch (aniType)
	{
	case monky: medicalSuggest = "1 ml";break;
	default:
		break;
	}*/
	//枚举 有错误 但不知道怎么改






	/*int hourFirst;
	int minFirst; int hour2; int  min2;int resultHour;int resultMin;
	printf("please input the two excatly time\n");
	scanf_s("%d %d", &hourFirst, &minFirst);

	scanf_s("%d %d", &hour2, &min2);
	resultHour = hour2 - hourFirst;
	resultMin = min2 - minFirst;
	printf("it's need %d hour %d min\n", resultHour, resultMin);*/




	/*int a ;
	printf("the a's value=");
	scanf_s("%d",&a);
	switch (a)
	{
	case 1:
		printf("yes\n");
		break;
	default:
		printf("not this answer\n");
		break;
	}*/
	/*int a = 0;
	printf("++a=%d\n",++a);
	printf("a=%d\n", a);
	printf("a++=%d\n", a++);
	printf("a=%d\n", a);*/

	/*int key;
	int n = 0;
	scanf_s("%d", &key);
	do {
		key /= 10;
		n++;
	} while (key > 0);
		printf("%d", n);*/

		/*srand(time(0));
		int a = rand()%100+1;
		int code = 0;

		printf("%d\n", a );

		printf("begin\n");*/
		/*do
		{
			scanf_s("%d", &key);
			code++;
			if (key>a)
			{
				printf("bigger\n");

			}
			else
			{
				printf("smaller\n");
			}


		} while (a!=key);*/
		/*int key = 0;

		while (a != key)
		{

			scanf_s("%d", &key);
			code++;
			if (key > a)
			{
				printf("bigger\n");

			};
			if(key<a)
			{
				printf("smaller\n");
			}


		};
		printf("%d time you use\n",code);*/


		/*int num=0;
		int count=0;

		int sum=0;
		scanf_s("%d", &num);
		while (num != -1)
		{

			sum += num;
			count++;
			scanf_s("%d", &num);


		}

		double avg = sum;
		avg /= count;

		printf("%f", avg);*/



		/*int sum = 0;
		int count = 0;
		int number;

		scanf_s("%d", &number);
		while (number != -1) {
			sum += number;
			count++;
			scanf_s("%d", &number);
		}

		double dsum = sum;
		printf("The average is %f.\n", dsum / count);*/

		//int key;
		//scanf_s("%d", &key);
		//for (size_t i = 1; i < key; i++)
		//{
		//	printf("The %d line output\n",i);
		//}









		/*for (size_t i = 1; i <= num; i++)
			{
				fact *= i;
			}*/
			/*printf("%d", fact);*/
			//this is one different way about factory




			/*int num;
			long fact = 1;
			scanf_s("%d", &num);
			if (num>=0)
			{
				for (size_t i = 1; i <= num; num--)
				{
					fact *= num;
				}
				printf("%d", fact);
			}


			else
			{
				printf("not support negative number's comput");
			}*/



			/*int num;
			int keyOne = 0;
			int keyTwo = 0;
			scanf_s("%d", &num);
			for (size_t i = 0; i < num; i++)
			{
				for (keyOne = 0; keyOne < i; keyOne++)
				{
					for (keyTwo = 0; keyTwo < keyOne; keyTwo++)
					{
						if (num>0)
						{

						}
						else
						{
							printf("please input one correct number");
						}
					}
				}

			}*/
			//one stupid program  Don't care





			//one gyn shooting game's hunt value computer


			//double ff = -2563.33698;
			//printf("%e\n,%E\n,%f\n,%.16f\n", ff, ff,ff,ff);


			//float a, b, c;
			//a = 1.333f;
			//b = 1.330f;
			//c = 2.663f;
			//if ((fabs(a+b)-2.663)<(1e-4))
			//{
			//	printf("equale\n");
			//	printf("a=%.16f,b=%.16f,c=%.16f", a, b, c);
			//}
			//else
			//{
			//	printf("not equale\n");
			//	
			//	printf("a=%.16f,b=%.16f,c=%.16f", a, b, c);
			//}



			//int a, b;
			//
			//scanf_s("%d %d", &a, &b);
			//sum(a, b);
			//定义函数


			//数组
			//int number[100];
			//int x;
			//int cnt = 0;
			//double theSum=0;
			//char end = 'i';
			//scanf_s("%d", &x);
			//while (x != -1)
			//{
			//	number[cnt] = x;
			//	cnt++;
			//	theSum += x;
			//	
			//	scanf_s("%d", &x);
			//	
			//}
			//if (cnt>0)
			//{
			//	printf("the avg=%f\n", theSum / cnt);
			//	int i;
			//	double avg = theSum / cnt;
			//	for (size_t i = 0; i < cnt; i++)
			//	{
			//		if (number[i]>avg)
			//		{
			//			printf("%d\n", number[i]);
			//		}
			//	}
			//
			//}

			//const int number = 10;
			//int x;
			//int count[number];
			//int i;
			//
			//for (size_t i = 0; i < number; i++)
			//{
			//	count[i] = 0;
			//
			//}
			//scanf_s("%d", &x);
			//while (x != -1)
			//{
			//	if (x>=0 && x<=9)
			//	{
			//		count[x]++;
			//
			//	}
			//	scanf_s("%d", &x);
			//}
			//
			//for (size_t i = 0; i < number; i++)
			//{
			//	printf("%d:%d\n", i, count[i]);
			//}
			//数组 遍历 初始化，循环输入，循环输出

			//password('a');

			//数组
			//int a[] = { 1,2,52,88,63,85,99 };
			//printf("%lu\n", sizeof(a));
			//printf("%lu\n", sizeof(a[0]));
			//int sumNum = 0, cnt = 0;
			//for (size_t i = 0; i < sizeof(a)/sizeof(a[0]); i++)
			//{
			//	printf("%d\t", a[i]);
			//	cnt++;
			//	sumNum += a[i];
			//}
			//printf("\n");
			//double avg = sumNum / cnt;
			//printf("avg=%f", avg);
			//



	/*const int maxNumber = 100;
	int isPrime[maxNumber];
	int i;
	int x;
	for (size_t i = 0; i < maxNumber; i++)
	{
		isPrime[i] = 1;
	}
	for (size_t x = 2; x < maxNumber; x++)
	{
		if (isPrime[x])
		{
			for (size_t i = 2; i * x < maxNumber; i++)
			{
				isPrime[i * x] = 0;
			}
		}
	}

	for (size_t i = 2; i < maxNumber; i++)
	{
		if (isPrime[i])
		{
			printf("%d\n", i);
		}
	}*/
	//计算maxNumber以内的素数




//这个是 打印二维数组的一段代码 输入对应行列，对应位置0变成1，然后输出图像
	//二维数组
//int a[][3] = {
//	{},
//	{0,1,2}
//};
//const int max = 3;
//int i, j;
//int gameJingzhiqi[max][max];
//for (size_t i = 0; i < max; i++)
//{
//	for (size_t j = 0; j < max; j++)
//	{
//		gameJingzhiqi[i][j] = 0;
//	}
//}
//int cnt = 0;
//
//for (size_t i = 0; i < max; i++)
//{
//	for (size_t j = 0; j < max; j++)
//	{
//		printf("%d\t", gameJingzhiqi[i][j]);
//		cnt++;
//		
//		if (cnt%3==0)
//		{
//			printf("\n");
//		}
//	}
//}
////scanf_s("%d %d", &i, &j);
////gameJingzhiqi[i][j] = 1;
//i = 0;
//j = 0;
//scanf_s("%d %d", &i, &j);
//printf("i=%d,j=%d\n", i, j);
//showFig(i,j);
//这个是 打印二维数组的一段代码 输入对应行列，对应位置0变成1，然后输出图像



//指针
//int i = 6;
//printf("&i=%p\n", &i);
//f(&i);
//g(i);

//int a[] = { 1,2,36,65,55,12,86,25 };
//int min, max;
//minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
//printf("min=%d max=%d", min, max);
//int* p = &min;
//printf("*p=%d\n", *p);
//printf("p[0]=%d\n", p[0]);
//；利用指针交换最大最小值

//char s[] = "Hello,asuka";
//s[0] = 'W';
//printf("s[0]=%c", s[0]);

//int i;
//
//for (size_t i = 0; i < argc; i++)
//{
//	printf("%d:%s\n", i, argv[i]);
//}

//char line[] = "hello";
//printf("strlen=%lu\n", strlen(line));
//printf("sizeof=%lu\n", sizeof(line));
//printf("strlen=%lu\n", myLen(line));
//printf("the word(%s)'s length is:%lu\n", line,lenIs(line));



//char s1[] = "abc";
//char s2[] = "abz ";
//printf("%d\n", strcmp(s1, s2));
//printf("%d\n", mycmp(s1, s2));

//char t1[6] = "wife";
//char t2[6] = "auska";
//
//
//strcpy_s(t1, t2);
//
//mycpy(t1, t2);
//printf("%s", t1);

//char t1[32] = "wife is ";
//char t2[32] = "auska";
//strcat_s(t1, t2);
//printf("%s", t1);



//struct date
//{
//	int month;
//	int day;
//	int year;
//};
//这个是main函数之前的东西，拿过来方便分析

//struct date today;
//today.month = 10;
//today.day = 04;
//today.year = 2022;
//printf("today's date is %i-%i-%i.\n",today.year,today.month,today.day);
//
//
////struct date thismouth = { thismouth.year=2020, thismouth.month=11, thismouth.day=25};
////不清楚为什么这里和devc不一样
//struct date thismouth = {10,05,2022 };
//printf("thismouth's date is %i-%i-%i.\n", thismouth.year, thismouth.month, thismouth.day);
//
//struct date importantDay;
//importantDay = today;
//importantDay.year = 2015;
//printf("importantDay's date is %i-%i-%i.\n", importantDay.year, importantDay.month, importantDay.day);
//struct date* pDate = &today;
//printf("date's address is %p\n", pDate);
//
//printf("date's value is %d\n", *pDate);
//
//
//
//
//
//
//struct fightNumber speedAdd;
//printf("the kind type of medice  wanna know your speed value\n");
//scanf_s("%i", &speedAdd.speed);
//speed(speedAdd);
//
//printf("the speed after you ate it will changed as %i", speed(speedAdd));
////这个是仙剑四里面关于“光速菱纱”的设定 （仙风云体）


//	struct point s = { 0,0 };
//printf("the point location that you wanna it located in:x-   y-\n");
////scanf_s("%d", &s.x);
////scanf_s("%d",&s.y);
////虽然不清楚为什么 但是在vs2019里面好像不能一次性scanf_s地输入两个值，第二个会被舍弃
//getPoint(s);
//outPoint(s);




//struct point test = { 0,0 };
//test = getStruct();
//outTest(test);

//struct point ballLocation;
//ballLocation = getLocation();
//outputLocation(ballLocation);
//
////printPointLocation(getPointLocation(&ballLocation));
//printPointLocation(*getPointLocation(&ballLocation));
////这个函数要的是一个值 所以在printPointLocation(*getPointLocation(&ballLocation));里面 *getPointLocation(&ballLocation)其实是一个指针返回值加*号，
//	//就是指针指向的值
//outputPointLocation(getPointLocation(&ballLocation));
////这个函数要的是一个指针，所以在outputPointLocation(getPointLocation(&ballLocation));里面 getPointLocation(&ballLocation)其实是一个指针返回值
//*getPointLocation(&ballLocation) = { 1,2 };
//printf("%d,%d", ballLocation.x, ballLocation.y);

	return 0;
}
//从这里开始不是main函数了












void printPointLocation(struct point p) {//这个函数要的是一个值 所以在printPointLocation(*getPointLocation(&ballLocation));里面 *getPointLocation(&ballLocation)其实是一个指针返回值加*号，
	//就是指针指向的值
	printf("x=%d,y=%d", p.x, p.y);
}

void outputPointLocation(const struct point *p){//这个函数要的是一个指针，所以在outputPointLocation(getPointLocation(&ballLocation));里面 getPointLocation(&ballLocation)其实是一个指针返回值
	printf("%d,%d", p->x, p->y);
}


struct point* getPointLocation(struct point *p) {
	//这个函数要的是一个指针
	printf("you can input the object's location (x-axis)\n");
	scanf_s("%d", &p->x);
	printf("you can input the object's location (y-axis)\n");
	
	
	scanf_s("%d", &p->y);
	printf("%d,%d", p->x, p->y);
	return p;
	//这个函数返回的是一个   指针 ！！！！
	

}
void sum(int a, int b) {


	printf("sum=%d\n", a + b);

}

char password(char a) {
	char psw[9];
	printf("please input your password\n");
	scanf_s("%s", &psw);
	return psw[8];
}
void showFig(int a,int b) {
	printf("a=%d b=%d\n", a, b);
	const int max = 3;
	int gameJingzhiqi[max][max] = { {},{} };
	int cnt = 0;
	int i, j;
	i = a;
	printf("a=%d b=%d\n", a, b);
	j = b;
	printf("a=%d b=%d\n", a, b);
	gameJingzhiqi[i-1][j-1] = 1;
	printf("gameJingzhiqi[i][j]=%d\n", gameJingzhiqi[i][j]);
	for (size_t i = 0; i < max; i++)
	{
		for (size_t j = 0; j < max; j++)
		{
			printf("%d\t", gameJingzhiqi[i][j]);
			cnt++;

			if (cnt % 3 == 0)
			{
				printf("\n");
			}
		}
	}
	int w = 0;
	scanf_s("%d", w);
}


void f(int* p) {
	printf("p=%p\n", p);
	printf("p=%d\n", *p);
	*p = 26;
}
void g(int k) {
	printf("k=%d\n", k);
}

void minmax(int a[], int len, int* min, int* max) {
	int i;
	a[0] = 1000;

	*max = *min = a[0];
	for (size_t i = 0; i < len; i++)
	{
		if (*max<a[i])
		{
			*max = a[i];
		}
	}
	for (size_t i = 0; i < len; i++)
	{
		if (*min > a[i])
		{
			*min = a[i];
		}
	}
}


int myLen(const char* s) {
	int cnt = 0;
	int idx = 0;
	while (s[idx] != '\0')
	{
		idx++;
		cnt++;
	}
	return cnt;
	}



int lenIs(const char* s) {
	int idx = 0, cnt = 0;
	while (s[idx] != '\0')
	{
		idx++;
		cnt++;
	}
	return cnt;
}


int mycmp(const char* s1, const char* s2) {
	int idx = 0,cnt = 0;
	while (*s1==*s2 && *s1!='\0')
	{
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

char mycpy(char* dst, const char* src) {
	char* ret = dst;
	while (*src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
	}
	return *ret;
}
bool isLight(struct fightNumber s){
	bool speed = false;
	if (s.speed>932)
	{
		speed = true;

	}
	return speed;
}

int speed(struct fightNumber s) {
	int speedNumber=20 ;
	speedNumber = s.speed;
	if (speedNumber >= 100&& isLight(s)==false)
	{
		speedNumber = s.speed * 1.5;
		
	}
	else
	{
		if (speedNumber <=100 && isLight(s) == false)
		{
			
			s.speed = 100;
			speedNumber = s.speed;
		}
		else
		{
			speedNumber = 1000;
		}
	}
	return speedNumber;
}


void getPoint(struct point s){
	scanf_s("%d", &s.x);
	scanf_s("%d", &s.y);
	int x = s.x;
	int y = s.y;
	printf("x=%d,y=%d\n",x,y);


}
void outPoint(struct point s){
	
	printf("x=%d,y=%d",s.x,s.y);
}
struct point getStruct(void) {
	struct point p;
	scanf_s("%d", &p.x);
	scanf_s("%d", &p.y);
	printf("x=%d,y=%d\n", p.x, p.y);
	return p;
}
void outTest(struct point s) {
	printf("%d,%d\n", s.x, s.y);
}

struct point getLocation(void) {
	struct point i;
	printf("you can input the object's location (x-axis)\n");
	scanf_s("%d", &i.x);
	printf("you can input the object's location (y-axis)\n");
	scanf_s("%d", &i.y);
	return i;
}

void outputLocation (struct point o){
	printf("x=%d,y=%d", o.x, o.y);
}



