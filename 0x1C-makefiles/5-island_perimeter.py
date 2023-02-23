#!/usr/bin/python3


def ordinates(list_p, position):
  if position == "top":
    a = list_p[0] - 1
    # if a < 0:
    #   a = 0
    new = [a, list_p[1]]
  elif position == "bottom":
    a = list_p[0] + 1
    # if a < 0:
    #   a = 0
    new = [a, list_p[1]]
  elif position == "left":
    b = list_p[1] - 1
    # if b < 0:
    #   b = 0
    new = [list_p[0], b]
  elif position == "right":
    b = list_p[1] + 1
    # if b < 0:
    #   b = 0
    new = [list_p[0], b]
    
  return new

def island_perimeter(grid):
  lists = []
  perimeter = 0
  for i in range(len(grid)):
    for j in range(len(grid[i])):
      if grid[i][j] == 1:
        new = [i,j]
        lists.append(new)
        
  for k in lists:
    top = ordinates(k, "top")
    bottom = ordinates(k, "bottom")
    left = ordinates(k, "left")
    right = ordinates(k, "right")
    
    if grid[top[0]][top[1]] == 0:
      perimeter += 1
    if grid[bottom[0]][bottom[1]] == 0:
      perimeter += 1
    if grid[left[0]][left[1]] == 0:
      perimeter += 1
    if grid[right[0]][right[1]] == 0:
      perimeter += 1
      
  return perimeter