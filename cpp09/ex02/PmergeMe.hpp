/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:02:36 by sghajdao          #+#    #+#             */
/*   Updated: 2023/05/24 12:02:37 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <chrono>

class PmergeMe {
    private:
        std::list<std::string> list;
        std::vector<int> vect;
        std::deque<int> deq;
    public:
        PmergeMe();
        PmergeMe(std::string in);
        ~PmergeMe();
        PmergeMe(PmergeMe const &src);
        PmergeMe operator=(PmergeMe const &src);

        std::list<std::string> split(const std::string& str, const char delimeter);

        bool checkInput(std::string in);
        void printList(std::string in);
        void pushToVect();
        void pushToDeq();

        void insertionSort(int flag);

        void vectorMerge(int left, int mid, int right);
        void dequeMerge(int left, int mid, int right);
        void mergeSort(int flag, int left, int right);
};

#endif