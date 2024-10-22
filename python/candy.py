class Solution(object):
        #return sum(given)
            
    def candy(self, ratings):
        if len(ratings) == 1:
            return 1
        def candy_(ratings):
            length = len(ratings)
            given = [1] * length
            peak = [False] * length
            for i in range(1, length):
                if ratings[i] > ratings[i - 1]:
                    given[i] = given[i - 1] + 1
                    peak[i] = True
                elif ratings < ratings[i - 1] and not peak[i - 1]:
                    given[i - 1] += 1
            return given

        given_f = candy_(ratings)
        given_b = candy_(ratings[::-1])[::-1]
        for i in range(len(given_f)):
            if given_f[i] < given_b[i]:
                given_f[i] = given_b[i]
        return sum(given_f
