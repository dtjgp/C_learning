//resizable array
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef struct
{
    int *array;
    int size;
    int capacity;
} resizable_array;

void init_array(resizable_array *ra, int capacity)
{
    ra->array = malloc(capacity * sizeof(int));
    ra->size = 0;
    ra->capacity = capacity;
}

void free_array(resizable_array *ra)
{
    free(ra->array);
}

void resize_array(resizable_array *ra, int new_capacity)
{
    int *new_array = malloc(new_capacity * sizeof(int));
    memcpy(new_array, ra->array, ra->size * sizeof(int));
    free(ra->array);
    ra->array = new_array;
    ra->capacity = new_capacity;
}

void add_to_array(resizable_array *ra, int value)
{
    if (ra->size == ra->capacity)
    {
        resize_array(ra, 2 * ra->capacity);
    }
    ra->array[ra->size++] = value;
}

int main(int argc, char const *argv[])
{
    resizable_array ra;
    init_array(&ra, 10);
    for (int i = 0; i < 100; i++)
    {
        add_to_array(&ra, i);
    }
    for (int i = 0; i < ra.size; i++)
    {
        printf("%d ", ra.array[i]);
    }
    printf("\n");
    free_array(&ra);
    return 0;
}

