#include <stdio.h>
#include <string.h>

typedef struct{
    int month;         //  月
    int point;     //  住居費
    int eat;      // 食費
    int fuku;      //  衣服
    int studing;       //  教養費
    int doc;     //  医療費
    int sonota;       //  その他
}kakei;

void setData(kakei*,int,int,int,int,int,int,int);
int sum(kakei* kakei);
 
void main(){
    int i;
    int d_max=0;
    int d_data;
    int e_max=0;
    int e_data;

    kakei data[6];
    int month[6] = { 1,2,3,4,5,6 };
    int point[6] = { 86000,86000,86000,86000,86000,86000 };
    int eat[6] = { 47000,43000,38600,39500,38600,37500 };
    int fuku[6] = { 3000,30000,5000,0,28000,3000 };
    int studing[6] = { 20000,15000,65000,12000,7000,5000 };
    int doc[6] = { 9500,0,500,0,5200,0 };
    int sonota[6] = { 66000,43000,76000,75000,63500,67000 };

    for(i = 0; i < 6; i++){
        setData(&data[i],month[i],point[i],eat[i],fuku[i],studing[i],doc[i],sonota[i]);
    }

    printf("各月の合計\n");
    printf("------------------\n");
    for(i = 0; i < 6; i++){
        if(d_max < data[i].point) {
            d_max = data[i].point;
            d_data = data[i].month;
        }
        if(e_max < data[i].eat) {
            e_max = data[i].eat;
            e_data = data[i].month;
        }
        printf("%d月 %d\n", data[i].month, sum(&data[i]));
    }
    printf("------------------\n");
    printf("医療費の最も多い月 : %d月\n", d_data);
    printf("食費の最も多い月と金額 : %d月、¥%d\n", e_data, e_max);
}

void setData(kakei* data,int month,int point,int eat,int fuku,int studing,int doc,int sonota){
    data -> month = month;
    data -> point = point;
    data -> eat = eat;
    data -> fuku = fuku;
    data -> studing = studing;
    data -> doc = doc;
    data -> sonota = sonota;
}

int sum(kakei* data) {
    return data->point + data->eat + data->fuku + data->studing + data->doc + data->sonota;
}