def groupAnagram(str: list[str]):
    group = {}

    for s in str:
        key = "".join(sorted(s))
        if key not in group:
            group[key] = []
        group[key].append(s)

    return list(group.values())


strs = ["eat", "tea", "tan", "ate", "nat", "bat"]

print(groupAnagram(strs))
