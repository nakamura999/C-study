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
int sum(student_data* student_data);
 
void main(){
    int i;

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

    printf("番号  国語  数学  理科  社会  英語  合計\n");
    //  学生のデータの表示
    for(i = 0; i < 5; i++){
        printf("%d    %d    %d    %d    %d    %d    %d\n", data[i].id, data[i].kokugo, data[i].sansu, data[i].rika, data[i].shakai, data[i].rika, sum(&data[i]));
    }
}

void setData(student_data* data,int id,int kokugo,int sansu,int rika,int shakai,int eigo){
    data -> id = id;
    data -> kokugo = kokugo;
    data -> sansu = sansu;
    data -> rika = rika;
    data -> shakai = shakai;
    data -> eigo = eigo;
}

int sum(student_data* data) {
    return data->kokugo + data->sansu + data->rika + data->shakai + data->eigo;
}