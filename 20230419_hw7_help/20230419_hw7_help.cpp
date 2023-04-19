// 20230419_hw7_help.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
#include <string>
#include <fstream>

// TODO 1: defining a struct
struct Node {
    char ch;
    int freq;
    Node* left; 
    Node* right; 
    Node() = delete; 
    Node(char c, int f)
        : ch{ c }, freq{ f }, left{ nullptr }, right{ nullptr } {}
};
typedef Node* NodePtr;

// TODO 2: write a function that reads a file and returns ch freq
std::unordered_map<char, int> 
getFrequencies(const std::string& filename)
{
    std::unordered_map<char, int> um;
    
    // read each character and accumulate its freq. 
    std::fstream file;
    file.open(filename, std::ios::in);

    char ch; 
    while (file.get(ch)) {
        //std::cout << ch; 
        um[ch] += 1; 
    }

    file.close(); 

    return um;
}

int main()
{
    auto charFreq = getFrequencies("Pride_and_Prejudice.txt");

    // test to see all char and freq from um
    //for (auto& cf : charFreq) {
    //    std::cout << cf.first << ": " << cf.second << std::endl;
    //}


}

