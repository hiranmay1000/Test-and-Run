#include <iostream>
using namespace std;

void arraySeperate(int arr[], int size)
{
    // At first sorting whole array
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

    // Seperating elements
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
// user = 3
void sortArrInDescending(int arr[], int size)
{
    cout << endl;
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
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

// swap elements in the array alternatively
// user = 5
// ..................................
// void altEleInArr(int arr[], int size)
// {
//     int start = 0;
//     int end = sizeof(arr) / sizeof(arr[0]) - 1;

//     for (size_t i = 0; i < size; i++)
//     {
//         int temp = arr[start];
//         arr[start] = arr[start];
//         arr[start] = temp;
//     }

//     for (size_t i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// to insert New value in the array (sorted list
// user 6
void insertEleInArr(int arr[], int size)
{
    int n;
    cout << "Insert position: ";
    cin >> n;

    int num;
    cout << "Element you want to insert: ";
    cin >> num;

    for (size_t i = size; i >= n; i--)
    {
        arr[i] = arr[i - 1];
        arr[i] = num;
        size++;
    }

    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
}

// Find duplicate in an array
void findDuplicate(int arr[], int size)
{
    int ans = 0;

    for (size_t i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    for (size_t i = 0; i < size; i++)
    {
        ans = ans ^ i;
    }

    cout << ans;
}
//
//
//
//
//
//
// .........MAIN FUCTION...........................
int main(int argc, char const *argv[])
{
    // taking input for initialization
    int user;
    cout << "Press 1 to print separate odd and even integers in separate arrays >>" << endl
         << "Press 2 to sort elements in ascending order: " << endl
         << "Press 3 to sort elements in descending order: " << endl
         << "Press 4 to reverse an array: " << endl
         << "Press 5 to swap elements alternatively: " << endl
         << "Press 6 to insert value in an array: " << endl
         << "Press 7 to find duplicate: ";
    cin >> user;

    // declaring array size and taking input in array
    int arr[100];
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter array size: ";
    cin >> size;

    // taking input for array in a row using loop
    cout << "Elements: \n";
    for (size_t i = 0; i < size; i++)
    {
        cout << "  [" << i + 1 << "]: ";
        cin >> arr[i];
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

    case 5:
        // altEleInArr(arr, size);
        break;

    // to insert New value in the array (sorted list)
    case 6:
        insertEleInArr(arr, size);
        break;

    case 7:
        findDuplicate(arr, size);
        break;

    default:
        cout << endl
             << "Enter a valid input >>";
        break;
        return 0;
    }

    return 0;
}
