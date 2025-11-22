class Solution {
public:
    string reverseVowels(string s) {
        
        int size = s.length();
        int start = 0;
        int end = size-1;
        string vowels = "AEIOUaeiou";

        while(start<end){
            bool str=false;
            bool ended=false;

            if(vowels.find(s[start]) != string::npos)
            {
                str = true;
            }
            else
            {
                start++;
            }
            
            if(vowels.find(s[end]) != string::npos)
            {
                ended = true;
            }
            else
            {
                end--;
            }

            if(str && ended){
                char temp = s[end];
                s[end] = s[start];
                s[start] = temp;
                start++;
                end--;
            }


        }

        return s;
        
    }
};