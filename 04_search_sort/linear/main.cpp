#include <iostream>

const int N = 10;
int A[N] = {-999,-666,-224,-10,1,5,100,888,889,999};
int A2[N] = {1,2,3,4,5,6,7,8,9,10};
int A3[N] = {0,10,10,10,11,12,12,13,14,14};
int A4[N] = {666,666,666,666,666,666,666,666,666,666};

int linearSearch(const int *a, int n, int x, int *result) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            result[count] = i;
            count++;
        }
    }
    return count;
}

void test(const int *a, int x) {
    std::cout << "x = " << x << std::endl;
    int result[N];
    int count;

    count = linearSearch(a, N, x, result);
    std::cout << "Linear, count: " << count << std::endl;
    std::cout << "Linear, result: ";
    for (int i = 0; i < count; i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;
}

int main() {
    test(A, 889);
    test(A2, 7);
    test(A3, 10);
    test(A4, 666);
    return 0;
}