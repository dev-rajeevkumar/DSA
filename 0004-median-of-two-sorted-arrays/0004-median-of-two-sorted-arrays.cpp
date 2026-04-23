class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int a = m + n;
        int x = 0, y = 0, i = 0;
        int arr[a];
        while (m > x && n > y) {
            if (nums1[x] <= nums2[y]) {
                arr[i] = nums1[x];
                x++;
                i++;
            } else {
                arr[i] = nums2[y];
                y++;
                i++;
            }
        }
        if (m == x) {
            while (n > y) {
                arr[i] = nums2[y];
                y++;
                i++;
            }
        }
        if (n == y) {
            while (m > x) {
                arr[i] = nums1[x];
                x++;
                i++;
            }
        }
        if (a % 2 != 0) {
            return arr[a / 2];
        }
        int med = arr[a / 2] + arr[(a / 2)-1];
        return med/2.0;
    }
};