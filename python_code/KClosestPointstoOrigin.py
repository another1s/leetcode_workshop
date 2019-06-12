class Solution:
    def kClosest(self, points: List[List[int]], K: int) -> List[List[int]]:
        distance =list()
        d_sort = list()
        for point in points:
            distance.append(self.euclid_d(point,[0,0]))
        

        distance.sort(key=lambda dis:dis[1])
        res = list()
        i=0
        while(i<K):
            res.append(distance[i][0])
            i=i+1
        return res
        
    def euclid_d(self, pointA,pointB):
        s=(pointA[0]-pointB[0])**2+(pointA[1]-pointB[1])**2
        s=abs(s)**0.5
        return [pointA,s]
        
        