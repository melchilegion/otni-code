#include <stdio.h>
#include <stdlib.h> // For memory allocation

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif

// Function to calculate the length of each string in the string_array
integer_array* my_count_on_it(string_array* param_1)
{
    if (param_1 == NULL || param_1->array == NULL)
        return NULL; // Handle invalid input

    integer_array* result = (integer_array*)malloc(sizeof(integer_array));
    if (result == NULL)
        return NULL; // Memory allocation failed

    result->size = param_1->size;
    result->array = (int*)malloc(param_1->size * sizeof(int));
    if (result->array == NULL)
    {
        free(result); // Clean up memory
        return NULL; // Memory allocation failed
    }

    // Calculate the length of each string and store it in the result array
    for (int i = 0; i < param_1->size; ++i)
    {
        int len = 0;
        if (param_1->array[i] != NULL)
        {
            while (param_1->array[i][len] != '\0')
                ++len;
        }
        result->array[i] = len;
    }

    return result;
}
