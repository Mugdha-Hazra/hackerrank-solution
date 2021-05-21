def fun(a, b, c, n):
    li = [[x, y, z] for x in range(0, a+1) for y in range(0, b+1) for z in range(0, c+1) if (x+y+z) != n]
    
    return li
if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    print(fun(x,y,z,n))
