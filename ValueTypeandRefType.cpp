#include <iostream>
#include <algorithm>
using namespace std;

void Print1DArr(int*arr,short Length)
{
    cout<<"Array Elements: ";
    for(short i=0;i<Length;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void DuplicateArrayElements(int*arr,short Length)
{
    for(short i=0;i<Length;i++)
    {
        arr[i]*=2;
    }
}

void DuplicateNumber(int Number)
{
    Number*=2;
}
int main()
{
    //Reference Type

  /* 
   int arr1[] = {1,2,3,4}; //arr1 stored in heap and took an address "&arr1[0]" and we link the stack with the via pointer which have a memory location of array in the heap.
    int *arr2=arr1; // arr2 contains the same arr1 reference in the memory.therefore when you modify arr1 ,arr2 will effects and vice versa.

    short Length=sizeof(arr1)/sizeof(arr1[0]);
    cout<<"Arr1 Before Duplication\n";
    Print1DArr(arr1,Length);//1 2 3 4

    DuplicateArrayElements(arr1,Length);
     cout<<"Arr1 After Duplication\n";
    Print1DArr(arr1,Length);//2 4 6 8

  cout<<"Arr2 Before Duplication\n";
    Print1DArr(arr2,Length);//2 4 6 8

    DuplicateArrayElements(arr1,Length);
     cout<<"Arr2 After Duplication\n";//4 8 12 16
    Print1DArr(arr2,Length);
*/
   /*

    int arr1[] = {1};
    int *arr2=arr1; // arr2 contains the same arr1 reference in the memory.therefore when you modify arr1 ,arr2 will effects and vice versa.
    cout << "Arr1[0]: " << arr1[0] << endl;//1
    cout << "Arr2[0]: " << arr2[0] << endl;//1
    cout<<"--------------------------\n";
    arr1[0]=50;
    cout << "Arr1[0]: " << arr1[0] << endl;//50
    cout << "Arr2[0]: " << arr2[0] << endl;//50
    cout<<"--------------------------\n";
    arr2[0]=100;
    cout << "Arr1[0]: " << arr1[0] << endl;//100
    cout << "Arr2[0]: " << arr2[0] << endl;//100
    cout<<"--------------------------\n";*/


    //Value Type -> Stored In Stack

    int Number=50;
    cout<<"Number Before Duplication: "<<Number<<endl;//50

    DuplicateNumber(Number);
    cout<<"Number After Duplication: "<<Number<<endl;//50


    int num2=num1; //here num2 go and store in another store in stack ,not the same store as what happen in reference type.  

    return 0;
}

