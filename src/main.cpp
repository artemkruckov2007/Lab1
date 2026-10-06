#include <iostream>
using namespace std;

int calculateSum(int arr[], int size)
{
    int sum = 0;
    for (int i=0; i<size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int findMinimum(int arr[], int size)
{
    int min = arr[0];
    for (int i=0; i<size; i++)
    {
        if (arr[i]<min)
        {
            min = arr[i];
        }
    }
    return min;
}
int findMaximum(int arr[], int size)
{
    int max = arr[0];
    for (int i=0; i<size; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
}
int countPositive(int arr[], int size)
{
    int totalpos = 0;
    for (int i=0; i<size; i++)
    {
        if (arr[i]>0)
        {
            totalpos++;
        }
    }
    return totalpos;
}
int countNegative(int arr[], int size)
{
    int totalneg = 0;
    for (int i=0; i<size; i++)
    {
        if (arr[i]<0)
        {
            totalneg++;
        }
    }
    return totalneg;
}
int countEven(int arr[], int size)
{
    int totaleven = 0;
    for (int i=0; i<size; i++)
    {
        if (arr[i]%2==0)
        {
            totaleven++;
        }
    }
    return totaleven;
}
int countOdd(int arr[], int size)
{
    int totalodd = 0;
    for (int i=0; i<size; i++)
    {
     if (arr[i]%2!=0)
        {
            totalodd++;
        }
    }
    return totalodd;
}
int main()
{   
    const int size =  10;
    int num[size];
    cout<<"Enter 10 Numbers: ";
    for(int i = 0; i<10; i++)
    {
        cin>>num[i];
    }
    cout << "Sum: " << calculateSum(num, size) << "\n" << "Min: " << findMinimum(num, size) << "\n" << "Max: " << findMaximum(num, size) << "\n" << "Positives: " << countPositive(num, size) << "\n" << "Negatives: " << countNegative(num, size) << "\n" << "Evens: " << countEven(num, size) << "\n" << "Odds: " << countOdd(num, size) << endl;
    cin.ignore(1000, '\n');
    cin.get();
}