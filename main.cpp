#include <iostream>
#include <cmath>
using namespace std;

double result = 0;
void cal_eq(int n, int k){
    if (k == 0) {
        result += 1;
        return;
    }
    cal_eq(n, k-1);
    result += (pow(n, k) * pow(-1, k+1)) / tgamma(k+1);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cal_eq(n, 5);
    cout << "RESULT: " << result << endl;
    return 0;
}
