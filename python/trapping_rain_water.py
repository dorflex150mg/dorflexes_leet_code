class Solution(object):
    def trap(self, height):
        def trap_(_height):
            water = 0
            _water = 0
            start = 0
            peak1 = 0
            peak2 = 0
            count = 0
            while peak1 > 0:
                count += 1
            start = count
            peak1 = _height[start]
            index_peak1 = start
            for i in range(start, len(_height)):
                peak2 = max(_height[i], peak2)
                _water += max(0, peak1 - height[i])
                if _height[i] >= peak1 and index_peak1 != i:
                    for j in range(index_peak1, i):
                        water += peak1 - _height[j]
                    peak1 = peak2
                    index_peak1 = i
                    peak2 = 0
            print _water
            return water

        global_peak = 0
        #global_peak2 = 0
        if len(height) < 2:
            return 0
        for i in range(len(height)):
            if height[i] > global_peak:
                global_peak = height[i]
                global_peak_index = i
        return trap_(height[0:global_peak_index + 1]) + trap_(height[global_peak_index:len(height)][::-1]
