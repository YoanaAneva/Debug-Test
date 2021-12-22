#include <iostream>
#include <random>
#include <time.h>
using namespace std;
void fillArr()
{
    srand(time(NULL));
    int arr[4];
    // for(int i = 0; i < 4; i++)
    // {
    //     arr[i] = rand() % 9 + 1;
    // }

    for (int i = 0; i < 4; i++)
    {
        arr[i] = rand() % 9 + 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[j] = rand() % 9 + 1;
            }
        }
    }
}
int main()
{
    fillArr();
    cout << "Hello debugger!" << endl;
}