#include "UTP-2 (1).h"

using namespace std;

int main(int argc, char** argv)
{
    string  inp = "Hello, my name is Ivan. ";
    Encryption encrypt_class = 28513;
    /*cout << encrypt_class.show_key()<<endl;*/
    inp = encrypt_class.encode(inp);
    cout << inp << endl;
    inp = encrypt_class.decode(inp);
    cout << inp << endl;
    return 0;
}