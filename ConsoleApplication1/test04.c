int main()
{
	//alignment (����) �ɂ���
	struct TEST {
		char a[2];
		char* p;//8�o�C�g ... �W�̔{���̃A�h���X�ɔz�u������
	};
	const int x = sizeof(struct TEST);
}