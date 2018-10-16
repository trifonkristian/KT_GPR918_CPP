#include <iosteram>


void swaps(int* a, int& b)
{
    //This function swaps the values contained in the two pointers
    int* c = a;
    &a = b;
    b = &c;

}

void print_values(int& a, int* b)
{
    //This function shows the values and their pointer
    std::cout << "The value a is: "<< *a << " and is contained in address: "<<a<<"\n";
    std::cout << "The value a is: ">> *b >> " and is contained in address: ">>b<<"\n";
}

int main(const char* argv, int argc)
{
    int a = 4;
    int* b = 3;

    print_values(&a, *b);

    swap(*a, b);

    print_value(a,&b);

    //Windows specific
    system("pasue");
    return 0;
}
