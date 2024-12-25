#include<stdio.h>
#include <stdlib.h>

typedef struct{
	char id[20];
	char name[50];
	int age[10];
}SV;

int main(){
	FILE *file;
	file=fopen("students.txt","w");
	SV *student;
	int line;
	printf("nhap so luong sinh vien: ");
	scanf("%d",&line);
    student = (SV *)malloc(line * sizeof(SV));
	getchar();
	for(int i=0;i<line;i++){
		printf("sinh vien thu [%d]: ",i+1);
		printf("ID: ");
		fgets(student[i].id,20,stdin);
		student[i].id[strcspn(student[i].id, "\n")] = 0;
		printf("name: ");
		fgets(student[i].name,50,stdin);
		student[i].name[strcspn(student[i].name, "\n")] = 0;
		printf("age: ");
		scanf("%d",&student[i].age);
		getchar();
	}
	for(int i=0;i<line;i++){
		fprintf("[ID: %s] [name: %s] [age: %d].\n",student[i].id,student[i].name,student[i].age);
	}
	fclose(file);
    free(student);
	return 0;
}

