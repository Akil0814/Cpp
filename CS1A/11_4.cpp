//AKELI ADILIJIANG      CS1A             Chapter 11, P.673 , #4
//
/**************************************************************
 * ANALYSIS WEATHER DATA
 * -----------------------------------------------------------
 * This program collects monthly weather data, including
 * rainfall, high/low temperatures, and calculates statistics
 * such as total rainfall, average monthly rainfall, highest/lowest
 * temperatures, and the average of monthly average temperatures.
 *____________________________________________________________
 * INPUT
 *   total_rainfall   Total Rainfall for the month
 *   high_temp        High Temperature
 *   low_temp         Low Temperature
 *   avg_temp         Average Temperature
 * OUTPUT
 *  all data include hinghest and lowest
 *************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct WeatherData {
    double total_rainfall;   // Total Rainfall for the month
    double high_temp;        // High Temperature
    double low_temp;         // Low Temperature
    double avg_temp;         // Average Temperature
};

const double MIN_TEMP = -100.0;
const double MAX_TEMP = 140.0;

double getValidatedTemperature(const string& prompt) {
    double temp;
    while (true) {
        cout << prompt;
        cin >> temp;
        if (temp >= MIN_TEMP && temp <= MAX_TEMP) {
            return temp;
        }
        cout << "Invalid temperature. Please enter a value between -100 and 140.\n";
    }
}

void inputWeatherData(WeatherData weather[], const string months[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "\nEnter data for " << months[i] << ":\n";

        cout << "Total Rainfall (in inches): ";
        cin >> weather[i].total_rainfall;

        weather[i].high_temp = getValidatedTemperature("High Temperature (F): ");
        weather[i].low_temp = getValidatedTemperature("Low Temperature (F): ");

        weather[i].avg_temp = (weather[i].high_temp + weather[i].low_temp) / 2.0;
    }
}

void calculateAndDisplayStatistics(const WeatherData weather[], const string months[], int size) {
    double total_rainfall = 0.0;
    double avg_monthly_rainfall;
    double total_avg_temp = 0.0;
    double highest_temp = MIN_TEMP;
    double lowest_temp = MAX_TEMP;
    string highest_temp_month, lowest_temp_month;

    for (int i = 0; i < size; ++i) {
        total_rainfall += weather[i].total_rainfall;
        total_avg_temp += weather[i].avg_temp;

        if (weather[i].high_temp > highest_temp) {
            highest_temp = weather[i].high_temp;
            highest_temp_month = months[i];
        }

        if (weather[i].low_temp < lowest_temp) {
            lowest_temp = weather[i].low_temp;
            lowest_temp_month = months[i];
        }
    }

    avg_monthly_rainfall = total_rainfall / size;
    double avg_yearly_temp = total_avg_temp / size;

    cout << "\nWeather Statistics for the Year:\n";
    cout << "---------------------------------\n";
    cout << "Total Rainfall for the Year: " << fixed << setprecision(2) << total_rainfall << " inches\n";
    cout << "Average Monthly Rainfall: " << avg_monthly_rainfall << " inches\n";
    cout << "Highest Temperature: " << highest_temp << " F (" << highest_temp_month << ")\n";
    cout << "Lowest Temperature: " << lowest_temp << " F (" << lowest_temp_month << ")\n";
    cout << "Average of Monthly Average Temperatures: " << avg_yearly_temp << " F\n";
}

int main() {
    const int MONTHS_IN_YEAR = 12;
    WeatherData weather[MONTHS_IN_YEAR];
    string months[MONTHS_IN_YEAR] = {"January", "February", "March", "April", "May", "June",
                                     "July", "August", "September", "October", "November", "December"};

    inputWeatherData(weather, months, MONTHS_IN_YEAR);
    calculateAndDisplayStatistics(weather, months, MONTHS_IN_YEAR);

    return 0;
}
