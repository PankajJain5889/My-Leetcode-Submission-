class Solution(object):
    def findRestaurant(self, list1, list2):
        """
        :type list1: List[str]
        :type list2: List[str]
        :rtype: List[str]
        """
        d = {}
        for i in range(len(list1)):
            for j in range(len(list2)):
                if list1[i] == list2[j]:
                    if i+j not in d.keys():
                        d[i+j] = [list1[i]]
                    else:
                        d[i+j].append(list1[i])
        m = min(list(d.keys()))
        print(d)
        return d[m]