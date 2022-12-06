import tkinter as tk
from tkinter import ttk

root = tk.Tk()

root.title("My first TK")

frame = ttk.Frame(root, padding=10, relief="groove")
frame.grid(column=0,row=0)
label=ttk.Label(frame, text="1412119 森山里咲",width=15)
label.grid(column=0,row=0)

button=ttk.Button(frame, text="Quit", command=root.destroy)
button.grid(column=1,row=1)

root.mainloop()
