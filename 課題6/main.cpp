#include "Calclation.h"

//プロトタイプ宣言
void SetX(float a, float b);
void SetY(float a, float b);

//グローバル変数
Calclation x, y;

//メイン関数
int main()
{
    {
        Calclation x;
        x.SetA(5.0);
        x.SetB(10.0);
        x.Disp();
    }

    {
        Calclation y;
        y.SetA(8.0);
        y.SetB(3.0);
        y.Disp();
    }

    return 0;
}

//インスタンスＸのアクセス関数を呼ぶ
void SetX(float a, float b)
{
	x.SetA(a);
	x.SetB(b);
}

//インスタンスＹのアクセス関数を呼ぶ
void SetY(float a, float b)
{
	y.SetA(a);
	y.SetB(b);
}