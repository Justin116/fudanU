import math

a, b, c = eval(input("请输入三条边长，以“,”分隔："))
p = (a + b + c) / 2
size = math.sqrt(p * (p - a) * (p - b) * (p - c))

print(f"此三角形的面积是{size:.2f}。")