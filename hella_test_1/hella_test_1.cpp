// hella_test_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "omp.h"


using namespace std;

int main()
{
#pragma omp parallel
	{
		cout << "--------- LR 1 --------\n";
		cout << "Group: 6.04.51.14.02\n";
		cout << "Student: Luhacheva T.V.\n";
	}

		system("pause");
    return 0;
	     

}

