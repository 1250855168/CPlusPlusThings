#include<iostream>

using namespace std;

class Counter {
private:
    int n;
public:
    Counter(int i = 0) : n(i) {};

    Counter operator++();

    Counter operator++(int);

    friend Counter operator--(Counter &c);

     Counter operator--(int);

    void display();
};

Counter Counter::operator++() {
    ++n;
    return *this;
}

Counter Counter::operator++(int) {
    Counter t = *this;
    n++;
    return t;
}

Counter operator--(Counter &c) {
    --c.n;
    return c;
}

Counter Counter::operator--(int) {
    Counter t = *this;
    this->n--;
    return t;
}

void Counter::display() {
    cout << "counter number=" << n << endl;
}

int main(int argc, char const *argv[]) {
    Counter a;
    ++a;
    a.display();
    a++;
    a.display();
    --a;
    a.display();
    a--;
    a.display();
    return 0;
}
