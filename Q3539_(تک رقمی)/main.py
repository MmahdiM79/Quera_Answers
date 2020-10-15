


def case0(num: int):
    if n%9 == 0:
        print(9)
        exit()
    



if __name__ == "__main__":
    
    n = int(input())
    
    case0(n)
    
    while n > 10:
        n %= 9
        case0(n)
    
        
    print(n)
    
