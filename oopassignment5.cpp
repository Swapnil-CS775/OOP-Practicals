#include <iostream>
using namespace std;
template <typename T>

void selsort(T array[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[i])
            {
                T temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    cout << "Sorted array is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << endl;
    }
}

int main()
{
    int n;
    while (1)
    {
        int ch;
        cout << "1 int array" << endl;
        cout << "2 float array" << endl;
        cout << "Enter your choice:";
        cin >> ch;

        switch (ch)
        {
        case 1:
           { cout << "Enter number of element in your array:";
            cin >> n;
            cout << "Enter a intiger array:";
            int array[n];
            for (int i = 0; i < n; i++)
            {
                cin >> array[i];
            }
            selsort(array, n);
            break;}
        case 2:
           { 
            cout << "Enter number of element in your array:";
            cin >> n;
            cout << "Enter a float array:";
            float arrayf[n];
            for (int i = 0; i < n; i++)
            {
                cin >> arrayf[i];
            }
            selsort(arrayf, n);
            break;}
        }
    }

    return 0;
}