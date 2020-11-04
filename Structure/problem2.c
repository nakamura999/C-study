#include <stdio.h>
#include <string.h>
  
#define STUDENT_NUM 5

typedef struct{
    char name[256];    //  学生の名前
    int id;        //  学生番号
    int sex;       //  性別(性別 0:男 1:女)
    int grade;     //  学年      //  年齢
}student_data;

void setData(student_data*,char*,int,int,int);
 
void main(){
    int i;

    student_data data[STUDENT_NUM];
    char name[STUDENT_NUM][256] = { "青木一","遠藤京子","加藤悟","佐々木八重子","田中徹" };
    int id[STUDENT_NUM] = { 1001,1002,1003,1004,1005 };
    int sex[STUDENT_NUM] = { 0,1,0,1,0 };
    int grade[STUDENT_NUM] = { 1,1,1,1,1 };

    for(i = 0; i < STUDENT_NUM; i++){
        setData(&data[i],name[i],id[i],sex[i],grade[i]);
    }

    //  学生のデータの表示
    for(i = 0; i < STUDENT_NUM; i++){
        printf("名前:%s\n",data[i].name);
        printf("性別:");
        if(data[i].sex == 0){
            printf("男\n");
        }else{
            printf("女\n");
        }
        printf("学生番号:%d\n",data[i].id);
        printf("学年:%d\n\n",data[i].grade);
    }
}

void setData(student_data* data,char* name,int id,int sex,int grade){
    strcpy(data -> name,name);
    data -> id = id;
    data -> sex = sex;
    data -> grade = grade;
}