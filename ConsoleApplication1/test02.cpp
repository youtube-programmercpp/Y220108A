int main()
{
	const int x = sizeof(int);//�^�̑傫���𓾂����ꍇ�Ɍ��芇�ʂ��K�v
	const int y = sizeof x;//�I�u�W�F�N�g�̑傫���𓾂�ꍇ�͊��ʂ͕s�v
	const int z = sizeof (1            + 1);//��(expression) 
	const int a = sizeof "ABCDEF";
}
