#include <iostream>
#include <vector>

std::vector<bool> kidsWithCandies(std::vector<int> &candies, int extraCandies)
{
    std::vector<bool> result(candies.size());
    int largest = result[0];

    for (int i = 0; i < candies.size(); i++)
    {
        largest = std::max(largest, candies[i]);
    }

    for(int i = 0; i < candies.size(); i++){
        if(candies[i] + extraCandies >= largest){
            result[i] = true;
        }
        else{
            result[i] = false;
        }
    }


    return result;
}
