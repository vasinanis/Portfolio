using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace Calculator
{
    
    public partial class WebForm1 : System.Web.UI.Page
    {
        com.dneonline.www.Calculator myWS = new com.dneonline.www.Calculator();
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            int a, b, apot;
            a = Convert.ToInt32(TextBox1.Text);
            b = Convert.ToInt32(TextBox2.Text);
            apot = myWS.Add(a, b);
            Label1.Text = Convert.ToString(apot);
        }

        protected void Button2_Click(object sender, EventArgs e)
        {
            int a, b, apot;
            a = Convert.ToInt32(TextBox1.Text);
            b = Convert.ToInt32(TextBox2.Text);
            apot = myWS.Subtract(a, b);
            Label1.Text = Convert.ToString(apot);

        }

        protected void TextBox1_TextChanged(object sender, EventArgs e)
        {


        }

        protected void Button3_Click(object sender, EventArgs e)
        {
            int a, b, apot;
            a = Convert.ToInt32(TextBox1.Text);
            b = Convert.ToInt32(TextBox2.Text);
            apot = myWS.Multiply(a, b);
            Label1.Text = Convert.ToString(apot);
        }

        protected void Button4_Click(object sender, EventArgs e)
        {
            int a, b, apot;
            a = Convert.ToInt32(TextBox1.Text);
            b = Convert.ToInt32(TextBox2.Text);

            if (b != 0)
            {
                apot = myWS.Divide(a, b);
                Label1.Text = Convert.ToString(apot);
            }
            else if (a != 0)
                Label1.Text = "Ιmpossible";
            else
                Label1.Text = "Vagueness";

        }

        protected void Button5_Click(object sender, EventArgs e)
        {
            TextBox1.Text = "";
            TextBox2.Text = "";



        }
    }
}