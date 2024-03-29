// WeatherInfo class declaration
#pragma once
#include <string>
using namespace std;

class WeatherInfo {
	private:
		string weekDay;
		int highTemp;
		int lowTemp;
		double rainFall;
	public:
		WeatherInfo();
		WeatherInfo(string day, int hi, int lo, double rain);
		string getWeekDay() const;
		int getHighTemp() const;
		int getLowTemp() const;
		double getRainFall() const;
		void setWeekDay(string day);
		void setHighTemp(int degrees);
		void setLowTemp(int degrees);
		void setRainFall(double inches);
		string toString() const;
};
