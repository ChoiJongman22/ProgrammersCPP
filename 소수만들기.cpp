#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

//vector<int> dfs(int a, vector<int>& nums, vector<bool>& check, int cnt, vector<int> &tmp) {
//
//    cnt += 1;
//    for (int i = 0; i < nums.size(); i++) {
//        if (check[i]!=true && cnt > 3) {
//            check[i] = true;
//            a += nums[i];
//            dfs(a, nums, check, cnt,tmp);
//        }
//        tmp.push_back(a);
//        check[i] = false;
//    }
//    return tmp;
//}
//
//int solution(vector<int> nums) {
//    vector<bool> check = { false, };
//    int answer = -1;
//    int cnt = 0;
//    vector<int> tmp;
//    dfs(nums[0], nums, check, cnt, tmp);
//
//    return answer;
//}


//bool check(int a) {
//    if (a == 0 || a == 1) {
//        return false;
//    }
//    for (int i = 2; i < a; i++) {
//        if (a % i == 0) return false;
//    }
//    return true;
//}
//
//
//int solution(vector<int> nums) {
//    int answer = 0;
//    int sum = 0;
//    vector<int> tmp;
//    for (int i = 0; i < nums.size(); i++) {
//        for (int j = i + 1; j < nums.size(); j++) {
//            for (int u = j + 1; u < nums.size(); u++) {
//                sum = nums[i] + nums[j] + nums[u];
//                if (check(sum)) answer++;
//            }
//        }
//    }
//    return answer;
//}

vector<int> tempList;

bool primeNumber(int a) {
    for (int i = 2; i <= sqrt(a); i++)
        if (a % i == 0)//i가 나누어떨어지면 소수가 아님 
            return false;
    return true;
}

void serch(vector<int>& nums, int index = 0, int count = 0, int sum = 0) {
    if (index >= nums.size())
        return;
    sum += nums[index];
    for (int i = index; i < nums.size(); i++) {
        if (count == 2) {
            tempList.push_back(sum);
            return;
        }
        else
            serch(nums, i + 1, count + 1, sum);
    }
}

int solution(vector<int> nums) {
    int answer = 0;
    for (int i = 0; i < nums.size() - 2; i++)
        serch(nums, i);
    for (auto a : tempList) {
        if (primeNumber(a))
            answer++;
    }
    return answer;
}
