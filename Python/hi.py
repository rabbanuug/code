#import sys
#sys.stdout = open('Python/output.txt', 'w')
#sys.stdin = open('Python/input.txt', 'r')

print("Hasdfi")
a = 5
b = 6
print(a+b)
name_first = "Golam "
name_last = "Rabbani"
naem = "Golam Rabbani"
print(name_first+name_last)

#write a program to take input from user and print it
name = input("Enter your name: \n")
print("Your name is: ", name)

#write a program to take two number from user and print the sum
a = int(input("Enter first number: \n"))
b = int(input("Enter second number: \n"))
print("The sum is: ", a+b)

#write a loop to print 1 to 10
for i in range(1, 11):
    print(i)

#write a loop to print 10 to 1
for i in range(10, 0, -1):
    print(i)

#write a loop to print 1 to 10 odd number
for i in range(1, 11, 2):
    print(i)

#write a loop to print 1 to 10 even number
for i in range(2, 11, 2):
    print(i)

#write a loop to print 1 to 10 odd number and their sum
sum = 0
for i in range(1, 11, 2):
    print(i)
    sum += i
print("The sum is: ", sum)


#write a loop to print 1 to 10 even number and their sum
sum = 0
for i in range(2, 11, 2):
    print(i)
    sum += i
print("The sum is: ", sum)

#write a loop to print 1 to 10 odd number and their average
sum = 0
count = 0
for i in range(1, 11, 2):
    print(i)
    sum += i
    count += 1
print("The average is: ", sum/count)

#write a loop to print 1 to 10 even number and their average
sum = 0
count = 0
for i in range(2, 11, 2):
    print(i)
    sum += i
    count += 1
print("The average is: ", sum/count)

#array declaration and initialization in python
arr = [1, 2, 3, 4, 5]
#print all the element of the array
#input value to array via loop 1 to 100
for i in range(6, 101):
    arr.append(i)

for i in arr:
    print(i , end=" ")

#pattern print in python
# 1
# 1 2
# 1 2 3
#code now
print()
for i in range(1, 5):
    for j in range(1, i+1):
        print(j, end=" ")
    print()

#take input 5 digit to the array
arr = []
for i in range(5):
    arr.append(int(input("Enter a number: \n")))
print(arr)

#take input 5 digit to the array and print the sum
arr = []
sum = 0
for i in range(5):
    arr.append(int(input("Enter a number: \n")))
    sum += arr[i]

