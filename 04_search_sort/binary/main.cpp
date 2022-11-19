#include <iostream>

const int N = 10;
int A[N] = {-999,-666,-224,-10,1,5,100,888,889,999};
int A2[N] = {1,2,3,4,5,6,7,8,9,10};
int A3[N] = {0,10,10,10,11,12,12,13,14,14};
int A4[N] = {666,666,666,666,666,666,666,666,666,666};

int binarySearch(const int *a, int n, int x, int *result) {
    int count = 0;
    int l = 0, r = n - 1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == x) {
            result[count] = m;
            count++;
            int i = m - 1;
            while (i >= 0 && a[i] == x) {
                result[count] = i;
                count++;
                i--;
            }
            i = m + 1;
            while (i < n && a[i] == x) {
                result[count] = i;
                count++;
                i++;
            }
            break;
        } else if (a[m] > x) {
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    return count;
}

void test(const int *a, int x) {
    std::cout << "x = " << x << std::endl;
    int result[N];
    int count;

    count = binarySearch(a, N, x, result);
    std::cout << "Binary, count: " << count << std::endl;
    std::cout << "Binary, result: ";
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