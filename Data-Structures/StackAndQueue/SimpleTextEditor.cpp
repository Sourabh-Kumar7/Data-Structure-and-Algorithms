/*
To Do : Implement a simple text editor. Initially, your editor contains an empty string,S. You must perform Q operations of the following types:
1. append - Append string to the end of S.
2. delete - Delete the last characters of S.
3. print- Print the Kth character of S.
4. undo - Undo the last (not previously undone) operation of type 1 or 2, reverting S to the state it was in prior to that operation.
*/

//BeYourWild7

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S, tmp;
    int Q, op, K; cin >> Q;
    stack<string> states;
    while (Q--)
    {
        cin >> op;
        switch(op)
        {
        case 1:
            states.push(S);
            cin >> tmp;
            S.append(tmp);
            break;
        case 2:
            states.push(S);
            cin >> K;
            S.erase(S.end()-K, S.end());
            break;
        case 3:
            cin >> K;
            cout << S[K-1] << endl;
            break;
        case 4:
            S = move(states.top());
            states.pop();
            break;
        }
    }
}
