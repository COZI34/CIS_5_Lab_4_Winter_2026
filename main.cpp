#include <iostream>
using namespace std;

int calculateSum(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

double getAverage(int sum, int size) {
    return static_cast<double>(sum) / size;
}

void addBonus(int arr[], int size, int bonus = 5) {
    for (int i = 0; i < size; i++) {
        arr[i] += bonus;
    }
}

int findHighest(const int* arr, int size) {
    int highest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > highest) {
            highest = arr[i];
        }
    }
    return highest;
}

int countPassed(const int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 70) {
            count++;
        }
    }
    return count;
}

int main() {
    int scores[5] = { 65, 82, 90, 45, 78 };
    int size = 5;

    cout << "Original Scores: ";
    for (int i = 0; i < size; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;

    int sum = calculateSum(scores, size);
    double average = getAverage(sum, size);

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    addBonus(scores, size);

    cout << "Scores After Bonus: ";
    for (int i = 0; i < size; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;

    int highest = findHighest(scores, size);
    int passed = countPassed(scores, size);

    cout << "Highest Score: " << highest << endl;
    cout << "Number Passed (≥ 70): " << passed << endl;

    return 0;
}
