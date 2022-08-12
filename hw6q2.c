#define _CRT_SECURE_NO_WARNINGS

#define I_KNOW 1
#define I_DONT_KNOW 0


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int find(int arr[], int n, int x);
void PrintIDontKnow();
void PrintIKnow();
void test();

int main()
{
    // If you don't know uncomment next line
    // PrintIDontKnow();
    PrintIKnow();
    test();
    return 0;
}

void test()
{
	int arr[] = { 0, -2, -3, 4, 6, -9 };
	int n = 6;
	printf("%d\n", find(arr, n, -3));
	printf("%d\n", find(arr, n, 2));
}

int find(int arr[], int n, int x)
{
    int low = 0, mid, high = n;
    while(low <= high)
    {
        mid = (low+high)/2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] == -x)
            return -1;
        if (abs(x) < abs(arr[mid]))
            high = mid - 1;
        if (abs(x) > abs(arr[mid]))
            low = mid + 1;
    }
    return -1;
}

void PrintIDontKnow()
{
    printf("%d\n", I_DONT_KNOW);
}

void PrintIKnow()
{
    printf("%d\n", I_KNOW);
}

