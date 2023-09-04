#include <bits/stdc++.h>
using namespace std;


int main()
{
    NumberReverse nr;

    int input1 = 12340;
    int output1 = reverse(input1);
    std::cout << "Input 1: " << input1 << "\nOutput 1: " << output1 << std::endl;

    int input2 = 3233;
    int output2 = nr.reverse(input2);
    std::cout << "Input 2: " << input2 << "\nOutput 2: " << output2 << std::endl;

    int input3 = 1050;
    int output3 = nr.reverse(input3);
    std::cout << "Input 3: " << input3 << "\nOutput 3: " << output3 << std::endl;
}
