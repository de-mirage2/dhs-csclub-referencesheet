# --- INPUT ---
import sys

input = sys.stdin.readline  # Faster execution than traditional input()
inputAll = sys.stdin.read  # Read ENTIRE input, not just a line
print = sys.stdout.write  # Faster execution than traditional print();
# YOU MUST END THE print() ARGUMENT WITH A '\n'

N = int(input())

# input a list a of integers; input is separated by space, i.e. '1 1 2 3 5 8'
a = [int(i) for i in input().split(' ')]

# input a set b of strings of size N; input is separated by newline
b = set()
for i in range(0, N):
    b.add(input())

# Read ENTIRE input and separate it by '\n'
c = inputAll().split('\n')

# --- OUTPUT ---

# output N twice, separated by a space, then output a newline
print(str(N) + ' ' + str(N) + '\n')

# output a list of strings (not spaced apart then spaced apart)
print(''.join(a) + '\n')
print(' '.join(a) + '\n')

# output a set b of integers (sep. by newlines)
print('\n'.join(b))
