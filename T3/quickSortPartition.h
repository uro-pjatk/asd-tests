#include <iostream>
#include <algorithm>
#include <vector>
#include "partition.h"

void quickSortPartition(std::vector<int> E, int &partitionCallAmount) {

    int m = 0, size = (int) E.size();

    printf("Argument wykonania :    ");
    print(E);

    partitionCallAmount++;
    m = partition(E);

    if (m > 1) {
        printf("\nLewe wywołanie rekurencyjne QuickSortPartition\n");
        quickSortPartition(std::vector<int>(&E[0], E.data() + m), partitionCallAmount);
    }

    if ((size - m - 1) > 1) {
        printf("\nPrawe wywołanie rekurencyjne QuickSortPartition\n");
        quickSortPartition(std::vector<int>(&E[m + 1], E.data() + size), partitionCallAmount);
    }
}
