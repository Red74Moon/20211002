//�Ѵ� �� �������� ����Ǵ� ���� ����� A
//���� �ϳ��� ���� �� ���� ���� ����� B
//������ ������ C��� �Ͽ�����,
//
//�� ���(A + B)�� �� ���� C�� �Ѿ�� ������ ���ͺб����̶�� �Ѵ�.
//
//ex) 1���� ��Ʈ���� ����µ� A = 100 / B�� 5���� / �� �����(100 + (5 * ���� ����))�����̰� 
//    �Ǹ� ������ 10������ ���, �� 21�븦 �Ⱦ��� ���� ���ͺб����� �ȴ�.
//
//A, B, C�� �Է¹����� ���ͺб����� ���ϴ� ���α׷��� ���Ͻÿ�. 
//(���ͺб����� �������� ������ - 1�� ����Ѵ�)

#include <iostream>

using namespace std;

int main()
{
	int FixedCosts = 1000000;	// �������
	int VariableCost = 50000;	// �������
	int ObjectCost = 100000;	// ������ ����
	int ProductionCost = 0;		// ���ۺ��
	int ProductNum = 0;			// ���۰���
	int TotalSellingPrice = 0;	// ���ǸŰ���

	cout << "���۵� ������ �� : ";
	cin >> ProductNum;

	ProductionCost = FixedCosts + (VariableCost * ProductNum);

	TotalSellingPrice = ProductNum * ObjectCost;

	cout << "������� : " << FixedCosts << endl;
	cout << "������� : " << VariableCost << endl;
	cout << "���ۺ�� : " << ProductionCost << endl;
	cout << "���۰��� : " << ProductNum << endl;
	cout << "���ǰ��� : " << ObjectCost << endl;
	cout << "���ǸŰ��� : " << TotalSellingPrice << endl;


	if (ProductionCost < TotalSellingPrice)
	{
		cout << endl << endl;
		cout << "���ͺб����� �Ѿ����ϴ�." << endl;
	}
	else
	{
		cout << endl << endl;
		cout << "���� ���ͺб����� �����ʾҽ��ϴ�." << endl;
	}
	
	return 0;
}