/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:07:02 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/14 18:10:51 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &other) {
    *this = other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other) {
    if (this != &other) {
        vec = other.vec;
        lst = other.lst;
    }
    return *this;
}

PmergeMe::~PmergeMe() {}

void PmergeMe::insertion_sort_vec(std::vector<int> &vec, int left, int right)
{
    for (int i = left + 1; i <= right; ++i) {
        int key = vec[i];
        int j = i - 1;
        
        while (j >= left && vec[j] > key) {
            vec[j+1] = vec[j];
            j--;
        }
        
        vec[j+1] = key;
    }
}

void PmergeMe::merge_vec(std::vector<int> &vec, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    std::vector<int> L(n1), R(n2);
    
    for (int i = 0; i < n1; ++i) {
        L[i] = vec[left + i];
    }
    
    for (int j = 0; j < n2; ++j) {
        R[j] = vec[mid + 1 + j];
    }
    
    int i = 0, j = 0, k = left;
    
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vec[k] = L[i];
            i++;
        }
        else {
            vec[k] = R[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        vec[k] = L[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        vec[k] = R[j];
        j++;
        k++;
    }
}

void PmergeMe::sort_vec(std::vector<int> &vec, int left, int right, int k)
{
    if (left < right) {
        if (right - left + 1 <= k) {
            insertion_sort_vec(vec, left, right);
        }
        else { 
            int mid = left + (right - left) / 2;

            sort_vec(vec, left, mid, k);
            sort_vec(vec, mid+1, right, k);
            merge_vec(vec, left, mid, right);
        }
    }
}

int PmergeMe::check_is_num(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return 0;
        i++;
    }
    return 1;
}

std::list<int> PmergeMe::merge_lst(std::list<int> &left, std::list<int> &right)
{
  std::list<int> result;

  while (!left.empty() && !right.empty()) {
    if (left.front() <= right.front()) {
      result.push_back(left.front());
      left.pop_front();
    } else {
      result.push_back(right.front());
      right.pop_front();
    }
  }

  while (!left.empty()) {
    result.push_back(left.front());
    left.pop_front();
  }

  while (!right.empty()) {
    result.push_back(right.front());
    right.pop_front();
  }

  return result;
}

void PmergeMe::sort_lst(std::list<int> &list)
{
if (list.empty() || list.size() == 1) {
    return;
  }

  std::list<int> left, right;
  size_t count = 0;
  for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it) {
    if (count < list.size() / 2) {
      left.push_back(*it);
    } else {
      right.push_back(*it);
    }
    count++;
  }
  sort_lst(left);
  sort_lst(right);
  list = merge_lst(left, right);
}

int PmergeMe::stringToInt(const char* str) {
    int result = 0;
    int sign = 1;
    const char* ptr = str;

    // Handle leading whitespace
    while (*ptr == ' ' || *ptr == '\t')
        ++ptr;

    // Handle sign
    if (*ptr == '-') {
        sign = -1;
        ++ptr;
    }
    else if (*ptr == '+') {
        ++ptr;
    }

    // Convert digits to integer
    while (*ptr >= '0' && *ptr <= '9') {
        result = result * 10 + (*ptr - '0');
        ++ptr;
    }

    return result * sign;
}


double PmergeMe::sortt(char **av)
{
    std::clock_t s, e;
    double vecTime, listTime;
	int num;
    for (int i = 1; av[i]; i++)
    {
        if (av[i][0] == '-')
            throw std::invalid_argument("Error");
        if (check_is_num(av[i]))
        {
			num = stringToInt(av[i]);
            vec.push_back(num);
            lst.push_back(num);
        }
        else
            throw std::invalid_argument("Error");
    }
    std::cout << "Before: ";
    if (vec.size() <= (size_t)5)
    {
        for (size_t i = 0; i < vec.size(); i++)
            std::cout << vec[i] << " ";
        std::cout << std::endl;
    }
    else
    {
        for (size_t i = 0; i < 5; i++)
            std::cout << vec[i] << " ";
        std::cout << "[...]" << std::endl;
    }
    s = std::clock();
    sort_vec(vec, 0, vec.size() - 1, vec.size() / 4);
    e = std::clock();
    vecTime = (double)(e - s) / CLOCKS_PER_SEC * 1000;
    s = std::clock();
    sort_lst(lst);
    e = std::clock();
    listTime = (double)(e - s) / CLOCKS_PER_SEC * 1000;
    std::cout << "After:  ";
    if (vec.size() <= (size_t)5)
    {
        for (size_t i = 0; i < vec.size(); i++)
            std::cout << vec[i] << " ";
        std::cout << std::endl;
    }
    else
    {
        for (size_t i = 0; i < 5; i++)
            std::cout << vec[i] << " ";
        std::cout << "[...]" << std::endl;
    }
    std::cout << "Time to process a range of " << vec.size()<< " elements with std::vector: " << std::setprecision(5) << vecTime << " us" << std::endl;
    std::cout << "Time to process a range of " << vec.size() <<" elements with std::list: " << std::setprecision(5) << listTime << " us" << std::endl;
    return 0;
}
