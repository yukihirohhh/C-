#include "Player.h"
#include <iostream>

//�R���X�g���N�^�i�������j
Player::Player()
{
	hp = 300; //HP
	atk = 50; //�U����
	def = 22; //�h���
}

//HP ��\��
//�����F�Ȃ�
//�ߒl�F�Ȃ�
void Player::DispHp()
{
	std::cout << "�v���C���[�g�o��" << hp << "\n";
}

//�U��
//�����F�G�̖h���
//�ߒl�F�_���[�W��
int Player::Attack(int i)
{
	printf("�v���C���[�̍U���I ");
	return atk - i / 2;
}

//�_���[�W���󂯂�iHP �����炷�j
//�����F�󂯂�_���[�W��
//�ߒl�F�Ȃ�
void Player::Damage(int i)
{
	std::cout << "�v���C���[��" << i << "�̃_���[�W\n";
	hp -= i;
}

//�h��͂��擾�i�A�N�Z�X�֐��j
//�����F�Ȃ�
//�ߒl�F�h���
int Player::GetDef()
{
	return def;
}
//�퓬�s�\����
//�����F�Ȃ�
//�ߒl�F�퓬�s�\��true ���̑���false

bool Player::IsDead()
{
	//HP �� 0 �ȉ��������� true ��Ԃ�
	if (hp <= 0)
		return true;
	//����ȊO�Ȃ� false ��Ԃ�
	return false;
}
