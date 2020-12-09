#!/usr/bin/python3
"""Python script has a function canUnlockAll and checkKeys"""


def canUnlockAll(boxes):
    """canUnlockAll - function to check if a list of lists contains all keys
    to open all boxes"""
    keys = [0]
    for key in keys:
        if (boxes[key]):
            for item in boxes[key]:
                if (item not in keys):
                    keys.append(item)

    if (len(keys) == len(boxes)):
        return True
    return False
