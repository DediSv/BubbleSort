//BubbleSort(MAX...MIN)
#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector <int> &array){
    for (int i = 0; i < array.size(); i++){
        for (int j = 0; j < array.size() - 1 - i; j++)
            if (array[j] > array[j + 1])
                swap(array[j],array[j + 1]);
    }
}

void printRes(vector <int> array){
    for (int i = array.size(); i > 0; i--)
        cout << array[i - 1] << " ";
}


int main() {
    int n;
    cout << "Enter the array size:\n";
    cin >> n;
    vector <int> array(n);
    cout << "Enter your array:\n";
    for (int i = 0; i < n; i++ )
        cin >> array[i];
    bubbleSort(array);
    printRes(array);
    return 0;
}
