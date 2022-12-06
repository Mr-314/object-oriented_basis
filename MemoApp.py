import tkinter as tk
from tkinter import ttk
from userDefinedWidget import Thread

def addThread():
    thread=Thread(root)
    threadText=tk.StringVar()
    threadText.set(entry.get())
    entryText.set('')
    thread.setText(threadText)
    thread.pack(side='bottom')

root = tk.Tk()
frame=ttk.Frame(root,padding=10)
frame.pack()

entryText=tk.StringVar()
entry=ttk.Entry(frame,textvariable=entryText,width=40)
entry.grid(column=0, row=0)
button=ttk.Button(frame,text='Add',command=addThread)
button.grid(column=1, row=0)

root.mainloop()
