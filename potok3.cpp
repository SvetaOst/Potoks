// potok3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <ctime> 
#include <cstdlib>
#include <thread>

using namespace std;

void OutText()
{
	ofstream file;
	file.open("text3.txt");
	for (int i = 0; i < 10; i++)
		file << i << " ";
	file.close();
};

int _tmain(int argc, _TCHAR* argv[])
{
	int t = clock();
	srand(t);
	setlocale(LC_ALL, "Russian");
	thread tA(OutText);
	thread tB(OutText);
	thread tC(OutText);
	thread tD(OutText);
	int t1 = clock();
	cout << ((float)t1 - (float)t)/ CLOCKS_PER_SEC << "секунд";
	
	system("pause");
	return 0;
}



