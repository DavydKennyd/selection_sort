#include <iostream>
using namespace std;
int main()
{
    int selection_sort[] = {2, 3, 7, 9, 26, 5, 144, 0, 1,6,0,4,3,6,56,67};
    int n = sizeof(selection_sort) / sizeof(selection_sort[0]);

    for (int i = 0; i < n - 1; i++)
    {
        int menor_elemento = i;
        for (int j = i + 1; j < n; j++)
        {
            if (selection_sort[j] < selection_sort[menor_elemento])
            {
                menor_elemento = j;
            }
        }
        int temp = selection_sort[menor_elemento];
        selection_sort[menor_elemento] = selection_sort[i];
        selection_sort[i] = temp;
    }

    cout << "A ordenação correta do algoritmo: ";
    for(int k=0;k<n;k++){
        cout << selection_sort[k]<< ",";
    }
    cout <<endl;
    return 0;
}
