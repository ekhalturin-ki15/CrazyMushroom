#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

struct Srcreen
{
	int iSizeW = 10;
	int iSizeH = 10;

	//Сначала Y, потом X
	vector<vector<int>> arrMap;

	int iClearRow = 5;

	char Out(int iData)
	{
		return char(iData + '0'); // '0' ascii = 48
	}

	Srcreen()
	{
		//Иниц. размеров поля
		//vector начал иниц = вызов констр по умолч (int? 0)
		arrMap.resize(iSizeH);
		for (int Y = 0; Y < iSizeH; ++Y)
		{
			arrMap[Y].resize(iSizeW);
		}
		//arrMap.assign(iSizeH, vector<int>(iSizeW));
	}

	void ClearScrean()
	{
		for (int Y = 0; Y < iClearRow; ++Y)
		{
			cout << "\n";
		}
	}

	void OutScreen()
	{
		ClearScrean();
		for (int Y = 0; Y < iSizeH; ++Y)
		{
			for (int X = 0; X < iSizeW; ++X)
			{
				cout << Out(arrMap[Y][X]);
			}
			cout << "\n";
			
			//cout.flush(); // Лишние затраты // Нужен лишь для передачи управления
			//cout << endl;
		}

	}

};

Srcreen fScreen;

int main()
{
	fScreen.OutScreen();

	int iPlayerTurn;
	cin >> iPlayerTurn;
}