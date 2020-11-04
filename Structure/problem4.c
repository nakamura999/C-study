#include <stdio.h>
#include <string.h>

typedef struct{
    int id;         //  学生番号
    int kokugo;     //  国語の点数
    int sansu;      //  算数の点数
    int rika;               //      理科の点数
    int shakai;     //  社会の点数
    int eigo;       //  英語の点数
}student_data;

void setData(student_data*,int,int,int,int,int,int);
 
void main(){
    int i;
    double k_point = 0;
    double s_point = 0;
    double r_point = 0;
    double sh_point = 0;
    double e_point = 0;

    student_data data[5];
    int id[5] = { 1001,1002,1003,1004,1005 };
    int kokugo[5] = { 82,92,43,72,99 };
    int sansu[5] = { 43,83,32,73,72 };
    int rika[5] = { 53,88,53,71,82 };
    int shakai[5] = { 84,79,45,68,91 };
    int eigo[5] = { 45,99,66,59,94 };

    for(i = 0; i < 5; i++){
        setData(&data[i],id[i],kokugo[i],sansu[i],rika[i],shakai[i],eigo[i]);
    }

    //  学生のデータの表示
    for(i = 0; i < 5; i++){
        k_point += data[i].kokugo;
        s_point += data[i].sansu;
        r_point += data[i].rika;
        sh_point += data[i].shakai;
        e_point += data[i].eigo;
    }
    printf("国語の平均点 = %.2f\n",k_point / 5);
    printf("数学の平均点 = %.2f\n",s_point / 5);
    printf("理科の平均点 = %.2f\n",r_point / 5);
    printf("社会の平均点 = %.2f\n",sh_point / 5);
    printf("英語の平均点 = %.2f\n",e_point / 5);
}

void setData(student_data* data,int id,int kokugo,int sansu,int rika,int shakai,int eigo){
    data -> id = id;
    data -> kokugo = kokugo;
    data -> sansu = sansu;
    data -> rika = rika;
    data -> shakai = shakai;
    data -> eigo = eigo;
}