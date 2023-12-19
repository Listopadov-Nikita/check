#include <ctime>

template<typename T>
T* Fill_increas(int size) 
{
    srand(time(NULL));
    T step;
    T* mas = (T*)malloc(size * sizeof(T));
    for (int i = 0; i < size; i++) 
    {
        if (i == 0)
            mas[i] = rand() % 7 + 'a' + static_cast<double>(rand()) / RAND_MAX;
        else 
        {
            step = rand() % 3 + 1 + static_cast<double>(rand()) / RAND_MAX;
            mas[i] = mas[i - 1] + step;
        }
    }
    return mas;
}

template<typename T>
T* Fill_decreas(int size)
{
    srand(time(NULL));
    T step;
    T* mas = (T*)malloc(size*sizeof(T));
    for(int i = 0; i < size; i++)
    {
        if(i==0)
            mas[i] = rand()%7+'s'+static_cast<double>(rand()) / RAND_MAX;
        else 
        {
            step = rand()%7+1+static_cast<double>(rand()) / RAND_MAX;
            mas[i] = mas[i-1] - step;
        }
    }
    return mas;
}

template<typename T>
T* Fill_random(int size)
{
    srand(time(NULL));
    T* mas = (T*)malloc(size*sizeof(T));
    for(int i = 0; i < size; i++)
        mas[i] = rand()%30+97+static_cast<double>(rand()) / RAND_MAX;
    return mas;
}

