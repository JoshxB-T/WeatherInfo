// Main file that uses the WeatherInfo class
#include "WeatherInfo.h"
#include <iostream>
#include <iomanip>
using namespace std;

double calcAvgHigh(WeatherInfo array[], int number) {
	double averageH = 0.0;
	for (int q = 0; q < number; q++) {
		averageH += array[q].getHighTemp();
	}
	return averageH / number;
}

double calcAvgLow(WeatherInfo array[], int number) {
	double averageL = 0.0;
	for (int b = 0; b < number; b++) {
		averageL += array[b].getLowTemp();
	}
	return averageL / number;
}

int indexOfHighestTemp(WeatherInfo array[], int number) {
	int compareTempera = array[0].getHighTemp();
	int indexT = 0;
	for (int w = 0; w < number; w++) {
		if (compareTempera < array[w].getHighTemp()) {
			compareTempera = array[w].getHighTemp();
			indexT = w;
		}
	}
	return indexT;
}

int indexOfLowestTemp(WeatherInfo array[], int number) {
	int compareTemp = array[0].getLowTemp();
	int indexL = 0;
	for (int j = 0; j < number; j++) {
		if (compareTemp > array[j].getLowTemp()) {
			compareTemp = array[j].getLowTemp();
			indexL = j;
		}
	}
	return indexL;
}

double totalRainFall(WeatherInfo array[], int number) {
	double rainCount = 0;
	for (int l = 0; l < number; l++) {
		rainCount += array[l].getRainFall();
	}
	return rainCount;
}

void printInfo(WeatherInfo array[], int number) {
	cout << fixed << setprecision(1);
	for (int m = 0; m < number; m++) {
		cout << array[m].toString() << endl;
	}
}

int userInput(WeatherInfo array[], int& number) {
	char answer = 'z';
	string weekDay = "Day";
	int highNum = 0, lowNum = 0, //counter = 1;
	double rain = 0.0;
	int i = 0;
	
	do {
		cout << endl << "Enter day of week (eg. Sunday, Monday, etc...): ";
		cin >> weekDay;
		array[i].setWeekDay(weekDay);
		cout << endl << "Enter high temperature in degrees Fahr: ";
		cin >> highNum;
		array[i].setHighTemp(highNum);
		cout << endl << "Enter low temperature in degrees Fahr: ";
		cin >> lowNum;
		array[i].setLowTemp(lowNum);
		cout << endl << "Enter total rainfall in inches: ";
		cin >> rain;
		array[i].setRainFall(rain);
		cout << endl;
		if (number == 7) {
			number++;
			i--;
			break;
		}
		cout << "Another day (y or n): ";
		cin >> answer;
		number++;
		i++;
	} while (answer != 'n');
	i--;
	number--;
	return number;
}
	
int main() {
	WeatherInfo infoOfWeather;
	const int DAYS_OF_WEEK = 7;
	WeatherInfo daysOfWeatherInfo[DAYS_OF_WEEK];
	int num = 1;

	userInput(daysOfWeatherInfo, num);
	cout << fixed << setprecision(1);
	cout << setw(9) << "Week Day";
	cout << setw(9) << "Hi";
	cout << setw(9) << "Low";
	cout << setw(9) << "Rain" << endl;
	cout << setw(9) << "--------";
	cout << setw(9) << "----";
	cout << setw(9) << "----";
	cout << setw(9) << "----" << endl;
	printInfo(daysOfWeatherInfo, num);
	cout << setw(9) << "---------";
	cout << setw(9) << "----";
	cout << setw(9) << "----";
	cout << setw(9) << "----" << endl;
	cout << setw(9) << "Averages";
	cout << setw(9) << calcAvgHigh(daysOfWeatherInfo, num);
	cout << setw(9) << calcAvgLow(daysOfWeatherInfo, num);
	cout << setw(9) << totalRainFall(daysOfWeatherInfo, num) / num << endl << endl;
	cout << "Highest reading: " << daysOfWeatherInfo[indexOfHighestTemp(daysOfWeatherInfo, num)].getHighTemp() << " [" << daysOfWeatherInfo[indexOfHighestTemp(daysOfWeatherInfo, num)].getWeekDay() << "]" << endl;
	cout << "Lowest reading: " << daysOfWeatherInfo[indexOfLowestTemp(daysOfWeatherInfo, num)].getLowTemp() << " [" << daysOfWeatherInfo[indexOfLowestTemp(daysOfWeatherInfo, num)].getWeekDay() << "]" << endl;
	cout << "Total rainfall: " << totalRainFall(daysOfWeatherInfo, num) << "\"" << endl;

	return 0;
}
