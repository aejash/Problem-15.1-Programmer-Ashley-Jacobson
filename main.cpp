/**** Problem 15.1 - Chapter 15, Project D
*---------------------------------------------
***** Write a program that counts how often each word occurs in a text file.
***** Use an unordered_multiset<string>.
*
// Programmer - Ashley Jacobson
// Tester - Heily Cabrera Guerrero

// Group Project D //
/***** Members *****/
/***** Ashley Jacobson *****/
/***** Giannfranco Brance *****/
/***** Audrey Tapia *****/
/***** Heily Cabrera Guerrero *****/

#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <utility>
#include <fstream>

using namespace std;

int main()
{
    unordered_multiset<string> words;
    ifstream in("input.txt");
    string word;
    if(!in.is_open())
    {
        cout << "Error opening file" << endl;
    }
    else
    {
        while (in >> word)
        {
            words.insert(word);
        }
    }
    in.close();
    in.open("input.txt");
    if(!in.is_open())
    {
        cout << "Error opening file" << endl;
    }
    else
    {
        while (in >> word)
        {
            cout << word << " occurs " << words.count(word) << " times" << endl;

        }
    }
    return 0;
}
