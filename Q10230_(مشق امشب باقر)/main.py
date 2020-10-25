




if __name__ == "__main__":
    
    
    angles = [int(angle) for angle in input().split()]
    
    if any((angle == 0) for angle in angles):
        print("No")
        exit()
        
    if sum(angles) == 180:
        print("Yes")
    else:
        print("No")
        
        
        
