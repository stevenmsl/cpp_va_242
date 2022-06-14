#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
#include <functional>
using namespace sol242;
using namespace std;

/*takeaways
  - use a hash table
  - scan s first to collect the frequency of each char
  - scan t and deduct the frequency of each char
  - if the frequency ever goes to a negative
    - s doesn't have enough number of that char
    - s doesn't have that char at all

*/
bool Solution::isAnagram(string s, string t)
{
  auto count = vector<int>(26, 0);
  for (auto c : s)
    count[c - 'a']++;

  for (auto c : t)
    if (--count[c - 'a'] < 0)
      return false;

  return true;
}