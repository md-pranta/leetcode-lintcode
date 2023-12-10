class Solution:
    def transpose(self, matrix: list[list[int]]) -> list[list[int]]:
        n = len(matrix)
        m = len(matrix[0])

        trans = [[0]*n for _ in range(m)]
        for i in range(n):
            for j in range(m):
                trans[j][i] = matrix[i][j]
        return trans