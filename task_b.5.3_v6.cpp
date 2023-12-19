//Выполнить задание, оформив его через функции (ввода, вывода, сортировки).
//Передачу массива в функции организовать через указатели.
//Дана действительная матрица порядка n × m. Перебор строк /столбцов матрицы
//осуществить с использованием указателей. Обосновать выбор метода сортировки
/*
5 5
1 2 3 4 5
2 3 4 5 6
7 5 2 1 4
9 9 9 9 9
5 3 1 4 0
*/
//Упорядочить строки по невозрастанию последних элементов.

#include <iostream>
using namespace std;

void Input(double* matrix, int n, int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matrix[i * n + j];
}

void Output(double* matrix, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << matrix[i * n + j] << ' ';
        cout << '\n';
    }
}

void Sort(double* matrix, int n, int m)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (matrix[j * n + m - 1] < matrix[(j + 1) * n + m - 1])
                for (int k = 0; k < m; k++)
                    swap(matrix[j * n + k], matrix[(j + 1) * n + k]);
}

int main()
{
    double matrix[1000];
    int n, m;
    cout << "enter matrix size: ";
    cin >> n >> m;
    cout << "enter matrix:\n";
    Input(matrix, n, m);
    cout << "your matrix:\n";
    Output(matrix, n, m);
    cout << "your sorted matrix:\n";
    Sort(matrix, n, m);
    Output(matrix, n, m);
    return 0;
}
