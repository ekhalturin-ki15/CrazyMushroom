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

    Srcreen()
    {

        //Иниц. размеров поля
        arrMap.resize(iSizeH);
        for (int Y = 0; Y < iSizeH; ++Y)
        {
            arrMap[Y].resize(iSizeW);
        }
        //arrMap.assign(iSizeH, vector<int>(iSizeW));
    }

    void OutScreen()
    {





    }

};

int main()
{
    





}