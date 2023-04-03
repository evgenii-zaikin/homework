#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;
int main() {
    vector<string> nums= {"h","g","h","g","h"};
    map<string, int> slow ;
    for (int i = 0; i < nums.size(); ++i) {
    slow[nums[i]] =  slow[nums[i]]+1;
    }
    for (auto& number : slow) { 
cout<<number.first<<' '<<number.second<<endl;
}
  return 0;
}
