//project3Tests.cpp

#include <iostream>
#include <string>
#include "tddFuncs.h"
#include "project3.h"
using namespace std;

int main()
{
	string expected1 = "0900";
	string actual1 = convertTime("9 AM");
	assertEquals(expected1, actual1);

	string expected2 = "2200";
	string actual2= convertTime("10 P.M.");
	assertEquals(expected2, actual2);

	string expected3 = "0130";
	string actual3 = convertTime("1:30 A.M.");
	assertEquals(expected3, actual3);

	string expected4 = "1534";
	string actual4 = convertTime("03:34 PM");
	assertEquals(expected4, actual4);

	string expected5 = "2309";
	string actual5 = convertTime("11:09 pm");
	assertEquals(expected5, actual5);

	string expected6 = "0010";
	string actual6 = convertTime("12:10 AM");
	assertEquals(expected6, actual6);


	return 0;
}