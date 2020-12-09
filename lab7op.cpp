#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;


void generate(int*, int);
float negative_av(int*, int);
void multiply(int*, float*, int, float);
void output(int*, int);
void output(float*, int);

int main()
{
    srand(time(NULL));
    int C[20];
    float F[10];

    float coeff;

    generate(C, 20);
    coeff = negative_av(C, 20);
    multiply(C, F, 20, coeff);
    output(C, 20);
    cout << coeff << endl;
    output(F, 10);
    

    return 0;
}

void generate(int arr[], int arr_size)
{
    for (int i = 0; i < arr_size; i++)
    {
        arr[i] = rand()%21 -10;
    }
    
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
    return fabs(sum)/counter;
}

void multiply(int arr_from[], float arr_to[], int arr_size, float coeff)
{
    int *arr_ptr;
    arr_ptr = &arr_from[0];

    for (int i = 0; i < arr_size/2; i++)
    {
        arr_to[i] = *arr_ptr * coeff;
        arr_ptr += 2;
    }
}

void output(int arr[], int arr_size)
{
    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i] << "  ";
    }

    cout << endl;
}

void output(float arr[], int arr_size)
{
    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i] << "  ";
    }

    cout << endl;
}
