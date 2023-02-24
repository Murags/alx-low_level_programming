#!/usr/bin/python3


"""Calculates island perimeter
""" 
def ordinates(list_p, position):
  """calculates ordinates

  Args:
      list_p (list): reference
      position (str): _description_

  Returns:
      list: ordinated of position requested based on list_p
  """  
  if position == "top":
    a = list_p[0] - 1
    new = [a, list_p[1]]
  elif position == "bottom":
    a = list_p[0] + 1
    new = [a, list_p[1]]
  elif position == "left":
    b = list_p[1] - 1
    new = [list_p[0], b]
  elif position == "right":
    b = list_p[1] + 1
    new = [list_p[0], b]
    
  return new

def island_perimeter(grid):
  """Calculate island perimeter

  Args:
      grid (2Dlist): _description_

  Returns:
      int: island perimeter
  """  
  lists = []
  perimeter = 0
  for i in range(len(grid)):
    for j in range(len(grid[i])):
      if grid[i][j] == 1:
        new = [i, j]
        lists.append(new)
        
  for k in lists:
    top = ordinates(k, "top")
    bottom = ordinates(k, "bottom")
    
    left = ordinates(k, "left")
    right = ordinates(k, "right")
    
    if k[0] != 0:
      if grid[top[0]][top[1]] == 0:
        perimeter += 1

    else:
      perimeter += 1
    if k[0] < len(grid) - 1:
      if grid[bottom[0]][bottom[1]] == 0:
        perimeter += 1

    else:
      perimeter += 1
    if k[1] != 0:
      if grid[left[0]][left[1]] == 0:
        perimeter += 1

    else:
      perimeter += 1
    if k[1] <= len(k):
      if grid[right[0]][right[1]] == 0:
        perimeter += 1
        
    else:
      perimeter += 1
   
  return perimeter