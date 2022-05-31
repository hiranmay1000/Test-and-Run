#include <iostream>
using namespace std;

void arraySeperate(int arr[], int size)
{
    int evenArr[50];
    int oddArr[50];

    int j = 0; // declaration of 'j' and 'k' is because in the new array it should only iterate upto 'j' and 'k' in the cout statement
    int k = 0;

    // loop for finding even no.
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenArr[j] = arr[i];
            j++;
        }
    }

    // loop for finding odd no.
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            oddArr[k] = arr[i];
            k++;
        }
    }

    cout << "Even elements in an array are: " << endl;
    for (size_t i = 0; i < j; i++)
    {
        cout << evenArr[i] << " ";
    }

    cout << endl
         << "Odd elements in an array are: " << endl;
    for (size_t i = 0; i < k; i++)
    {
        cout << oddArr[i] << " ";
    }
}

// sort array in ascending order
// user == 2
void sortArrInAscending(int arr[], int size)
{
    int val = 0;
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Elements in ascending order are: ";
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// sort array in descending order
void sortArrInDescending(int arr[], int size)
{
}

// reverse an array
// user == 4
void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    for (size_t i = 0; start <= end; i++)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    cout << "Arrays after reversal: ";
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// to insert New value in the array (sorted list
// user 6
void insertEleInArr(int arr[], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] != i)
        {
            arr[i] = i;
        }
    }

    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// Main function
int main(int argc, char const *argv[])
{
    // taking input for initialization
    int user;
    cout << "Enter 1 to print separate odd and even integers in separate arrays >>" << endl
         << "Enter 2 to sort elements in ascending order: " << endl
         << "Enter 3 to sort elements in descending order: " << endl
         << endl
         << "Enter 4 to reverse an array: " << endl
         << "Press 6 to insert value in an array: ";
    cin >> user;

    // declaring array size and taking input in array
    int arr[100];
    int size = sizeof(arr) / sizeof(arr[0]);
    // cout << "Enter array size: ";
    // cin >> size;
    int n;
    cin >> n;

    // taking input for array in a row using loop
    cout << "Elements: \n";
    for (size_t i = 0; i < size; i++)
    {
        cout << "  [" << i + 1 << "]: ";
        cin >> arr[i];
        n--;
    }

    // code execution
    switch (user)
    {
    // separate odd and even integers in separate arrays
    case 1:
        arraySeperate(arr, size);
        break;

    // sort elements in ascending order
    case 2:
        sortArrInAscending(arr, size);
        break;

    // sort elements in descending order
    case 3:
        sortArrInDescending(arr, size);
        break;

    // reverse an array
    case 4:
        reverseArray(arr, size);
        break;

    // to insert New value in the array (sorted list)
    case 6:
        insertEleInArr(arr, size);
        break;

    default:
        cout << endl
             << "Enter a valid input >>";
    }

    return 0;
}
