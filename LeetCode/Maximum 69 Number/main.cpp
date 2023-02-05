class Solution {
public:
    int maximum69Number (int num)
{
    string s = "";
    stringstream ss;
    ss << num;
    ss >> s;

    for(int i = 0; i < s.size(); ++i){
        if(s[i] == '6'){
            s[i] = '9';
            break;
        }
    }
    int r;
    ss.clear();
    ss << s;
    ss >> r;


    return r;

}
};