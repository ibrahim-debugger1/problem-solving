class Solution {
public:
    string split(int a) {
        string t1;
        while (a > 0) {
            t1.push_back(char((a % 10) + 48));
            a /= 10;
        }
        reverse(t1.begin(), t1.end());
        return t1;
    }
    int compare(int a, int b) {
        string t1 = split(a);
        string t2 = split(b);
        string temp = t1;
        t1 += t2;
        t2 += temp;
        //cout<<t1<<" "<<t2<<endl;
        for (int i = 0; i < t1.size(); i++) {
            int q =  ((int)t1[i]) - 48, w = ((int)t2[i]) - 48;
            //cout<<q<<" "<<w<<endl;
            if (q == w)
                continue;
            else if (q > w)
                return a;
            else
                return b;

        }
        if (a == 0)
            return b;
        return a;
    }
    string largestNumber(vector<int>& nums) {
        bool arr[105];
        for (int i = 0; i < 105; i++)
            arr[i] = true;
        string sol = "";
        for (int i = 0; i < nums.size(); i++) {
            int largest = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (arr[j])
                    largest = compare(largest, nums[j]);
            }

            //cout<<largest<<endl;
            for (int k = 0; k < nums.size(); k++)
                if (nums[k] == largest && arr[k] == true) {
                    arr[k] = false;
                    break;
                }
            sol += to_string(largest);
        }
        if (sol[0] == '0')
            return "0";
        return sol;
    }
};
// 3 5 9 30 34