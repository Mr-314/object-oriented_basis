import tkinter as tk
from tkinter import ttk

def setText():
    text.set(entry.get())
    entryText.set('')
    
root = tk.Tk()

enterText=ttk.Frame(root,relief='ridge', padding=10)
enterText.pack()

entryText=tk.StringVar()
entry=ttk.Entry(enterText,textvariable=entryText,width=40)
entry.grid(column=0, row=0)

inputButton=ttk.Button(enterText,text='Enter',command=setText)
inputButton.grid(column=1, row=0)

text=tk.StringVar()
label=ttk.Label(enterText, textvariable=text, width=40)
label.grid(column=0,row=1)

buttonUpdate=ttk.Button(enterText, text="Quit", command=root.destroy)
buttonUpdate.grid(column=1,row=1)

root.mainloop()
