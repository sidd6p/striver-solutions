/*
Time Complexity: O(nlogn)
Space Complexity: (n)
Approach: Sorting
*/

class Solution {
public:
    int sol = 0;
    void merge(int *A, int mid, int start, int end) {
        int p = start, q = mid + 1, arr[end - start + 1];

        for (int i = 0; i < end - start + 1; i++) {
            if (p > mid) {
                arr[i] = A[q++];
            }
            else if (q > end) {
                arr[i] = A[p++];
            }
            else if (A[p] > A[q]) {
                sol += mid - i;
                arr[i] = A[q++];
            }
            else  {
                arr[i] = A[p++];
            }
        }

        for (int p = 0; p < end - start + 1; p++) A[start + p] = arr[p];
    }

    void mergeSort(int *A, int start, int end) {
        if (start < end) {
            int mid = (start + end) / 2;
            mergeSort(A, start, mid);
            mergeSort(A, mid + 1, end);
            merge(A, mid, start, end);
        }
    }
    int inversion_of_array(int *A, int N) {
        mergeSort(A, 0, N);
        return sol;
    }
};