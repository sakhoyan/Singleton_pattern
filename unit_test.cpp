#include <iostream>
#include "singleton"

int main(){
    A* ob1 = A::foo();
    ob1->set_val(7);
    A* ob2 = A::foo();
    std::cout << ob2->get_val() << std::endl;
}
