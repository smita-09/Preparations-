from typing import List


class Solution:
    def reorderLogFiles(self, logs: List[str]) -> List[str]:
        letter_logs = []
        digit_logs = []

        for log in logs:
            identifier, *content = log.split(" ", 1)
            if content[0][0].isdigit():
                digit_logs.append(log)
            else:
                letter_logs.append((content[0], identifier, log))

        # Sort letter logs by content, then by identifier
        letter_logs.sort()
        # Extract the original log format
        return [log for _, _, log in letter_logs] + digit_logs