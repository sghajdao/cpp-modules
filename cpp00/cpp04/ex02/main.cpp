/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:25:21 by sghajdao          #+#    #+#             */
/*   Updated: 2022/08/03 13:26:46 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << "\033[0;32mConstructors\033[0;37m" << std::endl;
    Animal *animals[6];
    for(int i = 0; i <= 2; i++)
    {
        animals[i] = new Cat();
        if (animals[i] == NULL)
        {
            perror("Allocation failed");
            exit(1);
        }
        std::cout << animals[i]->getType() << std::endl;
        animals[i]->makeSound();
    }
    for(int i = 3; i <= 5; i++)
    {
        animals[i] = new Dog();
        if (animals[i] == NULL)
        {
            perror("Allocation failed");
            exit(1);
        }
        std::cout << animals[i]->getType() << std::endl;
        animals[i]->makeSound();
    }
    std::cout << "\033[0;31mDestructors\033[0;37m" << std::endl;
    for(int i = 0; i <= 5; i++)
        delete animals[i];
}

/* int main()
{
    std::cout << "\033[0;32mConstructors\033[0;37m" << std::endl;
    Cat *cats[3];
    for (int i = 0; i <= 2; i++)
    {
        cats[i] = new Cat();
        if (cats[i] == NULL)
        {
            perror("Allocation failed");
            exit(1);
        }
        if (i == 0)
            cats[i]->setIdeas(0, "I am hungry... Is this the smell of fish ?");
        else if (i == 1)
            cats[i]->setIdeas(0, "So tired... This pillow looks so comfy");
        else
            cats[i]->setIdeas(0, "Wipe my head");
    }
    for(int i = 0; i <= 2; i++)
    {
        cats[i]->makeSound();
        cats[i]->getIdeas();
    }
    std::cout << "\033[0;31mDestructors\033[0;37m" << std::endl;
    for(int i = 0; i <= 2; i++)
        delete cats[i];
} */

/* int main()
{
    std::cout << "\033[0;32mConstructors\033[0;37m" << std::endl;
    Dog *dog = new Dog();
    if (dog == NULL)
    {
        perror("Allocation failed");
        exit(1);
    }
    dog->makeSound();
    dog->setIdeas(0, "I have to sniff it");
    dog->setIdeas(100, "I have to pee on it");
    dog->getIdeas();
    std::cout << "\033[0;31mDestructors\033[0;37m" << std::endl;
    delete dog;
} */

/* int main()
{
    // this test will not work because the modifier of the constructor Animal() is protected

    Animal *animal = new Animal();
    if (animal == NULL)
    {
        perror("Allocation failed");
        exit(1);
    }
    delete animal;
} */
