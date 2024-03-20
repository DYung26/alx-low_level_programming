#!/usr/bin/python3

def island_perimeter(grid):
    count = 0
    height = len(grid)
    width = len(grid[0])
    for d in grid[1:height-1]:
        for _ in d[1:width-1]:
            count += 1
    return count
