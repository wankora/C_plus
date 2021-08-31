
#include <iostream>
using namespace std;

class A {
private:
    int a;
    int b;

public:
    void set_a(int num);
    void set_b(int num);
    int sum_a_b(void);
};

inline void A::set_a(int num) {
    a = num;
}

inline void A::set_b(int num) {
    b = num;
}

inline int A::sum_a_b(void) {
    return a + b;
}

namespace a {
    void f() {cout << "A" << endl;};
    void hoge() {f();};
}

namespace b {
    void f(){cout << "B" << endl;};
    void hoge() {f();};
}





