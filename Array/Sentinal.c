#include <stdio.h>

int main() 
{ 
    int arr[] = { 3, 5, 1, 8, 2 }; 
    int size = 5; 
    int target = 8; 
    
    // Store the last element in a temporary variable
    int last = arr[size - 1]; 
    
    // Set the last element to the target (sentinel)
    arr[size - 1] = target; 
    
    int i = 0;
    
    // Perform the search
    while (arr[i] != target) { 
        i++; 
    } 

    // Restore the last element
    arr[size - 1] = last; 
    
    // Check if the target was found
    if (i < size - 1 || arr[size - 1] == target) { 
        printf("Element %d found at index %d\n", target, i); 
    } else { 
        printf("Element %d not found\n", target); 
    }

    return 0; 
}
