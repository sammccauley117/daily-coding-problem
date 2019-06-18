def is_leap(year):
    return year%4==0 and (year%100!=0 or year%400==0) 

if __name__ == '__main__':
    x = int(input('Input: '))
    print('Result:', is_leap(x))
