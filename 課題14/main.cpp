#include "Fat.h"
//�萔�錾
#define NUM 5 //�l��

void SetData();
void BmiCalc();
void Sort();
void Output();

Fat* human;

int main()
{

	human = new Fat[NUM];
	SetData();
	BmiCalc();
	Sort();
	Output();

	delete[] human;
}

void SetData()
{
	std::string name[] = { "���Y","�Ԏq","���Y","�ǎq","��Y" };
	float height[] = { 1.72f, 1.63f, 1.85f, 1.56f, 1.77f };
	float weight[] = { 68.2f, 55.6f, 92.5f, 63.3f, 50.1f };
	for (int i = 0; i < NUM; i++)
	{
		human[i].SetName(name[i]);
		human[i].SetHeight(height[i]);
		human[i].SetWeight(weight[i]);
	}
}

void BmiCalc()
{
	for (int i = 0; i < NUM; i++)
	{
		human[i].Calc();
	}
}

void Sort()
{
	for (int i = 0; i < NUM - 1; i++) {
		// �������ɏ��Ԃɔ�r���܂�
		for (int j = NUM - 1; j > i; j--) {
			// ��̕����傫���Ƃ��݂͌��ɓ���ւ��܂�
			if (human[j].GetBMI() < human[j - 1].GetBMI()) {
				Fat t = human[j];
				human[j] = human[j - 1];
				human[j - 1] = t;
			}
		}
	}
}

void Output()
{
	for (int i = 0; i < NUM; i++)
	{
		human[i].Disp();
	}
}
