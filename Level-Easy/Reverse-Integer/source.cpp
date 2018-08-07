class Solution {
public:
    int reverse(int x) {
        std::string s = to_string(x);
        char temp;
        char minus=s[0];
       
        if(minus=='-'){
            
            s=s.substr(1,s.length());
        }
    
        for(int i=0; i<s.length();i++){
        
            if(s.length()%2==0){
                if(i==s.length()-i){ break;}
                else{
                 temp = s[i];
                 s[i]=s[s.length()-1-i];
                 s[s.length()-1-i]=temp;
                }
            }
            
            if(s.length()%2!=0){
                if(i==s.length()-i-1){ break;}
                 else{
                 temp = s[i];
                 s[i]=s[s.length()-1-i];
                 s[s.length()-1-i]=temp;
                }
            }
              
        }  
        
      
        if(minus=='-'){
                s="-"+s;
        }
        
        
        return stoi(s);
    }
};

int stringToInteger(string input) {
    return stoi(input);
}

int main() {
    string line;
    while (getline(cin, line)) {
        int x = stringToInteger(line);
        
        int ret = Solution().reverse(x);

        string out = to_string(ret);
        cout << out << endl;
    }
    return 0;
}