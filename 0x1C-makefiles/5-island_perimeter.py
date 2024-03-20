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
    # height = len(grid)
    # width = len(grid[0])
    for row, i in enumerate(grid):
        for column, j in enumerate(i):
            if grid[row][column] == 1:
                top = grid[row-1][column]
                left = grid[row][column-1]
                bottom = grid[row+1][column]
                right = grid[row][column+1]
                for coefficients in [top, left, bottom, right]:
                    if coefficients == 0:
                        print(coefficients)
                        count += 1
    return count
