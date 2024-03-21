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
                    [0, 0, 0, 0, 0, 0]]
        >>> island_perimeter(grid)
        12
    """

    count = 0
    height = len(grid)
    width = len(grid[0])
    for row in range(height):
        for column in range(width):
            if grid[row][column] == 1:
                top = grid[row-1][column] if row > 0 else 0
                left = grid[row][column-1] if column > 0 else 0
                bottom = grid[row+1][column] if row < height - 1 else 0
                right = grid[row][column+1] if column < width - 1 else 0
                # for coefficients in [top, left, bottom, right]:
                #    if coefficients == 0: #        count += 1
                count += (top == 0) + (left == 0) + (bottom == 0) + \
                         (right == 0)
    return count
