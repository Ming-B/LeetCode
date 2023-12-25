#include <iostream>
#include <vector>

int maxProfit(std::vector<int> &prices){
    if(prices.empty()) return 0;

    int minPrice = prices[0];
    int maxP = 0;

    for(int i = 1; i < prices.size(); i++){
        if(prices[i] < minPrice){
            minPrice = prices[i];
        }
        else{
            maxP = std::max(maxP, prices[i] - minPrice); 
        }
    }

    return maxP;
}

