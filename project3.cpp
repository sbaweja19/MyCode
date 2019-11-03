//project3.cpp

#include <iostream>
#include <string>
#include <cstring>
#include "project3.h"
using namespace std;


string convertTime(string sTime){

	string military;
	string* m = &military;

	int indexColon = sTime.find(":");
	
	//case: 12:XX or 12

	if(sTime.find("12") == 0){
		if (indexColon == -1)
			military = "0000";
		else
			military = "00"+sTime.substr(3,2);

		checkPeriod(m, sTime);
		return military;
	}

	//case: hour only
	if (indexColon == -1){
		int temp = stoi(sTime);
		if(temp < 10)
			military = "0" + to_string(temp) + "00";

		else
			military = to_string(temp) + "00";

		checkPeriod(m, sTime);
		return military;

	}

	else{
		//case: two digit hour
		if (indexColon == 2){
			int hour = stoi(sTime.substr(0, 2));
			string minute = sTime.substr(indexColon + 1, 2);
			military = to_string(hour)+minute;
			checkPeriod(m, sTime);
			return military;
		}
		//case: single digit hour
		if (indexColon == 1){
			int hour = stoi(sTime.substr(0, 1));
			string minute = sTime.substr(indexColon + 1, 2);
			military = "0"+to_string(hour)+minute;
			checkPeriod(m, sTime);
			return military;
		}
	}

}

void checkPeriod(string* military, string sTime){
	if (sTime.find("P") != -1 || sTime.find("p") != -1){
		int temp = stoi(*military);
		temp += 1200;
		*military = to_string(temp);
	}
	
}