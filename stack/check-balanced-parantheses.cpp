#include <iostream>
#include <stack>

using namespace std;

bool IsPair(char top, char i){

    if ((top == '(') && (i == ')')) return true;
    else if ((top == '[') && (i== ']')) return true;
    else if ((top == '{') && (i == '}')) return true;
    return false;

}

bool IsParanthesesBalanced(string exp){

    stack <char> S;
    for (int i = 0; i < exp.length(); i++){
        if((exp[i] == '[') || (exp[i] == '(') || (exp[i] == '{')){
            S.push(exp[i]);
        } else if ((exp[i] == ']') || (exp[i] == ')') || (exp[i] == '}'))
        {
            if (S.empty() || (!IsPair(S.top(), exp[i]))){
                return false;
            } else {
                S.pop();
            }
        }
    }
    return S.empty();
}

int main(){

    string expression;

    cout << "Enter a string";

    cin >> expression;

    cout << "Your string is " << expression << endl;


    if(IsParanthesesBalanced(expression)){
        cout << "Balanced";
    } else {
        cout << "Unbalanced";
    }

    return 0;
}