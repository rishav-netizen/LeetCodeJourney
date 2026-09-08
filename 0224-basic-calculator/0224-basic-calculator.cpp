class Solution 
{
    public:
    int calculate(string s) 
    {
        stack<int> operands;
        stack<char> operators;
        long long a = 0, b = 0;
        bool expectNumber = true;
        for(int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
                continue;
            
            if (isdigit(s[i]))
            {
                long long num = 0;
                while(i < s.size() && isdigit(s[i]))
                {
                    // if(num * 10 + (s[i] - '0') < INT_MAX && num * 10 + (s[i] - '0') > INT_MIN)
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
                
                operands.push(num);
                i--; //because of one digit
                expectNumber = false;

            }

            else if (s[i] == '(')
            {
                operators.push(s[i]);
                expectNumber = true;
            }

            else if(s[i] == '+' || s[i] == '-')
            {
                if (expectNumber)
                {
                    if(s[i] == '-')
                    {
                        operands.push(0);
                    }
                }
                while(!operators.empty() && operators.top() != '(')
                {
                    b = operands.top();
                    operands.pop();
                    a = operands.top();
                    operands.pop();
                    if (operators.top() == '+')
                        operands.push(a + b);
                    else
                        operands.push(a - b);
                    operators.pop();
                }
                operators.push(s[i]);
                expectNumber = true;
            }

            else if (s[i] == ')')
            {
                while(!operators.empty() && operators.top() != '(')
                {
                    b = operands.top();
                    operands.pop();
                    a = operands.top();
                    operands.pop();
                    if (operators.top() == '+')
                        operands.push(a + b);
                    else
                        operands.push(a - b);
                    operators.pop();
                }
                operators.pop();
                // after closing bracket number cant come
                expectNumber = false;
            }
        }

        while (!operators.empty())
        {
            b = operands.top();
            operands.pop();
            a = operands.top();
            operands.pop();
            if (operators.top() == '+')
                operands.push(a + b);
            else
                operands.push(a - b);
            operators.pop();
        }

        return operands.top();
    }
};