#include <stdio.h>
#include <stdbool.h>

int linear_search(int[], int, int, int *);
bool validate_size(int);
int read_size();

int main()
{
    bool is_valid = true;
    int size, key;

    do
    {
        size = read_size();

        if (validate_size(size))
        {
            break;
        }

        printf("Please enter a valid array size...\n");

    } while (is_valid);

    int number[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter %d array element: ", i + 1);
        scanf("%d", &number[i]);
    }

    printf("Enter the search element: ");
    scanf("%d", &key);

    int comparisons = 0;

    int position = linear_search(number, key, size, &comparisons);

    if (position == -1)
    {
        printf("%d is not found\n", key);
    }
    else
    {
        printf("%d found at index %d\n", key, position);
    }

    printf("Number of comparisons made: %d\n", comparisons);

    return 0;
}

bool validate_size(int arraysize)
{
    if (arraysize <= 1)
    {
        return false;
    }

    return true;
}

int read_size()
{
    int size;

    printf("Enter the array size: ");
    scanf("%d", &size);

    return size;
}

int linear_search(int myarray[], int searchkey,int arraysize, int *comparisons)
{
    *comparisons=0;
    for (int i = 0; i < arraysize; i++)
    {
        (*comparisons)++;

        if (myarray[i] == searchkey)
        {
            return i;
        }
    }

    return -1;
}
