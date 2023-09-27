#include <iostream>
#include "IntegerArray.h"

int main()
{
    int length = 10;

    try
    {
        IntArray array(length);

        for (int i = 0; i < length; ++i)
        {
            array[i] = i + 1;
        }

        std::cout << "Array length: " << array.getLength() << std::endl;
        std::cout << "Array elements: ";

        for (int i = 0; i < array.getLength(); ++i)
        {
            std::cout << array[i] << " ";
        }

        std::cout << std::endl;
    }
    catch (bad_range& e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (bad_length& e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}