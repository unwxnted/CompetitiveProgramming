char nextGreatestLetter(vector<char>& letters, char target) {
        auto t = upper_bound(letters.begin(), letters.end(), target);

        if(t==letters.end()) return letters[0];
        return *t;
    }