//�Ѵ� �� �������� ����Ǵ� ���� ����� A
//���� �ϳ��� ���� �� ���� ���� ����� B
//������ ������ C��� �Ͽ�����,
//
//�� ���(A + B)�� �� ���� C�� �Ѿ�� ������ ���ͺб����̶�� �Ѵ�.
//�� ���( A + (B *���۰���) )
// 
//ex) 1���� ��Ʈ���� ����µ� A = 100 / B�� 5���� / �� �����(100 + (5 * ���� ����))�����̰� 
//    �Ǹ� ������ 10������ ���, �� 21�븦 �Ⱦ��� ���� ���ͺб����� �ȴ�.
//
//A, B, C�� �Է¹����� ���ͺб����� ���ϴ� ���α׷��� ���Ͻÿ�. 
//(���ͺб����� �������� ������ - 1�� ����Ѵ�)

#include <iostream>

using namespace std;

void Input();
void Process();
void Output();

int FixedCosts = 0;		// ������� - �Է�
int VariableCost = 0;	// ������� - �Է�
int ObjectCost = 0;		// ������ ���� - �Է�
int ProductionCost = 0;	// ���ۺ��
int ProductNum = 0;		// ���۰���
int TotalSellingPrice = 0;	// ���ǸŰ���
bool StatusCode = true;

int main()
{
	Input();

	while (StatusCode)
	{
		Process();
	}
	return 0;
}

void Input()
{
	cout << "1.��������� �Է��ϼ��� : ";
	cin >> FixedCosts;

	cout << "2.�������� �Է��ϼ��� : ";
	cin >> VariableCost;

	cout << "3.��ǰ������ �Է��ϼ��� : ";
	cin >> ObjectCost;
}

void Process()
{
	++ProductNum;

	//int FixedCosts = 0;		// ������� - �Է�
	//int VariableCost = 0;	// ������� - �Է�
	//int ObjectCost = 0;		// ������ ���� - �Է�
	//int ProductionCost = 0;	// ���ۺ��
	//int ProductNum = 0;		// ���۰���
	//int TotalSellingPrice = 0;	// ���ǸŰ���
	//bool StatusCode = true;


	ProductionCost = FixedCosts + (VariableCost * ProductNum);

	TotalSellingPrice = ProductNum * ObjectCost;

	Output();

	if (ObjectCost > ProductionCost)
	{
		cout << endl << endl;
		cout << "���ͺб����� �����ϴ�(-1)." << endl;
		StatusCode = false;
	}
	else if (ProductionCost < TotalSellingPrice)
	{
		cout << endl << endl;
		cout << ProductNum << " �� ���� " << endl;
		cout << "���ͺб����� �Ѿ����ϴ�." << endl;
		StatusCode = false;
	}
	else
	{
		cout << endl << endl;
		cout << ProductNum << " �� ���� " << endl;
		cout << "���� ���ͺб����� �����ʾҽ��ϴ�." << endl;
		cout << endl << endl;
	}
}

void Output()
{
	cout << endl << endl;
	cout << "������� : " << FixedCosts << endl;
	cout << "������ : " << VariableCost << endl;
	cout << "���ۺ�� : " << ProductionCost << endl;
	cout << "���갹�� : " << ProductNum << endl;
	cout << "��ǰ���� : " << ObjectCost << endl;
	cout << "���ǸŰ��� : " << TotalSellingPrice << endl;
}
 