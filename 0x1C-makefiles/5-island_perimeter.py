#!/usr/bin/python3
"""
Island perimeter module
"""


def island_perimeter(my_list):
    """ return perimeter of all 1 in list"""

    perimeter = 0

    for i in range(0, len(my_list)):
        for j in range(0, len(my_list[i])):
            if my_list[i][j] == 1:
                perimeter += 4
                if j + 2 <= len(my_list[i]):
                    if my_list[i][j + 1] == 1:
                        perimeter -= 1

                if j - 2 >= 0:
                    if my_list[i][j - 1] == 1:
                        perimeter -= 1

                if i > 0 and i < len(my_list):
                    if my_list[i - 1][j] == 1:
                        perimeter -= 1

                    if my_list[i + 1][j] == 1:
                        perimeter -= 1

    return perimeter
