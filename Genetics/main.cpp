#include <iostream>
#include <fstream>
#include <sstream>
// #include <string>

using namespace std;

int main()
{
    std::ifstream file("sequences/dnaA.txt");
    if ( file )
    {
        std::stringstream buffer;

        buffer << file.rdbuf();

        file.close();

        std::cout << buffer.str();
    }

    // cout << "Hello world!" << endl;
    return 0;
}
