class Solution {
public:
    char getCode(){
        char code = char(5);        //5 stores in binary at code
        return code;
    }

    string encode(vector<string>& strs) {
        string store = "";

        int code = getCode();

        for(auto i: strs){
            store = store + i;  //appending the string
            store.push_back(code);          //pushing the code
        }

        return store;
    }

    vector<string> decode(string s) {
        int code = getCode();

        vector<string> v;

        string temp;
        for(auto i:s){
            if(i == code){
                v.push_back(temp);
                temp.clear();
                continue;
            }

            temp.push_back(i);
        }

        return v;
    }   
};
