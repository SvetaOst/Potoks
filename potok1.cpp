
#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <ctime> 
#include <cstdlib>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int t = clock();
	srand(t);
	setlocale(LC_ALL, "Russian");
	ofstream file;
	file.open("text1.txt");
	for (int i = 0; i < 10; i++)
	{
		file << i << " ";
	}
	int time = clock();
	file << endl << ((float)time - (float)t)/ CLOCKS_PER_SEC << "секунд";
	file.close();
	system("pause");
	return 0;
}

