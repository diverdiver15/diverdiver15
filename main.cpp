/*#include <iostream>

using namespace std;//std::�Ⱦ������� 

int main()
{
	cout << "hahahah" << endl;

	return 0;
}
*/
#include <iostream>// ��ó���� �ٸ� ����� �� ǥ���� ����.
/*
int main()//���� �Լ�
{
	int Gold= 10;//������ ���� 10�� �޸𸮿� ����ش޶�� ��

	std::cin >> Gold; //Ű����� ���� �Է� >>
	std::cout << Gold;//�޸𸮿� �ִ� gold�� ��� <<

	return 0;
}
*/
int main()//�Է��� ���� ��Ģ���� 
{
	int Data = 0;//���� �����ϰ� ���� �ְ� 
	int Data2 = 0;

	std::cin >> Data;
	std::cin >> Data2;

	std::cout << Data + Data2 << std::endl;//<< std::endl;�ٹٲ� 
	std::cout << Data - Data2 << std::endl;
	std::cout << Data * Data2 << std::endl;
	std::cout << Data / Data2 << std::endl;
	return 0;
}
//�ڷ���(Primitive Datatype)
//int ������ 
//float �Ǽ��� �Ҽ��� ������  
// + - / * % ������ (��� Operator)
