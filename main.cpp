#include <iostream>
#include <string>

using namespace std;

void print_usage()
{
    cout << "PybindLLVM" << endl;
    cout << "==========" << endl;

    cout << "Usage: " << endl;
    cout << "pybindcpp <path to py script>" << endl;
}
int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        print_usage();
        return -1;
    }

    string script_name = argv[1];

    cout << script_name << endl;

    return 0;
}
