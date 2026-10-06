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
// extra ones
int greaterthanX(int arr[], int size, int x)
{
    int greattotal = 0;
    for (int i=0; i<size; i++)
    {
        if (arr[i]>x)
        {
            greattotal++;
        }
    }
    return greattotal;
}
int lessthanX(int arr[], int size, int x)
{
    int lesstotal = 0;
    for (int i=0; i<size; i++)
    {
        if (arr[i]<x)
        {
            lesstotal++;
        }
    }
    return lesstotal;
}
int hasX(int arr[], int size, int x)
{
    bool flag = false;
    for (int i=0; i<size; i++)
    {
        if (arr[i]==x)
        {
            flag = true;
            break;
        }
    }
    return flag;
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
    int x;
    cout<<"Enter number X:";
    cin>>x;
    bool hasXResult = hasX(num, size, x);
    cout << "\nSum: " << calculateSum(num, size) 
         << "\nMin: " << findMinimum(num, size) 
         << "\nMax: " << findMaximum(num, size) 
         << "\nPositives: " << countPositive(num, size) 
         << "\nNegatives: " << countNegative(num, size) 
         << "\nEvens: " << countEven(num, size) 
         << "\nOdds: " << countOdd(num, size);
         
    cout << "\nGreater than "<<x<< ": " << greaterthanX(num, size, x)
         << "\nLess than " <<x<< ": " << lessthanX(num, size, x) 
         << "\nContains "<<x<<": ";
    
    if (hasXResult)
    {
        cout << "Yes"<<endl;
    }
    else
    {
        cout << "No"<<endl;
    }

    cin.ignore(1000, '\n');
    cin.get();

}