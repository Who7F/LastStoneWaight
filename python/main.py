#You are given an array of integers stones where stones[i] is the weight of the ith stone.

#We are playing a game with the stones.On each turn, we choose the heaviest two stones and smash them together.Suppose the heaviest two stones have weights x and y with x <= y.The result of this smash is :

#If x == y, both stones are destroyed, and
#If x != y, the stone of weight x is destroyed, and the stone of weight y has new weight y - x.
#At the end of the game, there is at most one stone left.

#Return the weight of the last remaining stone.If there are no stones left, return 0.


import heapq

class sol:
    def LastStoneWaight(self, n):
        heapq._heapify_max(n)
        while(len(n) > 1):    
            x = heapq._heappop_max(n)
            y = heapq._heappop_max(n)
            if(x != y):
                heapq.heappush(n, x-y)
                heapq._heapify_max(n)
        if(len(n) == 1):
            return heapq._heappop_max(n)
        return 0

def main():
    f = sol()
    print(f.LastStoneWaight([4, 4, 5, 6, 3]))


if __name__== '__main__':
    main()
