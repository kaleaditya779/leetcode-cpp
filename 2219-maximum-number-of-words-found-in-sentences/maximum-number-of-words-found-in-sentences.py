class Solution(object):
    def mostWordsFound(self, sentences):
        """
        :type sentences: List[str]
        :rtype: int
        """
        maxCount = 0
        for i in range(len(sentences)):
            i_split = sentences[i].split()
            count = len(i_split)
            maxCount = max(maxCount, count)
        return maxCount
        