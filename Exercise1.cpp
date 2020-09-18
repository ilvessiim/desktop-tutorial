#include <iostream>
#include <math.h>
#define PI 3.14 
using namespace std;

float squareArea(double ans){
    float sqrArea = pow(2*ans,2);
    return sqrArea;
}
float squarePerimeter(double ans){
    float sqrPerimeter = (2*ans)*4;
    return sqrPerimeter;
}
float roundArea(double ans){
    float rndArea = PI*pow(ans,2);
    return rndArea;
}

float roundPerimeter(double ans){
    float rndPerimeter = 2*PI*ans;
    return rndPerimeter;
}

int main() {
    double answer;
    cout << "What is radius of the circle: " << endl;
    cin >> answer;

    cout << "Square area is: " << squareArea(answer) << endl;
    cout << "Square perimeter is: " << squarePerimeter(answer) << endl;
    cout << "Round area is: " << roundArea(answer) << endl;
    cout << "Round perimeter is: " << roundPerimeter(answer) << endl;

    return 0;

}

