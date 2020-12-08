#!/usr/bin/python3
"""Python script has a function canUnlockAll"""

def canUnlockAll(boxes):
    """canUnlockAll - function to check if a list of lists contains all keys
    to open all boxes"""
    keys = []
    for box in boxes:
        for item in box:
            if (item not in keys):
                keys.append(item)

    if (keys[-1] != len(boxes) - 1 and len(boxes) == len(keys)
        or len(keys) == len(boxes) - 1):
        return True
    return False
