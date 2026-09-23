""" n = int(input())
rank = list(map(int, input().split()))

count = 0

for i in range(n - 1):
    if rank[i] > rank[i + 1]:
        count += 1

print(count) """

# After JEE Mains, some students got admission into an engineering college. Now there is a class consisting of such n students, and the HOD came to say it is time to select the class monitor. But He never gets all of them at one time. So he brought a register, every time he gets someone with less rank than the previous time he cut the name and wrote the name of the student and the rank.
# For a given number of ranks he gets each time, you have to predict how many names are cut in the list.

# Constraints:
# Number of Visiting<=10^9
# ranks <=10000

# Input Format:
# Number of Visiting N in their first line
# N space separated ranks the HOD gets each time

# Output Format:
# Number of ranks cut in the list

# Sample Input:
# 6
# 4 3 7 2 6 1

# Sample Output:
3

n = int(input())
a = list(map(int, input().split()))
min = a[0]
cut = 0

for i in range(1, n):
    if a[i] < min:
        min = a[i]
        cut += 1

print(cut)