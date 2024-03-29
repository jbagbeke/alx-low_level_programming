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
                c = grid[j][i]
                if i - 1 >= 0:
                    p = grid[j][i - 1]
                if i + 1 <= len(grid[j]) - 1:
                    n = grid[j][i + 1]
                perim = c + n + p

                if j + 1 <= len(grid) - 1:
                    c = grid[j + 1][i]

                    if i - 1 >= 0:
                        p = grid[j + 1][i - 1]
                    if i + 1 <= len(grid[j + 1]) - 1:
                        n = grid[j + 1][i + 1]
                    perim = perim + c + n + p
                perimeter += perim
    return perimeter


if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
