#include <iostream>

using namespace std;

class MyInteger
{
    private:
        int i;
    public:
        void set(int);
        int get() const;    
};

void MyInteger::set(int a){
    i = a;
}

int MyInteger::get() const {
    return i;
}

int main(int argc, char const *argv[])
{
    MyInteger m;
    m.set(80);

    std::cout << "Conteudos: " << m.get() << std::endl;
    std::cout << "Olá Mundo \n" << std::endl;
    return 0;
}
