// WeatherInfo class definitions
#include "WeatherInfo.h"
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

WeatherInfo::WeatherInfo() {
	weekDay = "day";
	highTemp = 21;
	lowTemp = 9;
	rainFall = 0.4;
}
WeatherInfo(string day, int hi, int lo, double rain) {
	weekDay = day;
	highTemp = hi;
	lowTemp = lo;
	rainFall = rain;
}
string WeatherInfo::getWeekDay() const {
	return weekDay;
}
int WeatherInfo::getHighTemp() const {
	return highTemp;
}
int WeatherInfo::getLowTemp() const {
	return lowTemp;
}
double WeatherInfo::getRainFall() const {
	return rainFall;
}
void WeatherInfo::setWeekDay(string day) {
	weekDay = day;
}
void WeatherInfo::setHighTemp(int degrees) {
	highTemp = degrees;
}
void WeatherInfo::setLowTemp(int degrees) {
	lowTemp = degrees;
}
void WeatherInfo::setRainFall(double inches) {
	rainFall = inches;
}
string WeatherInfo::toString() const {
	ostringstream strOut;
	
	strOut.setf(ios::fixed | ios::showpoint);
	
	strOut << setw(9) << weekDay;
	strOut << setw(9) << highTemp;
	strOut << setw(9) << lowTemp;
	strOut << setw(9) << setprecision(1) << rainFall << ends;
	return strOut.str();
}
