from sys import stdin, stdout

scan = stdin.readline  # Faster execution than built-in input()
scanAll = stdin.read  # Read ENTIRE input, not just a line
out = stdout.write  # Faster execution than built-in print();
# Note: out() does NOT automatically add a newline

# --- INPUT ---
# input an integer n
N = int(scan())

# input list a of integers; input separated by space, i.e. '2 4 6'
a = [int(i) for i in scan().split(' ')]

# input set b of size N; input separated by newline
b = set()
for i in range(0, N): # N can be replaced by len(b)
    b.add(scan())

# Read ENTIRE input then separate by '\n' - newline
c = scanAll().split('\n')

# --- OUTPUT ---
# output N twice, separated by space, then output newline
out(str(n) + ' ' + str(n) + '\n')

# output containers (not spaced, then spaced, then by newline)
out(''.join(a) + '\n')
out(' '.join(b) + '\n')
out('\n'.join(c))
