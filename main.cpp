#include <iostream>
#include "vector"
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    int sum = 0;
    string str = "";

    vector<int> arr;
    for (int i = a; i < b; i++) {
        arr.push_back(i);
    }
    for (int i = a; i < arr.size() - 1; i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if ((arr[i] + arr[j]) % 7 == b % 7) {
                cout << "Sum of numbers2: " << arr[i] + arr[j] << endl;
                cout << "a un b: " << arr[i] << " " << arr[j] << endl;
            }
        }
    }
    for (int i = a; i < arr.size(); i++) {
        sum += arr[i];
        str += to_string(arr[i]) + " ";
        if (sum % 7 == b % 7) {
            cout << "Sum of numbers: " << sum << endl;
            cout << "skaitļi: " << str << endl;
        }
    }
}
