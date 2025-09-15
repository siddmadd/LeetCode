class TimeMap(object):

    def __init__(self):
        self.dict = dict()
        self.vector = []

    def set(self, key, value, timestamp):
        """
        :type key: str
        :type value: str
        :type timestamp: int
        :rtype: None
        """
        if key in self.dict:
            self.dict[key].append((timestamp,value))
        else:
            self.dict[key] = [(timestamp,value)]
        
        

    def get(self, key, timestamp):
        """
        :type key: str
        :type timestamp: int
        :rtype: str
        """
        if key in self.dict:
            val, time = "", -2
            start, end = 0, len(self.dict[key]) - 1
            while start <= end:
                mid = ((end - start) / 2) + start
                if self.dict[key][mid][0] <= timestamp:
                    start = mid + 1
                    val = self.dict[key][mid][1]
                else:
                    end = mid - 1
            return val
        else:
            return ""
        


# Your TimeMap object will be instantiated and called as such:
# obj = TimeMap()
# obj.set(key,value,timestamp)
# param_2 = obj.get(key,timestamp)