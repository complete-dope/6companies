#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        // first approach using stack 
        int n = tokens.size();
        int ans = 0;
        stack<int> st;
        for(int j = 0 ; j<n ;j++){
            string i = tokens[j];
            if(i != "+" && i != "-" && i != "*" && i != "/"){
                int a = stoi(i);
                st.push(a);
            }else{
                // cout<<"yup"<<endl;
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                if(i == "+"){
                    st.push(b+a);
                }
                else if(i == "-"){
                    st.push(b-a);
                }
                else if(i == "/"){
                    st.push(b/a);
                }
                else if(i == "*"){
                    st.push(b*a);
                }
            }

        }
        return st.top();
    }
};

int main(){
    return 0;
}