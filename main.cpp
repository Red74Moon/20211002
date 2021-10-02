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


void Initialize();
void Input();
void Process();
void Output();

int FixedCosts = 0;	// ������� - �Է�
int VariableCost = 0;	// ������� - �Է�
int ObjectCost = 0;	// ������ ���� - �Է�
int ProductionCost = 0;	// ���ۺ��
int ProductNum = 0;	// ���۰���
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


void Initialize()
{
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

	ProductionCost = FixedCosts + (VariableCost * ProductNum);

	TotalSellingPrice = ProductNum * ObjectCost;

	cout << "������� : " << FixedCosts << endl;
	cout << "������ : " << VariableCost << endl;
	cout << "���ۺ�� : " << ProductionCost << endl;
	cout << "���갹�� : " << ProductNum << endl;
	cout << "��ǰ���� : " << ObjectCost << endl;
	cout << "���ǸŰ��� : " << TotalSellingPrice << endl;


	if (ProductionCost < TotalSellingPrice)
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
}
