a = eval(input("请输入a初值："))
print(f"{'a':8}{'a^2':8}{'a^3':8}")
for i in range(4):
  num = a * (i + 1)
  print(f"{num:<8}{num ** 2:<8}{num ** 3:<8}")