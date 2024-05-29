#!/usr/bin/python3
"""island perimeter"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    l = len(grid) - 1
    w = len(grid[0]) - 1
    j = 0

    for i, c in enumerate(grid):
        for j, n in enumerate(c):
            if n == 1:
                if i == 0 or grid[i - 1][j] != 1:
                    j += 1
                if j == 0 or grid[i][j - 1] != 1:
                    j += 1
                if j == w or grid[i][j + 1] != 1:
                    j += 1
                if i == l or grid[i + 1][j] != 1:
                    j += 1
    return j
