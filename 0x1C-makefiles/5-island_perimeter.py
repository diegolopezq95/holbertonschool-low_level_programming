#!/usr/bin/python3
"""This module returns the perimeter of the island
"""


def island_perimeter(grid):
    """
    Count perimeter method
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if grid[i - 1][j] == 0 and i - 1 >= 0:
                    perimeter += 1
                if grid[i + 1][j] == 0 and i <= len(grid) - 1:
                    perimeter += 1
                if grid[i][j - 1] == 0 and j - 1 >= 0:
                    perimeter += 1
                if grid[i][j + 1] == 0 and j <= len(grid[i]) - 1:
                    perimeter += 1
    return perimeter
