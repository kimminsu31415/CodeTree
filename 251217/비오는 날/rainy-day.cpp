#include <iostream>
using namespace std;

#define MAXN 100

class Forecast{
    public:
        string date, day, weather;
        Forecast(string date, string day, string weather){
            this -> date = date;
            this -> day = day;
            this -> weather = weather;
        }
        Forecast(){}
};

Forecast forecast[MAXN];

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string date, day, weather; 
        cin >> date >> day >> weather;
        forecast[i] = Forecast(date, day, weather);
    }

    int rain_least_idx = -1;
    for(int i = 0; i < n; i++){
        if(forecast[i].weather == "Rain"){

            if(rain_least_idx == -1 || forecast[i].date < forecast[rain_least_idx].date){
                rain_least_idx = i;
            }
        }
    }

    cout << forecast[rain_least_idx].date << " " << forecast[rain_least_idx].day << " " << forecast[rain_least_idx].weather;

    

    return 0;
}