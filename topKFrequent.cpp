#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> topKFrequent(std::vector<int>& nums, int k){
    std::unordered_map<int, int> frequency;
    for(int delta : nums){
        frequency[delta]++;
    }


}

int main(){

}