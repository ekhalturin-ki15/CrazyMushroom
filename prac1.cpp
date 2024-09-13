#include <iostream>
#include <cstdio> // из C в С++

//Плохо?
using namespace std;

#pragma warning( disable : 4996) // Небезопас функ вкл

namespace RED
{

}

int main()
{
    cout << "Hello World!\n";
    int a, b;
    
    //Учитываются пробелы
    cin >> std::noskipws >> a >> b;

    //(По умолчанию) Игнор все разделитель
    cin >> a >> b;

    //Безопасный C++
    //freopen_s

    //Безопасный C++ паралл мьютексы
    //scanf();

    // По умолчанию ввод на него
    //scanf_s();

    // Отключить привязку scanf printf
    //10^6
    ios_base::sync_with_stdio(false);


    


}