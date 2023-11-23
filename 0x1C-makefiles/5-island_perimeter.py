#!/usr/bin/python3
''' finding an island's perimeter '''


def island_perimeter(grid):
    ''' island_perimeter function '''

    x = 0
    ix = 0
    total = 0
    for x in range(len(grid)):
        ix = 0
        for ix in range(len(grid[x])):
            if grid[x][ix] == 1:
                if x - 1 >= 0:
                    prev = x - 1
                    if grid[prev][ix] != 1:
                        total += 1
                else:
                    total += 1
                if x + 1 < len(grid):
                    nxt = x + 1
                    if grid[nxt][ix] != 1:
                        total += 1
                else:
                    total += 1
                if grid[x][x - 1] != 1:
                    total += 1
                if grid[x][x + 1] != 1:
                    total += 1
    return (total)
