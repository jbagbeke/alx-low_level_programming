#!/usr/bin/python3
"""
Returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island
    """
    perimeter = 0

    for j in range(len(grid) - 1):
        for i in range(len(grid[j]) - 1):
            perim = 0

            if grid[j][i] == 1:
                if i - 1 >= 0 and i + 1 <= len(grid[j]) - 1:
                    c = grid[j][i]
                    p = grid[j][i - 1]
                    n = grid[j][i + 1]
                    perim = c + n + p

                if j + 1 <= len(grid) - 1:
                    if i - 1 >= 0 and i + 1 <= len(grid[j + 1]) - 1:
                        c = grid[j + 1][i]
                        p = grid[j + 1][i - 1]
                        n = grid[j + 1][i + 1]
                        perim = perim + c + n + p
                perimeter += perim
    return perimeter
