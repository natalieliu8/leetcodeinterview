#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = 0; i < n; i++){
            nums1[m+i] = nums2[i];
        }
        for (int i = 0; i < m+n; i++){
            for (int j = i+1; j < m+n; j++){
                if (nums1[i] > nums1[j]){
                    int temp = nums1[i];
                    nums1[i] = nums1[j];
                    nums1[j] = temp;
                }
            }
        }
        
        

    }
};
int main(){
    vector<int> a= {1,2,3,0,0,0};
    vector<int> b= {2,5,6};
    int m = 3;
    int n = 3;
    Solution test;
    test.merge(a,m,b,n);
    for (int i = 0; i<6;i++){
        cout << a[i];
    }
}
