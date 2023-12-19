#include <iostream>
#include <cmath>
#include "sortings.h"
#include "generate.h"

using namespace std;

int main() 
{
    float* mas;
    int size;
    int temp;
    int compares = 0, t_compare = 0;
    int swaps = 0, t_swaps = 0;

    cout << "array size: ";
    cin >> size;
    cout << "choose a method to fill massive: \n\t 1)ascending order";
    cout << "\n\t 2)descending order\n\t 3)random \n";
    cin >> temp;

    switch (temp) 
    {
        case 1:
            mas = Fill_increas<float>(size);
            break;
        case 2:
            mas = Fill_decreas<float>(size);
            break;
        default:
            mas = Fill_random<float>(size);
            break;
    }
    cout << "your array:\n";
    for (int i = 0; i < size; i++)
        cout << mas[i] << " ";
    cout << "\n\nchoose sorting method: \n\t 1)quick sort \n\t 2)swap sort \n";
    cin >> temp;
    switch (temp) 
    {
        case 1:
            Quick_sort(mas, 0, size - 1, compares, swaps);
            t_compare = 2 * size * log(size);
            t_swaps = 2 * size;
            break;
        default:
            Bubble_sort(mas, size, compares, swaps);
            t_compare = (size * (size-1)) / 2;
            t_swaps = (size + 1) * (size - 1) / 2;
            break;
    }

    cout << "\nsorted array:\n";
    for (int i = 0; i < size; i++)
        cout << mas[i] << " ";

    cout << "\n\nswap num:" << swaps;
    cout << "\ncompare num:" << compares;
    cout << "\nteoretical swap num:" << t_swaps;
    cout << "\nteoretical compare num:" << t_compare << '\n';
    return 0;
}


