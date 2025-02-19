#include <iostream>
#include <vector>
using namespace std;

void burbuja(vector<int>& vec) {
    int n = vec.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vec[j] > vec[j + 1]) {
                swap(vec[j], vec[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;

    vector<int> vec(n);
    cout << "Ingrese los elementos del vector: ";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    burbuja(vec);

    cout << "Vector ordenado: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
