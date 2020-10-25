




if __name__ == "__main__":
    
    
    degrees = [int(degree) for degree in input().split()]
    
    if any((degree == 0) for degree in degrees):
        print("No")
        exit()
        
    if sum(degrees) == 180:
        print("Yes")
    else:
        print("No")
        
        
        
