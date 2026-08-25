class Solution {
public:
    int calPoints(vector<string>& operations) {
        int record[1000];
        int n = 0;

        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "C") {
                n--;
            }
            else if (operations[i] == "D") {
                record[n] = 2 * record[n - 1];
                n++;
            }
            else if (operations[i] == "+") {
                record[n] = record[n - 1] + record[n - 2];
                n++;
            }
            else {
                record[n] = stoi(operations[i]);
                n++;
            }
        }

        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += record[i];
        }

        return sum;
    }
};