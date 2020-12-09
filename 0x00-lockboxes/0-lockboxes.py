#!/usr/bin/python3
"""Python script has a function canUnlockAll and checkKeys"""


def canUnlockAll(boxes):
    """canUnlockAll - function to check if a list of lists contains all keys
    to open all boxes"""
    keys = [0]
    if (len(boxes) == 0):
        return True

    for key in keys:
        box = boxes[key]
        for item in box:
            if (item not in keys):
                if (item <= len(boxes) - 1):
                    keys.append(item)
            else:
                continue

    if (len(keys) == len(boxes)):
        return True
    return False
