using System;
using System.Windows.Forms;

public class Program
{
    [STAThread]
    public static void Main()
    {
        var f = new Form();
        f.Text = "Hello World";
        Application.Run(f);
    }
}
