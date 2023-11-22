#!/usr/bin/python3

def island_perimeter(grid):
    x = 0
    ix = 0
    total = 0
    for x in range(len(grid)):
        for ix in range(len(grid[x])):
            if grid[x][ix] == 1:
                prev = x - 1
                nxt = x + 1
                if grid[prev][ix] != 1:
                    total += 1
                if grid[nxt][ix] != 1:
                    total += 1
                if grid[x][x - 1] != 1:
                    total += 1
                if grid[x][x + 1] != 1:
                    total += 1
    return (total)
