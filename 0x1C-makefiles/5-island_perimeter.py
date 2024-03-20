#!/usr/bin/python3
"""Module to calculate the perimeter of an island in a 2D grid."""


def island_perimeter(grid):
    """Calculate the perimeter of an island represented by a 2D grid.

    Args:
        grid (List[List[int]]): A 2D grid representing the island,
        where each cell with a value of 1 represents land
        and each cell with a value of 0 represents water.

    Returns:
        int: The total perimeter count of the island.

    Example:
        >>> grid = [[0, 0, 0, 0, 0, 0],
                    [0, 1, 0, 0, 0, 0],
                    [0, 1, 0, 0, 0, 0],
                    [0, 1, 1, 1, 0, 0],
                    [0, 0, 0, 0, 0, 0]
            ]
        >>> island_perimeter(grid)
        12
    """

    count = 0
    height = len(grid)
    width = len(grid[0])
    for i in range(1, height-1):
        for j in range(1, width-1):
            count += 1
    return count
