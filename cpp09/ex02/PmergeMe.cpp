/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:02:33 by sghajdao          #+#    #+#             */
/*   Updated: 2023/05/25 13:40:02 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(std::string in) {

    if (checkInput(in) == true)
    {
        printList(in);
        int step = vect.size() / 10;
        int i = 0;
        int j = 0;

        clock_t begin_time = clock();
        pushToVect();
        while (j < step) {
            mergeSort(0, i, i + 10);
            j++;
            i += 10;
        }
        mergeSort(0, i, vect.size() - 1);
        insertionSort(0);
        float t1 = (float)( clock () - begin_time )/CLOCKS_PER_SEC;

        begin_time = clock();
        pushToDeq();
        step = deq.size() / 10;
        i = 0; j = 0;
        while (j < step) {
            mergeSort(1, i, i + 10);
            j++;
            i += 10;
        }
        mergeSort(1, i, deq.size() - 1);
        insertionSort(1);
        float t2 = (float)( clock () - begin_time )/CLOCKS_PER_SEC;

        std::vector<int>::iterator it = vect.begin();
        std::cout << "After:     ";
        for(; it < vect.end(); it++) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;
        std::cout << "Time to process a range of " << vect.size() << " elements with std::vector :  " << t1 * 1000000 << " us" << std::endl;
        std::cout << "Time to process a range of " << deq.size() << " elements with std::deque :  " << t2 * 1000000 << " us" << std::endl;
    }
    else
        std::cout << "Error\n";
}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const &src) {
    *this = src;
}

PmergeMe PmergeMe::operator=(PmergeMe const &src) {
    this->vect = src.vect;
    this->deq = src.deq;
    return *this;
}

void PmergeMe::printList(std::string in) {
    list = split(in, ' ');
    std::cout << "Before:     ";
    std::list<std::string>::iterator itt = list.begin();
    for (; itt != list.end(); itt++) {
        std::cout << *itt << " ";
    }
    std::cout << std::endl;
}

bool PmergeMe::checkInput(std::string in) {
    for(size_t i = 0; i < in.size(); i++) {
        if ((in[i] > '9' || in[i] < '0') && in[i] != ' ')
            return false;
    }
    return true;
}

void PmergeMe::pushToVect() {
    std::list<std::string>::iterator it = list.begin();

    for (; it != list.end(); it++) {
        vect.push_back(std::stoi(*it));
    }

    // std::vector<int>::iterator itt = vect.begin();
    // for (; itt != vect.end(); itt++) {
    //     std::cout << *itt << std::endl;
    // }
}

void PmergeMe::pushToDeq() {
    std::list<std::string>::iterator it = list.begin();

    for (; it != list.end(); it++) {
        deq.push_back(std::stoi(*it));
    }

    // std::deque<int>::iterator itt = deq.begin();
    // for (; itt != deq.end(); itt++) {
    //     std::cout << *itt << std::endl;
    // }
}

void PmergeMe::insertionSort(int flag) {
    if (flag == 0) {
        std::vector<int>::iterator it = vect.begin();
        ++it;
        for(; it < vect.end(); it++) {
            if (*it < *(it - 1)) {
                std::vector<int>::iterator it2 = it;
                while (*it < *(it - 1) && it != vect.begin()) {
                    std::iter_swap(it, it - 1);
                    it--;
                }
                it = it2;
            }
        }
        // std::vector<int>::iterator itt = vect.begin();
        // for(; itt < vect.end(); itt++) {
        //     std::cout << *itt << " ";
        // }
        // std::cout << std::endl;
    }
    else {
        for (size_t i = 1; i < deq.size(); ++i) {
            int key = deq[i];
            size_t j = i;
            while (j > 0 && deq[j - 1] > key) {
                deq[j] = deq[j - 1];
                --j;
            }
            deq[j] = key;
        }

        // std::deque<int>::iterator itt = deq.begin();
        // for(; itt < deq.end(); itt++) {
        //     std::cout << *itt << " ";
        // }
        // std::cout << std::endl;
    }
}

std::list<std::string> PmergeMe::split(const std::string& str, const char delimeter) {
    std::list<std::string> splited;
    size_t cursorPos = 0;
    size_t delimeterPos;

    while ((delimeterPos = str.find(delimeter, cursorPos)) != std::string::npos) {
        splited.push_back(str.substr(cursorPos, delimeterPos - cursorPos));
        while (str.at(delimeterPos) == delimeter) {
            if (++delimeterPos == str.length()) return splited;
        }
        cursorPos = delimeterPos;
    }
    splited.push_back(str.substr(cursorPos));
    return splited;
}

void PmergeMe::vectorMerge(int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> L(n1);
    std::vector<int> R(n2);

    for (int i = 0; i < n1; ++i) {
        L[i] = vect[left + i];
    }
    for (int j = 0; j < n2; ++j) {
        R[j] = vect[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vect[k] = L[i];
            ++i;
        } else {
            vect[k] = R[j];
            ++j;
        }
        ++k;
    }

    while (i < n1) {
        vect[k] = L[i];
        ++i;
        ++k;
    }

    while (j < n2) {
        vect[k] = R[j];
        ++j;
        ++k;
    }
}

void PmergeMe::dequeMerge(int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::deque<int> L1(n1);
    std::deque<int> R1(n2);

    for (int i = 0; i < n1; ++i) {
        L1[i] = deq[left + i];
    }
    for (int j = 0; j < n2; ++j) {
        R1[j] = deq[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (L1[i] <= R1[j]) {
            deq[k] = L1[i];
            ++i;
        } else {
            deq[k] = R1[j];
            ++j;
        }
        ++k;
    }

    while (i < n1) {
        deq[k] = L1[i];
        ++i;
        ++k;
    }

    while (j < n2) {
        deq[k] = R1[j];
        ++j;
        ++k;
    }
}

void PmergeMe::mergeSort(int flag, int left, int right)
{
    if (left < right) {
        int mid = left + (right - left) / 2;

        if (flag == 0) {
            mergeSort(0, left, mid);
            mergeSort(0, mid + 1, right);
            vectorMerge(left, mid, right);
        }
        else {
            mergeSort(1, left, mid);
            mergeSort(1, mid + 1, right);
            dequeMerge(left, mid, right);
        }
    }
}
