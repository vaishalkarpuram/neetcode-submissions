from collections import defaultdict
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:

        anagrams = defaultdict(list)

        for s in strs:
            temp_key = "".join(sorted(s))
            anagrams[temp_key].append(s)

        return list(anagrams.values())