//한달 간 고정으로 지출되는 고정 비용을 A
//물건 하나를 만들 때 들어가는 가변 비용을 B
//물건의 가격을 C라고 하였을때,
//
//총 비용(A + B)을 총 수익 C가 넘어서는 구간을 손익분기점이라고 한다.
//총 비용( A + (B *제작개수) )
// 
//ex) 1대의 노트북을 만드는데 A = 100 / B는 5만원 / 총 비용은(100 + (5 * 제작 갯수))만원이고 
//    판매 가격은 10만원일 경우, 총 21대를 팔았을 때가 손익분기점이 된다.
//
//A, B, C를 입력받으면 손익분기점을 구하는 프로그램을 구하시오. 
//(손익분기점이 존재하지 않으면 - 1을 출력한다)

#include <iostream>

using namespace std;

void Input();
void Process();
void Output();

int FixedCosts = 0;		// 고정비용 - 입력
int VariableCost = 0;	// 가변비용 - 입력
int ObjectCost = 0;		// 물건의 가격 - 입력
int ProductionCost = 0;	// 제작비용
int ProductNum = 0;		// 제작갯수
int TotalSellingPrice = 0;	// 총판매가격
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
	cout << "1.고정비용을 입력하세요 : ";
	cin >> FixedCosts;

	cout << "2.생산비용을 입력하세요 : ";
	cin >> VariableCost;

	cout << "3.제품가격을 입력하세요 : ";
	cin >> ObjectCost;
}

void Process()
{
	++ProductNum;

	//int FixedCosts = 0;		// 고정비용 - 입력
	//int VariableCost = 0;	// 가변비용 - 입력
	//int ObjectCost = 0;		// 물건의 가격 - 입력
	//int ProductionCost = 0;	// 제작비용
	//int ProductNum = 0;		// 제작갯수
	//int TotalSellingPrice = 0;	// 총판매가격
	//bool StatusCode = true;


	ProductionCost = FixedCosts + (VariableCost * ProductNum);

	TotalSellingPrice = ProductNum * ObjectCost;

	Output();

	if (ObjectCost > ProductionCost)
	{
		cout << endl << endl;
		cout << "손익분기점이 없습니다(-1)." << endl;
		StatusCode = false;
	}
	else if (ProductionCost < TotalSellingPrice)
	{
		cout << endl << endl;
		cout << ProductNum << " 개 생산 " << endl;
		cout << "손익분기점이 넘었습니다." << endl;
		StatusCode = false;
	}
	else
	{
		cout << endl << endl;
		cout << ProductNum << " 개 생산 " << endl;
		cout << "아직 손익분기점이 넘지않았습니다." << endl;
		cout << endl << endl;
	}
}

void Output()
{
	cout << endl << endl;
	cout << "고정비용 : " << FixedCosts << endl;
	cout << "생산비용 : " << VariableCost << endl;
	cout << "제작비용 : " << ProductionCost << endl;
	cout << "생산갯수 : " << ProductNum << endl;
	cout << "제품가격 : " << ObjectCost << endl;
	cout << "총판매가격 : " << TotalSellingPrice << endl;
}
 