from typing import List

class Solution:
    def findRelativeRanks(self, score: List[int]) -> List[str]:
        n = len(score)
        order = sorted(range(n), key=lambda i: -score[i])
        medals = ["Gold Medal", "Silver Medal", "Bronze Medal"]
        answer = [""] * n
        for place, idx in enumerate(order):
            answer[idx] = medals[place] if place < 3 else str(place + 1)
        return answer