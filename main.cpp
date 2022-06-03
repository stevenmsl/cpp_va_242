#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol242;

/*
Input: s = "anagram", t = "nagaram"
Output: true
*/

tuple<string, string, bool>
testFixture1()
{
  return make_tuple("anagram", "nagaram", true);
}

/*
Input: s = "rat", t = "car"
Output: false
*/

tuple<string, string, bool>
testFixture2()
{
  return make_tuple("rat", "car", false);
}

void test1()
{
  auto f = testFixture1();
  cout << "Expect to see: " << get<2>(f) << endl;
  Solution sol;
  cout << sol.isAnagram(get<0>(f), get<1>(f)) << endl;
}

void test2()
{
  auto f = testFixture2();
  cout << "Expect to see: " << get<2>(f) << endl;
  Solution sol;
  cout << sol.isAnagram(get<0>(f), get<1>(f)) << endl;
}

main()
{
  test1();
  test2();
  return 0;
}