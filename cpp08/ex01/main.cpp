#include "Span.hpp"

int main()
{
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

// int main()
// {
//     try
//     {
//         Span sp = Span(100000);
//         std::vector<int> vect;
//         for(int i = 0; i < 100000; i++)
//         {
//             vect.push_back(i);
//         }
//         sp.addByIteratorRange(vect.begin(), vect.end());
//         std::cout << sp.shortestSpan() << std::endl;
//         std::cout << sp.longestSpan() << std::endl;
//     }
//     catch(std::exception &e)
//     {
//         std::cout << e.what() << std::endl;
//     }
// }

// int main()
// {
//     Span *sp;
//     Span *copy;
//     try
//     {
//         sp = new Span(10);
//         copy = new Span(*sp);
//         for(int i = 0; i < 18; i += 2)
//             (*sp).addNumber(i);
//         for(int i = 0; i < 10; i++)
//             (*copy).addNumber(i);
//         std::cout << "sp:" << std::endl;
//         std::cout << "shortest span: " << (*sp).shortestSpan() << std::endl;
//         std::cout << "longest span: " << (*sp).longestSpan() << std::endl;
//         std::cout << "copy:" << std::endl;
//         std::cout << "shortest span: " << (*copy).shortestSpan() << std::endl;
//         std::cout << "longest span: " << (*copy).longestSpan() << std::endl;
//     }
//     catch(std::exception &e)
//     {
//         std::cout << e.what() << std::endl;
//     }
//     delete sp;
//     delete copy;
// }
