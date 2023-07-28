def find_substring(string, substring):
    
    if '#' in substring:
        substring = substring.replace("#", "")
    indexes = []
    for i in range(len(string)):
        if string[i:1 + len(substring)] == substring:
            indexes.append(i + 1)
    return indexes



if __name__ == '__main__':
    string = input("Enter the string: ")
    substring = input("Enter the substring to be searched: ")
    answer = find_substring(string, substring)
    print(*answer, sep = '')