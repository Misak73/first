#include <iostream>
using namespace std;

long double fact(int N)
{
    if(N < 0)
        return 0;
    if (N == 0)
        return 1;
    else
        return N * fact(N - 1);
}
int main()
{
    int N;
    cout << "Vvedite chislo dlya factoriala(po zadaniyu - 3): ";
    cin >> N;
    cout << "Factorial dlya chisla " << N << " = " << fact(N) << endl << endl;
    return 0;
}
