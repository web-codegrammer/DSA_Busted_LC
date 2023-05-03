#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <iostream>
#include <algorithm>
using namespace std;

int cmpfunc(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main(int argc, char *a[])
{
    //Write code here
    int N = argc - 2;
    int X = atoi(a[1]);
    int energy_levels[N];
    for (int i = 0; i < N; i++) {
        energy_levels[i] = atoi(a[i+2]);
    }

    qsort(energy_levels, N, sizeof(int), cmpfunc);

    int min_P = energy_levels[0];
    int max_P = energy_levels[N-1];
    int ans = -1;

    while (min_P <= max_P) {
        int mid_P = (min_P + max_P) / 2;
        int num_animals = 0;
        for (int i = 0; i < N; i++) {
            if (energy_levels[i] >= mid_P) {
                num_animals++;
            }
        }
        if (num_animals >= X) {
            ans = mid_P;
            min_P = mid_P + 1;
        } else {
            max_P = mid_P - 1;
        }
    }
    cout << ans << endl;

    return 0;
}