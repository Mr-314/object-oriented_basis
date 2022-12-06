import tkinter as tk
from tkinter import ttk

class EnterTextApp(ttk.Frame):

    def __init__(self,root):
        super().__init__(root, relief='ridge', padding=10)

        self.entryText=tk.StringVar()
        self.entry=ttk.Entry(self,textvariable=self.entryText,width=40)
        self.entry.grid(column=0, row=0)

        inputButton=ttk.Button(self,text='Enter',command=self.setText)
        inputButton.grid(column=1, row=0)

        self.text=tk.StringVar()
        label=ttk.Label(self,textvariable=self.text, width=40)
        label.grid(column=0,row=1)

        buttonUpdate=ttk.Button(self,text="Quit", command=root.destroy)
        buttonUpdate.grid(column=1,row=1)

    def setText(self):
        self.text.set(self.entry.get())
        self.entryText.set('')

if __name__ == '__main__' :

    root = tk.Tk()

    enterText=EnterTextApp(root)
    enterText.pack()
    
    root.mainloop()
