class Solution {
public:
    //Aniket-Sonwane
    bool isValid(string s) {
        char st[10000];
        int top=-1;
        for(int i=0;i<s.length();i++) {
            char c=s[i];
            if(c=='('||c=='{'||c=='[')
                st[++top]=c;
            else {
                if(top==-1)return false;
                if((c==')'&&st[top]!='(')||(c=='}'&&st[top]!='{')||(c==']'&&st[top]!='['))
                    return false;
                top--;
            }
        }
        return top==-1;
    }
};