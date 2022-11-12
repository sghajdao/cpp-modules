/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:07:06 by sghajdao          #+#    #+#             */
/*   Updated: 2022/11/12 12:59:27 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

/* int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    return 0;
} */

int main()
{
    std::list<int>  lst;
    MutantStack<int> mts;
    
    for(int i = 0; i <= 30; i += 3)
    {
        lst.push_back(i);
        mts.push(i);
    }
    
    std::list<int>::iterator    lst_it = lst.begin();
    std::list<int>::iterator    lst_ite = lst.end();

    MutantStack<int>::iterator  mts_it = mts.begin();
    MutantStack<int>::iterator  mts_ite = mts.end();
    
    std::cout << "\033[34mlist:\033[0m" << std::endl;
    while (lst_it != lst_ite)
    {
        std::cout << *lst_it << std::endl;
        lst_it++;
    }
    std::cout << "\033[34mMutantStack:\033[0m" << std::endl;
    while (mts_it != mts_ite)
    {
        std::cout << *mts_it << std::endl;
        mts_it++;
    }
}
