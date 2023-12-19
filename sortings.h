
template <typename T>
void Quick_sort(T a[], int left, int right,int& compares_num, int& swaps_num)
{
    int i = left, j = right;
    T mid = a[(left + right)/2];
    do
    {
        while (a[i] < mid) 
        {
            compares_num++;
            i++;
        }
        while (a[j] > mid) 
        {
            compares_num++;
            j--;
        }
        compares_num++;
        if (i <= j)
        {
            T temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            swaps_num++;
            i++; 
            j--;
        }

    } while(i < j);
    compares_num++;
    if ( left < j ) 
        QuickSort(a,left,j,compares_num,swaps_num);
    compares_num++;
    if (i < right) 
        QuickSort(a, i,right,compares_num,swaps_num);
}

template <typename T>
void Bubble_sort (T a[],int size,int& compares_num, int& swaps_num)
{
    for (int i = 0; i < size-1; i++)
        for (int j = 0; j < size - i - 1; i++)
            if (a[j] > a[j + 1])
            {
                T temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swap_num++;
            }
    compares_num = size * (size-1) / 2;
}
