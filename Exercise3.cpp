#include <iostream>
#include <math.h>
#define PI 3.14 
using namespace std;

string weatherDescrpt(int ans){
    if (ans>25) {
        return "hot!";
    }
    else if (ans<10) {
        return "cold.";
    }
    else{
        return "warm.";
    }
}

int main() {
    int answer;
    cout << "What is temperature outside: " << endl;
    cin >> answer;

    cout << "Weather outside is " << weatherDescrpt(answer) << endl;
    return 0;

}

