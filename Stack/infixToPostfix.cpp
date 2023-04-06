
#include <bits/stdc++.h>
using namespace std;

int prec(char ch){
    if(ch=='+' || ch=='-'){
        return 0;
    }
    else{
        return 1;
    }
}

int main()
{

	string s;
    cin>>s;
    stack<char>st;
    string ans="";

	for (int i = 0; i < s.length(); i++) {
		char now=s[i];
        if(now>='a'&& now<='z'){
            ans+=now;
        }

		else if (now == '(')
			st.push('(');

		else if (now == ')') {
			while (st.top() != '(') {
				ans += st.top();
				st.pop();
			}
			st.pop();
		}

		else {
			while (!st.empty()
				&& prec(s[i]) <= prec(now)) {
				ans += st.top();
				st.pop();
			}
			st.push(now);
		}
	}

	while (!st.empty()) {
		ans += st.top();
		st.pop();
	}

	cout << ans;
    cout << "ans";
}

