import tkinter as tk
from sysconfig import expand_makefile_vars

'''
root = tk.Tk()
root.title("Hello")
root.geometry("1300x1200")
root.mainloop()
'''
#..........TYPES OF LAYOUT.........
# Pack Layout
# Grid Layout
# Place Layout

'''
root = tk.Tk()
root.geometry("300x200")
root.title("My TK App")
label1 = tk.Label(root, text="Label 1", bg="red")
# label1.pack(fill=tk.BOTH, expand=True) #Pack Layout
# label1.grid(row=0,column=0) #Grid Layout
label1.place(x=50, y=100)
label2 = tk.Label(root, text="Label 2", bg="blue")
# label2.pack(fill=tk.BOTH, expand=True) #Pack Layout
# label2.grid(row=1,column=1) #Grid Layout
label2.place(x=150, y=120)
root.mainloop()

'''

'''
root = tk.Tk()
root.geometry("300x200")
root.title("My TK App")

frame_top = tk.Frame(root)
frame_bottom = tk.Frame(root)

frame_top.pack(side = tk.TOP, fill = tk.BOTH, expand = True)
frame_bottom.pack(side = tk.BOTTOM, fill=tk.BOTH, expand=True)

Label1 = tk.Label(frame_top , text="Top Frame - Label 1")
Label2 = tk.Label(frame_top, text="Top Frame - Label 2")
Label3 = tk.Label(frame_bottom, text="Bottom Frame - Label 1")
Label4 = tk.Label(frame_bottom, text="Bottom Frame - Label 2")

Label1.pack(side=tk.LEFT)
Label2.pack(side=tk.RIGHT)
Label3.grid(row=0, column=0)
Label4.grid(row=0, column=1)

root.mainloop()

'''

#........LABEL AND BUTTONS.............

'''
def button_click():
    label.config(text="Button Clicked")

root = tk.Tk()
root.title("Button!!")
root.geometry("400x500")

label = tk.Label(root, text="Hello, Tkinter")
label.pack(pady=20)

button = tk.Button(root, text="Click me", command=button_click())
button.pack(pady=20)

root.mainloop()
'''
# Rest code is in pictures......02-09-2024

