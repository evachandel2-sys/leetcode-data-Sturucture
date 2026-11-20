class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int count0 = 0, count1 = 0;

        // Count students who prefer 0 and 1
        for (int s : students) {
            if (s == 0)
                count0++;
            else
                count1++;
        }

        // Process sandwiches from top of stack
        for (int s : sandwiches) {
            if (s == 0 && count0 > 0) {
                count0--;
            }
            else if (s == 1 && count1 > 0) {
                count1--;
            }
            else {
                break;
            }
        }

        return count0 + count1;
    }
};