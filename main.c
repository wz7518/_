#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
struct student {

	int num;
	char name[20];
	char sex;
	int age;
	float score;
	char addr[30];
};
int main() {

	struct student s = { 1001,"lele",'m',20,98.5,"shenzhen" };

	printf("%d,%s,%c,%d,%5.2f,%s\n", s.num, s.name, s.sex, s.age, s.score, s.addr);

	struct student sarr[3];
	int i;
	for (i = 0; 1 < 3; i++) {
		scanf("%d%s %c%d%f%s", &sarr[i].num, sarr[i].name, &sarr[i].sex,&sarr[i].age, & sarr[i].score, &sarr[i].addr);
	}




	return 0;
}