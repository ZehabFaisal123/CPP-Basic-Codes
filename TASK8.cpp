#include <iostream>
using namespace std;
const int MONTHS = 3;
void getData(int temperatures[][2]) {
    for (int i = 0; i < MONTHS; i++) {
        cout << "Enter highest temperature for month " << i + 1 << ": ";
        cin >> temperatures[i][0];
        cout << "Enter lowest temperature for month " << i + 1 << ": ";
        cin >> temperatures[i][1];
    }
}
double avgHigh(int temperatures[][2]) {
    double total_high = 0.0;
    for (int i = 0; i < MONTHS; i++) {
        total_high += temperatures[i][0];
    }
    return total_high / MONTHS;
}
double avgLow(int temperatures[][2]) {
    double total_low = 0.0;
    for (int i = 0; i < MONTHS; i++) {
        total_low += temperatures[i][1];
    }
    return total_low / MONTHS;
}
int main() {
    int temperature_data[MONTHS][2];
    getData(temperature_data);
    double average_high = avgHigh(temperature_data);
    double average_low = avgLow(temperature_data);
    cout << "------Average high temperature------: " << average_high << endl;
    cout << "------Average low temperature------: " << average_low << endl;
    return 0;
}