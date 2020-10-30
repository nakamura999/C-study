#ifndef _LOGIC_H_
#define _LOGIC_H_

//  コンピュータの手
int player = 0;
//  プレイヤーの手
int computer = 0;
extern char results;

//  乱数の初期化
void init();
//  プレイヤーの手値設定
void setPlayer(int);
//  コンピュータの手設定
void setComputer();
//  判定

#endif // _LOGIC_H_