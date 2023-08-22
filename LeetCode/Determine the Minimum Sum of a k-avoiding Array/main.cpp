int minimumSum(int n, int k) {
        vector<int> v;
        int num = 1;
        int c = 0;
        bool isValid;

        while (v.size() < n) {
            isValid=true;
            for (int i : v) {
                if (i + num == k) {
                    isValid = false;
                    break;
                }
            }

            if (isValid) {
                v.push_back(num);
            }

            num++;
        }

        for (int i : v) {
            c += i;
        }

        return c;
    }