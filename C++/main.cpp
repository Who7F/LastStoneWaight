// LastStoneWeight.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//You are given an array of integers stones where stones[i] is the weight of the ith stone.

//We are playing a game with the stones.On each turn, we choose the heaviest two stones and smash them together.Suppose the heaviest two stones have weights x and y with x <= y.The result of this smash is :

//If x == y, both stones are destroyed, and
//If x != y, the stone of weight x is destroyed, and the stone of weight y has new weight y - x.
//At the end of the game, there is at most one stone left.

//Return the weight of the last remaining stone.If there are no stones left, return 0.

#include <vector>
#include <iostream>
//#include <queue>
#include "Solution.h"

//class Solution {
//public:
//    int lastStoneWeight(std::vector<int>& stone) {
//        std::priority_queue<int> max_heap;
//
//        for (int i : stone)
//            max_heap.push(i);
//
//        while (max_heap.size() > 1 && !max_heap.empty()) {
//            int x = max_heap.top();
//            max_heap.pop();
//            int y = max_heap.top();
//            max_heap.pop();
//            //std::cout << x << ' ' << y << "\n";
//            if (x != y) {
//                max_heap.push(x - y);
//            }
//        }
//        if (max_heap.size() == 1) {
//            return max_heap.top();
//        }
//        return 0;
//    }
//    void test() {
//        std::cout << "\nTest working\n";
//    }
//};

int main()
{
    std::vector<int> x{ 5,3,5,6,7 };
    Solution f;
    //f.test();
    int xlast = f.lastStoneWeight(x);
    std::cout << "left:" << xlast;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
