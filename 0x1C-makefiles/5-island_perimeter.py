#!/usr/bin/python3
"""This module returns the perimeter of the island
"""


def island_perimeter(grid):
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if grid[i - 1][j] == 0 and i > 0:
                    count += 1
                if grid[i + 1][j] == 0 and i < len(grid):
                    count += 1
                if grid[i][j - 1] == 0 and j > 0:
                    count += 1
                if grid[i][j + 1] == 0 and j < len(grid[i]):
                    count += 1
    perimeter = count
    return perimeter
