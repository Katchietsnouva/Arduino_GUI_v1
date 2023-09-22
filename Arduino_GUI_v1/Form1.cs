using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Arduino_GUI_v1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            serialPort1.Open();
        }

        private void onButton_Click(object sender, EventArgs e)
        {
            // Send command to the arduino to turn on
            serialPort1.Write("A");
        }

        private void offButton_Click(object sender, EventArgs e)
        {
            // Send command to the arduino to turn off
            serialPort1.Write("a");
        }
    }
}