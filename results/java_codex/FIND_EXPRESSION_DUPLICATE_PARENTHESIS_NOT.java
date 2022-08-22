bool findDuplicateparenthesis(string str)
{
    stack<char> Stack;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ')')
        {
            char top = Stack.top();
            Stack.pop();
            int elementsInside = 0;
            while (top != '(')
            {
                elementsInside++;
                top = Stack.top();
                Stack.pop();
            }
            if (elementsInside < 1)
            {
                return true;
            }
        }
        else
        {
            Stack.push(str[i]);
        }
    }
    return false;
}