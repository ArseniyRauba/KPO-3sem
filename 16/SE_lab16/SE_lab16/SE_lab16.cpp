#include "FST.h"
#include <iostream>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[])
{
    setlocale(LC_ALL, "rus");
    FST::FST fst1(
        "abcbldbleblf",
        8,
        FST::NODE(1, FST::RELATION('a', 1)),
        FST::NODE(5, FST::RELATION('b', 1), FST::RELATION('l', 5), FST::RELATION('c', 2), FST::RELATION('d', 3), FST::RELATION('e', 4)),
        FST::NODE(1, FST::RELATION('b', 5)),
        FST::NODE(1, FST::RELATION('b', 5)),
        FST::NODE(1, FST::RELATION('b', 5)),
        FST::NODE(3, FST::RELATION('b', 5), FST::RELATION('l', 6), FST::RELATION('l', 1)),
        FST::NODE(2, FST::RELATION('f', 7), FST::RELATION('b', 6)),
        FST::NODE()
                    );
    if (FST::execute(fst1))
    {
        std::cout << "Цепочка: " << fst1.string << " распознана" << std::endl;
    }
    else
    {
        std::cout << "Цепочка: " << fst1.string << " не распознана" << std::endl;
    }

    FST::FST fst2(
        "acbldblf",
        8,
        FST::NODE(1, FST::RELATION('a', 1)),
        FST::NODE(5, FST::RELATION('b', 1), FST::RELATION('l', 5), FST::RELATION('c', 2), FST::RELATION('d', 3), FST::RELATION('e', 4)),
        FST::NODE(1, FST::RELATION('b', 5)),
        FST::NODE(1, FST::RELATION('b', 5)),
        FST::NODE(1, FST::RELATION('b', 5)),
        FST::NODE(3, FST::RELATION('b', 5), FST::RELATION('l', 6), FST::RELATION('l', 1)),
        FST::NODE(2, FST::RELATION('f', 7), FST::RELATION('b', 6)),
        FST::NODE()
    );
    if (FST::execute(fst2))
    {
        std::cout << "Цепочка: " << fst2.string << " распознана" << std::endl;
    }
    else
    {
        std::cout << "Цепочка: " << fst2.string << " не распознана" << std::endl;
    }

    FST::FST fst3(
        "adbleblf",
        8,
        FST::NODE(1, FST::RELATION('a', 1)),
        FST::NODE(5, FST::RELATION('b', 1), FST::RELATION('l', 5), FST::RELATION('c', 2), FST::RELATION('d', 3), FST::RELATION('e', 4)),
        FST::NODE(1, FST::RELATION('b', 5)),
        FST::NODE(1, FST::RELATION('b', 5)),
        FST::NODE(1, FST::RELATION('b', 5)),
        FST::NODE(3, FST::RELATION('b', 5), FST::RELATION('l', 6), FST::RELATION('l', 1)),
        FST::NODE(2, FST::RELATION('f', 7), FST::RELATION('b', 6)),
        FST::NODE()
    );
    if (FST::execute(fst3))
    {
        std::cout << "Цепочка: " << fst3.string << " распознана" << std::endl;
    }
    else
    {
        std::cout << "Цепочка: " << fst3.string << " не распознана" << std::endl;
    }

    FST::FST fst4(
        "adblf",
        8,
        FST::NODE(1, FST::RELATION('a', 1)),
        FST::NODE(5, FST::RELATION('b', 1), FST::RELATION('l', 5), FST::RELATION('c', 2), FST::RELATION('d', 3), FST::RELATION('e', 4)),
        FST::NODE(1, FST::RELATION('b', 5)),
        FST::NODE(1, FST::RELATION('b', 5)),
        FST::NODE(1, FST::RELATION('b', 5)),
        FST::NODE(3, FST::RELATION('b', 5), FST::RELATION('l', 6), FST::RELATION('l', 1)),
        FST::NODE(2, FST::RELATION('f', 7), FST::RELATION('b', 6)),
        FST::NODE()
    );
    if (FST::execute(fst4))
    {
        std::cout << "Цепочка: " << fst4.string << " распознана" << std::endl;
    }
    else
    {
        std::cout << "Цепочка: " << fst4.string << " не распознана" << std::endl;
    }

    FST::FST fst5(
        "adbldblf",
        8,
        FST::NODE(1, FST::RELATION('a', 1)),
        FST::NODE(5, FST::RELATION('b', 1), FST::RELATION('l', 5), FST::RELATION('c', 2), FST::RELATION('d', 3), FST::RELATION('e', 4)),
        FST::NODE(1, FST::RELATION('b', 5)),
        FST::NODE(1, FST::RELATION('b', 5)),
        FST::NODE(1, FST::RELATION('b', 5)),
        FST::NODE(3, FST::RELATION('b', 5), FST::RELATION('l', 6), FST::RELATION('l', 1)),
        FST::NODE(2, FST::RELATION('f', 7), FST::RELATION('b', 6)),
        FST::NODE()
    );
    if (FST::execute(fst5))
    {
        std::cout << "Цепочка: " << fst5.string << " распознана" << std::endl;
    }
    else
    {
        std::cout << "Цепочка: " << fst5.string << " не распознана" << std::endl;
    }

    FST::FST fst6(
        "acblf",
        8,
        FST::NODE(1, FST::RELATION('a', 1)),
        FST::NODE(5, FST::RELATION('b', 1), FST::RELATION('l', 5), FST::RELATION('c', 2), FST::RELATION('d', 3), FST::RELATION('e', 4)),
        FST::NODE(1, FST::RELATION('b', 5)),
        FST::NODE(1, FST::RELATION('b', 5)),
        FST::NODE(1, FST::RELATION('b', 5)),
        FST::NODE(3, FST::RELATION('b', 5), FST::RELATION('l', 6), FST::RELATION('l', 1)),
        FST::NODE(2, FST::RELATION('f', 7), FST::RELATION('b', 6)),
        FST::NODE()
    );
    if (FST::execute(fst6))
    {
        std::cout << "Цепочка: " << fst6.string << " распознана" << std::endl;
    }
    else
    {
        std::cout << "Цепочка: " << fst6.string << " не распознана" << std::endl;
    }

    FST::FST fst7(
        "acblcbldbldbleblf",
        8,
        FST::NODE(1, FST::RELATION('a', 1)),
        FST::NODE(5, FST::RELATION('b', 1), FST::RELATION('l', 5), FST::RELATION('c', 2), FST::RELATION('d', 3), FST::RELATION('e', 4)),
        FST::NODE(1, FST::RELATION('b', 5)),
        FST::NODE(1, FST::RELATION('b', 5)),
        FST::NODE(1, FST::RELATION('b', 5)),
        FST::NODE(3, FST::RELATION('b', 5), FST::RELATION('l', 6), FST::RELATION('l', 1)),
        FST::NODE(2, FST::RELATION('f', 7), FST::RELATION('b', 6)),
        FST::NODE()
    );
    if (FST::execute(fst7))
    {
        std::cout << "Цепочка: " << fst7.string << " распознана" << std::endl;
    }
    else
    {
        std::cout << "Цепочка: " << fst7.string << " не распознана" << std::endl;
    }

    FST::FST fst8(
        "abcblb",
        8,
        FST::NODE(1, FST::RELATION('a', 1)),
        FST::NODE(5, FST::RELATION('b', 1), FST::RELATION('l', 5), FST::RELATION('c', 2), FST::RELATION('d', 3), FST::RELATION('e', 4)),
        FST::NODE(1, FST::RELATION('b', 5)),
        FST::NODE(1, FST::RELATION('b', 5)),
        FST::NODE(1, FST::RELATION('b', 5)),
        FST::NODE(3, FST::RELATION('b', 5), FST::RELATION('l', 6), FST::RELATION('l', 1)),
        FST::NODE(2, FST::RELATION('f', 7), FST::RELATION('b', 6)),
        FST::NODE()
    );
    if (FST::execute(fst8))
    {
        std::cout << "Цепочка: " << fst8.string << " распознана" << std::endl;
    }
    else
    {
        std::cout << "Цепочка: " << fst8.string << " не распознана" << std::endl;
    }

    FST::FST fst9(
        "gtr",
        8,
        FST::NODE(1, FST::RELATION('a', 1)),
        FST::NODE(5, FST::RELATION('b', 1), FST::RELATION('l', 5), FST::RELATION('c', 2), FST::RELATION('d', 3), FST::RELATION('e', 4)),
        FST::NODE(1, FST::RELATION('b', 5)),
        FST::NODE(1, FST::RELATION('b', 5)),
        FST::NODE(1, FST::RELATION('b', 5)),
        FST::NODE(3, FST::RELATION('b', 5), FST::RELATION('l', 6), FST::RELATION('l', 1)),
        FST::NODE(2, FST::RELATION('f', 7), FST::RELATION('b', 6)),
        FST::NODE()
    );
    if (FST::execute(fst9))
    {
        std::cout << "Цепочка: " << fst9.string << " распознана" << std::endl;
    }
    else
    {
        std::cout << "Цепочка: " << fst9.string << " не распознана" << std::endl;
    }
    system("pause");
    return 0;
}
