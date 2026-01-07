#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> arr;

int main() {
    int min_num = INT_MAX;
    int max_num = INT_MIN;
    int index = 0;

    while(1){
        int n;
        cin >> n;
        if(n == 999 || n == -999){break;}
        arr.push_back(n);
        if(arr[index] > max_num){ max_num = arr[index]; }
        if(arr[index] < min_num){ min_num = arr[index]; }
        index += 1;
    }

    cout << max_num << " " << min_num;
    return 0;
}