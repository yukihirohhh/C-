#include "Enemy.h"
#include <iostream>

//�R���X�g���N�^�i�������j
Enemy::Enemy()
{
	hp = 200; //HP
	atk = 30; //�U����
	def = 35; //�h���
}

//HP ��\��
//�����F�Ȃ�
//�ߒl�F�Ȃ�
void Enemy::DispHp()
{
	std::cout << "�G�̂g�o��" << hp << "\n";
}

//�U��
//�����F�G�̖h���
//�ߒl�F�_���[�W��
int Enemy::Attack(int i)
{
	printf("�G�̍U���I ");
	return atk - i / 2;
}

//�_���[�W���󂯂�iHP �����炷�j
//�����F�󂯂�_���[�W��
//�ߒl�F�Ȃ�
void Enemy::Damage(int i)
{
	std::cout << "�G��" << i << "�̃_���[�W\n";
	hp -= i;
}

//�h��͂��擾�i�A�N�Z�X�֐��j
//�����F�Ȃ�
//�ߒl�F�h���
int Enemy::GetDef()
{
	return def;
}
//�퓬�s�\����
//�����F�Ȃ�
//�ߒl�F�퓬�s�\��true ���̑���false

bool Enemy::IsDead()
{
	//HP �� 0 �ȉ��������� true ��Ԃ�
	if (hp <= 0)
		return true;
	//����ȊO�Ȃ� false ��Ԃ�
	return false;
}
