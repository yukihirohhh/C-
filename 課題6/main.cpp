#include "Calclation.h"

//�v���g�^�C�v�錾
void SetX(float a, float b);
void SetY(float a, float b);

//�O���[�o���ϐ�
Calclation x, y;

//���C���֐�
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

//�C���X�^���X�w�̃A�N�Z�X�֐����Ă�
void SetX(float a, float b)
{
	x.SetA(a);
	x.SetB(b);
}

//�C���X�^���X�x�̃A�N�Z�X�֐����Ă�
void SetY(float a, float b)
{
	y.SetA(a);
	y.SetB(b);
}