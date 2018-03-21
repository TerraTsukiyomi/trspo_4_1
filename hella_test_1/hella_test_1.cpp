// hella_test_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"


int main()
{
#pragma omp parralel
	{
		std::cout << "--------- LR 1 --------";
		std::cout << "Group: 6.04.51.14.02";
		std::cout << "Student: Luhacheva T.V.";
	}

    return 0;
}

