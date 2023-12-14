#include "search_algos.h"

int jump_search(int *array, size_t size, int value) {
    size_t block_size, prev_index, i;
    char *check_msg = "Value checked array", *found_msg = "Value found between indexes";

    if (!array)
        return (-1);

    block_size = sqrt(size);
    prev_index = 0;

    while (prev_index < size) {
        printf("%s[%ld] = [%d]\n", check_msg, prev_index, array[prev_index]);

        if (array[prev_index] >= value || prev_index + block_size >= size) {
            printf("%s [%ld] and [%ld]\n", found_msg, prev_index, prev_index + block_size);

            for (i = prev_index; i <= prev_index + block_size && i < size; i++) {
                printf("%s[%ld] = [%d]\n", check_msg, i, array[i]);
                if (array[i] == value) {
                    printf("Value found at index %ld\n", i);
                    return (i);
                }
            }
        }

        prev_index += block_size;
    }

    return (-1);
}

