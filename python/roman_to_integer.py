class Solution(object):
    def intToRoman(self, num):
        d = [['I', 'V'], ['X', 'L'], ['C', 'D'], ['M']]
        power = 0
        num_str = str(num)
        roman = ""
        for i in num_str[::-1]:
            if i == '0':
                power += 1
                continue
            elif i == '5':
                roman += d[power][1] 
            elif i == '4':
                roman += d[power][1]
                roman += d[power][0] 
            elif i == '9':
                roman += d[power + 1][0]
                roman += d[power][0]
            elif int(i) > 5:
                roman += d[power][0] * (int(i) - 5)
                roman += d[power][1]
            else:
                roman += d[power][0] * int(i)
            power += 1
        return roman[::-1]
