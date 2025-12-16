#include <iostream>
#include <algorithm>
using namespace std;

#define Num_Agent 5

class Agent{
    public:
        int score;
        char codename;
        Agent(char codename, int score){
            this -> codename = codename;
            this -> score = score;
        }
        Agent() {}
};

int main() {
    Agent agent[Num_Agent];
    char temp_codename;
    int temp_score;

    for(int i = 0; i < Num_Agent; i++){
        cin >> temp_codename >> temp_score;
        agent[i] = Agent(temp_codename, temp_score);
    }

    int min_idx = 0;

    for(int i = 1; i < Num_Agent; i++){
        if(agent[i].score < agent[min_idx].score){
            min_idx = i;
        }
    }

    cout << agent[min_idx].codename << " " << agent[min_idx].score;


    
    return 0;
}