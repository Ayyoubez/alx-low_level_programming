#!/usr/bin/python3
"""Island perimter funcion."""


def island_perimeter(grid):
    """Return the perimiter of an island.

    grid represents water and land

    Args:
        grid (list): list of integers defining  an island.
    Returns:
        The perimeter of the island in grid.
    """
    w = len(grid[0])
    h = len(grid)
    e = 0
    s = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                s += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    e += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    e += 1
    return s * 4 - e * 2
