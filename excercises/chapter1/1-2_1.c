#include <stdio.h>

// 問題 1-2 (1): a と b の値の和を表示するプログラム
// 変数 a に 2021、変数 b に 1016 を代入し、その和を計算して出力する。

int main(void) {
    int a;      // a の値を定義
    int b;      // b の値を定義
    int sum;    // 和を定義

    // 変数の初期化
    a = 2021;   // a に 2021 を代入
    b = 1016;   // b に 1016 を代入

    // 計算
    sum = a + b;  // a と b の和を計算

    // 結果の出力
    printf("a + b = %d\n", sum);  // 和を表示

    return 0;
}