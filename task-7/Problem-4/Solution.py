"""
    Problem-4, Hackerrank Submission: 
        https://www.hackerrank.com/challenges/nested-list/submissions/code/305425680
"""

if __name__ == '__main__':
    l = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        a = [name, score]
        l.append(a)
    scores = []
    for i in l:
        scores.append(i[1])
    scores = sorted(set(scores))
    secg = scores[1]
    names = []
    for i in l:
        if(i[1] == secg) : names.append(i[0])
    names = sorted(names)
    for i in names:
        print(i)

