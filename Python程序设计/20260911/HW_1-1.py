from PIL import Image, ImageFont, ImageDraw
from tkinter import filedialog, Tk

def open_path():
    root = Tk()
    root.withdraw()
    file_path = (filedialog.askopenfilename(title='选择图片文件', filetypes=[('All Files', '*')]))
    return file_path

print('请选择图片：')
IMG = open_path()  # 图片路径
ascii_char = list("$@B%8&WM#*oahkbdpqwmZO0QLCJUYXzcvunxrjft/|()1{}[]?-_+~<>i!lI;:,\"^`'. ")

print('正在转换......')

def get_char(r, g, b, alpha=256):  # alpha透明度
    if alpha == 0:
        return ' '
    length = len(ascii_char)
    gray = int(0.2126 * r + 0.7152 * g + 0.0722 * b)
    unit = (256.0 + 1) / length
    return ascii_char[int(gray / unit)]

if __name__ == '__main__':
    img = Image.open(IMG)
    WIDTH = int(img.width / 6)
    HEIGHT = int(img.height / 15)
    img_txt = Image.new("RGB", (img.width, img.height), (255, 255, 255))
    img = img.resize((WIDTH, HEIGHT), Image.NEAREST)
    txt = ""
    colors = []
    for i in range(HEIGHT):
        for j in range(WIDTH):
            pixel = img.getpixel((j, i))
            colors.append((pixel[0], pixel[1], pixel[2]))  # 记录像素颜色信息
            if (len(pixel) == 4):
                txt += get_char(pixel[0], pixel[1], pixel[2], pixel[3])
            else:
                txt += get_char(pixel[0], pixel[1], pixel[2])
        txt += '\n'
        colors.append((255, 255, 255))
    print(txt)