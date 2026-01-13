#include <iostream>
using namespace std;

class Number {
    int value;

public:
    void setValue(int v) {
        value = v;
    }

    int getValue() {
        return value;
    }

    bool operator < (Number obj) {
        return value < obj.value;
    }
};

int main() {
    Number n1, n2;

    n1.setValue(55);
    n2.setValue(40);

    if (n1 < n2) {
        cout << "Object 2 has higher value: " << n2.getValue();
    } else {
        cout << "Object 1 has higher value: " << n1.getValue();
    }

    return 0;
}