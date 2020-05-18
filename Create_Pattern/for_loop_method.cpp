// C++ Program To Print Given Pattern
// Author:- Ajinkya Patil
// Github:- https://github.com/Ajinkya7poppyi/

#include <iostream>

using namespace std;

/*Character Printing Function*/
void charprint(char start_first_char, char start_second_char, size_t loop_num)
{
    /*Count for every loop to start*/
    for(size_t loop_count=0; loop_count<loop_num; loop_count++)
    {
        /*Loop for Character*/
        for(size_t i=0; i<loop_count; i++)
        {
            cout<<(char)(start_first_char+i);
        }

        /*Loop for Numbers*/
        for(size_t i=0; i<loop_count; i++)
        {
            cout<<(char)(start_second_char+i);
        }
        cout<<endl;
    }
}

/*Main Loop*/
int main()
{
    cout << "C++ Program To Print Values in Following Pattern n times" << endl;
    cout << "A1"<<endl<<"AB12"<<endl<<"....."<<endl;
    cout << "Output"<<endl;

    charprint('A','1',12);
    return 0;
}