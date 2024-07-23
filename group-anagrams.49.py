class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        sid = []
        anagrams = {}
        for word in strs:
            map = {}
            for char in word:
                if char in map:
                    map[char] += 1
                else: 
                    map[char] = 1
            key = tuple(sorted(map.items()))
            if key in anagrams:
                anagrams[key].append(word)
            else:
                anagrams[key] = [word]
        return anagrams.values()

            