#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;
void remove(std::vector<string> &v)
{
    auto end = v.end();
    for (auto it = v.begin(); it != end; ++it) {
        end = remove(it + 1, end, *it);
    }
 
    v.erase(end, v.end());
}

int main() {
    vector<string> nums= {"h","g","h","g","h"};
    vector<string> bem(5);
    bem = nums;
    remove(nums);
    map<string, int> slow ;
    for (int i = 0; i < nums.size(); ++i) {
    slow[nums[i]] = 0;
    }

    for (int i = 0; i < bem.size(); ++i) {
        if (slow.count(bem[i]) == 1) {
    slow[bem[i]] = slow[bem[i]]+1;
    }}
    for (auto& number : slow) { 
cout<<number.first<<' '<<number.second<<endl;
}
  return 0;
}
