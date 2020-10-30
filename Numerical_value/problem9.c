#include<stdio.h>
#include<stdint.h>

int main(void){
	int input = 0, num = 0;
	int result = 0;
	uint8_t n, i = 0x80;
    // nを8ビットであることが保証された符号なし整数のuint8_t型
	
	printf("Input Number(0-255):");
	scanf("%d",&input);
	n = input;

	do{
		result = n & i;
        // & 論理積（AND演算）。二つの数値の論理積をとる。
		if(result == 0){
			num = 0;
		}
		else{
			num = 1;
		}
		printf("%d",num);
		n <<= 1;
	} while(n); // nが0でなければ、(2)に戻る
	putchar('\n'); // nが0ならば、改行し、終了
	return 0;
}