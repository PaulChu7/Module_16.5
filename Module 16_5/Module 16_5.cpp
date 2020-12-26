#include <iostream>
using namespace std;

int main()
{
    cout << "Hello Skillbox and Vitaly!\n";

    
    const int N = 5;
    int array[N][N] = { {0, 1}, {2, 3}, {4, 5}, {6, 7}, {8, 9} };
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            array[i][j] = i + j;
            cout << array[i][j] << ' ';
            
            if (i == 25 % N)
            {
                sum = sum + array[i][j];
            }
        }
        cout << '\n';
    }
    return 0;
}