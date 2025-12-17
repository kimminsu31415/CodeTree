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

    int rain_frist_idx = 0;
    for(int i = 1; i < n; i++){
        if(forecast[i].weather == "Rain"){

            for(int j = i+1; j < n; j++){
                if(forecast[j].weather == "Rain"){
                    if(forecast[i].date < forecast[j].date){
                        rain_frist_idx = i;
                    }
                }
            }
        }
    }

    cout << forecast[rain_frist_idx].date << " " << forecast[rain_frist_idx].day << " " << forecast[rain_frist_idx].weather;

    

    return 0;
}