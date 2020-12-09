#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;


void generate(int*, int);
float negative_av(int*, int);
void multiply(int*, float*, int, float);

int main()
{
    srand(time(NULL));
    int C[20];
    float F[10];

    float coeff;

    generate(C, 20);
    coeff = negative_av(C, 20);
    multiply(C, F, 20, coeff);

    return 0;
}

void generate(int arr[], int arr_size)
{
    for (int i = 0; i < arr_size; i++)
    {
        arr[i] = rand()%21 -10;
        cout << arr[i] << "\t";
    }
    
    cout << "\n";
}

float negative_av(int arr[], int arr_size)
{
    float sum;
    int counter;

    for (int i = 0; i < arr_size; i++)
    {
        if (arr[i]<0) {
            sum += arr[i];
            counter++;
        }
    }
    cout<< fabs(sum)/counter << endl;
    return fabs(sum)/counter;
}

void multiply(int arr_from[], float arr_to[], int arr_size, float coeff)
{
    int *arr_ptr;
    arr_ptr = &arr_from[0];

    for (int i = 0; i < arr_size/2; i++)
    {
        arr_to[i] = *arr_ptr * coeff;
        cout << arr_to[i] << "\t\t";
        arr_ptr += 2;
    }
}