from itertools import permutations, product


base = [1,2,3,4]

perms = permutations(base, 4)

perms = [i for i in perms]

valid = []


def see_row_left(row):
	count = 0
	i = 0
	see = -1
	while i < 4:
		if row[i] > see:
			see = row[i]
			count +=1
		i+=1
	return count

def see_row_right(row):
	count = 0
	i = 3
	see = -1
	while i >= 0:
		if row[i] > see:
			see = row[i]
			count +=1
		i-=1
	return count



def see_col_up(game, col):
	count = 0
	i = 0
	see = -1
	while (i < 4):
		if (game[i][col] > see):
			see = game[i][col]
			count+=1
		i+=1
	return count

def see_col_down(game, col):
	count = 0
	i = 3
	see = -1
	while (i >= 0):
		if (game[i][col] > see):
			see = game[i][col]
			count +=1
		i-=1
	return count

def check_row(row, L, R):
	return see_row_left(row) == L and see_row_right(row) == R


for i in perms:
		if check_row(i,3,2):
			valid.append(i)


print(valid)

