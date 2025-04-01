from typing import List


class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        result = []
        stack = [("", 0, 0)]  # (current_string, open_count, close_count)
        while stack:
            current, open_count, close_count = stack.pop()
            if open_count == n and close_count == n:
                result.append(current)
            else:
                if open_count < n:
                    stack.append((current + "(", open_count + 1, close_count))
                if close_count < open_count:
                    stack.append((current + ")", open_count, close_count + 1))
        return result


sol = Solution().generateParenthesis(4)
print(sol)
