dSpeedBitPerSec = eval(input("请输入下载速度，以Mb/s为单位："))
fileSizeByte = eval(input("请输入文件大小，以MB为单位："))
# 1 MB = 8 Mb

dSpeedBytePerSec = dSpeedBitPerSec / 8
dSpeedBytePerMin = dSpeedBytePerSec * 60

remainingTimeMin = fileSizeByte / dSpeedBytePerMin

print(f"文件的下载时间为{remainingTimeMin:.2f}分钟")