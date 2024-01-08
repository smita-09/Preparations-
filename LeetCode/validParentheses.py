class Solution:
    def isValid(self, s: str) -> bool:
        if len(s) % 2 != 0:
            return False
        bracket_dict = { '(': ')', '{': '}', '[': ']'}
        stack = []
        for i in s:
            if i in bracket_dict.keys():
                stack.append(i) 
            else:
                if stack == []:
                    return False
                bracket = stack.pop()
                if i != bracket_dict[bracket]:
                    return False
        return stack == []
        
