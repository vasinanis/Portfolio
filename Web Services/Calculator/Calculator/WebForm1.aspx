<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm1.aspx.cs" Inherits="Calculator.WebForm1" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            <h1>Calculator</h1>
            <br />
             Number 1:  <asp:TextBox ID="TextBox1" runat="server" OnTextChanged="TextBox1_TextChanged"></asp:TextBox>
            <br />
             <div>&nbsp;</div>
            <asp:Button ID="Button1" runat="server" Text="+" OnClick="Button1_Click" />
            <asp:Button ID="Button2" runat="server" Text="-" OnClick="Button2_Click" />
            <asp:Button ID="Button3" runat="server" Text="*" OnClick="Button3_Click" />
            <asp:Button ID="Button4" runat="server" Text="/" OnClick="Button4_Click" />
            <asp:Button ID="Button5" runat="server" Text="Clear" OnClick="Button5_Click" />
            <br />
            <div>&nbsp;</div>
            Number 2:<asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
            <br />
             <div>&nbsp;</div>
            <asp:Label ID="Label1" runat="server" Text="Result:"></asp:Label>

        </div>
        <div>&nbsp;</div>
        
       
    </form>
</body>
</html>
