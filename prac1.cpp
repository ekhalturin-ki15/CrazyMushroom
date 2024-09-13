#include <iostream>
#include <cstdio>
#include <random>
#include <vector>

using namespace std;

//random_device rd;
//mt19937 gen; // Глобальный генератор случ чисел

struct ScreenController
{
	int iSizeW = 10;
	int iSizeH = 10;
	
	string EndMessage = "Game Over, wasted";

	//Сначала Y, потом X
	vector<vector<int>> arrMap;

	int iClearRow = 5;

	char Out(int iData)
	{
		return char(iData + '0'); // '0' ascii = 48
	}

	ScreenController(int _iSizeH, int _iSizeW, int _iClearRow)
	{
		iSizeH = _iSizeH;
		iSizeW = _iSizeW;
		iClearRow = _iClearRow;

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

	void End()
	{
		ClearScrean();
		cout << EndMessage;
	}
};


struct EnemyController
{
	int iPower = 3;
	ScreenController* ptrScreen;


	EnemyController(int _iPower, ScreenController* _ptrScreen)
	{
		iPower = _iPower;
	}

	bool Turn()
	{
		int iTurnLimit = iPower;
		while (true)
		{
			if (iTurnLimit <= 0) break;
			//rand() 0 2^32 - 1
			int iTargetX = (rand()% ptrScreen->iSizeW);
			int iTargetY = (rand()% ptrScreen->iSizeH);


		}


	}
};

struct PlayerController
{
	int iScoore = 0;
	ScreenController* ptrScreen;

	PlayerController(ScreenController* _ptrScreen)
	{
	}

	bool Turn()
	{


	}
};

ScreenController fScreen(10, 10, 5);


int main()
{
	EnemyController fEnemy(3, &fScreen);
	PlayerController fPlayer(&fScreen);

	//seed random
	srand(time(0));

	while (true)
	{
		if (fEnemy.Turn())
		{
			fScreen.End();
			return 0;
		}
		fScreen.OutScreen();
		fPlayer.Turn();
		fScreen.OutScreen();
	}
}