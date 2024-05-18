#ifndef SINGLETON
#define SINGLETON
class A
{
public:
    A(const A&) = delete;
    A() {}

    static A* foo()
    {
        if(ptr == nullptr)
        {
            ptr = new A;
        }
        return ptr;
    }

    void set_val(int value)
    {
        val = value;
    }

    int get_val() const {
        return val;
    }

private:
    static A* ptr;
    int val;
};

A* A::ptr = nullptr;

#endif //SINGLETON
