#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
   int m, tmp;
   string str;

   cin >> m;
   while(m-- > 0) {
      stack<int> st; // �X�^�b�N��錾�{������

      for(;;) {
         cin >> str;
         if(str == "push") {
            cin >> tmp;
            st.push(tmp);
         }
         else if(str == "pop") {
            if( st.empty() ) continue;   // pop����O�ɋ󂩂ǂ����m�F
            else st.pop();
         }
         else if(str == "end") {
            break;
         }
      }

      if (st.empty()) {
         cout << "Stack is empty." << endl;
      }
      else {
         cout << st.top() << endl;
      }
   }

   return 0;
}