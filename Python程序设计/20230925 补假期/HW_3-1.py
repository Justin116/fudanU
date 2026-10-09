num = int(input("请输入一个三位数："))
digSum = 0
for i in range(3):
  digSum += (num % 10)
  num //= 10
print("各位数之和为%d。" % digSum)