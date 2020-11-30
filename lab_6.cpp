#include <iostream>
#include <math.h>
using namespace std;

double fact(int N);
double g(double x);

int main()
{
    double y;
    double answer;
    cout << "Enter your y: ";
    cin >> y;

    answer = (1.7 * g(0.25) + 2 * g(1 + y)) / (6 - g(y * y - 1));

    cout << "Answer is " << answer << endl;
}

double fact(int N)
{
    if (N < 0)
        return 0;
    if (N == 0)
        return 1;
    else
        return N * fact(N - 1);
}

double g(double x)
{
    double sum_1 = 0, sum_2 = 0;
    double result;

    for (int k = 0; k <= 10; k++)
    {
        double add_1 = pow(x, 2 * k + 1) / fact(2 * k + 1);
        sum_1 += add_1;

        double add_2 = pow(x, 3 * k) / fact(3 * k);
        sum_2 += add_2;
    }

    result = sum_1 / sum_2;

    return result;
}
