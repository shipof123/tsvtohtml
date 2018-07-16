# TSV HTML table converter
##### A (hopefully) Useful tool for painless tsv to html table conversion
##### example demo @ [GitHub.io/tsvtohtml](https://shipof123.github.io/tsvtohtml/index.html)
## Usage:
  ./reader [*source tsv file*] [*destination*]
#### nota bene: it appends to the end of the file, so don't worry about losing work
### example.tsv file
Number[space]Name[space]HeadSize
1[tab]Bob[tab]23"  
2[tab]Phil[tab]21"  
*etc*  
### `$ | ./reader example.tsv output.html`
### output.html
```
<pre style="background-color:rgb(25, 4, 44)">

<TABLE border = "1"style="border-spacing: 10px;color:red;background-color: black;"><tr><td>&nbsp;&nbsp;&nbsp;&nbsp;<b> Number</b>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</td><td>&nbsp;&nbsp;&nbsp;&nbsp;<b> Name</b>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</td><td>&nbsp;&nbsp;&nbsp;&nbsp;<b> HeadSize
</b>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</td></tr>
<tr>
<td>1   </td>
<td>Bob   </td>
<td>23"
   </td>
</tr>
<tr>
<td>2   </td>
<td>Phil   </td>
<td>21"   </td>
</tr>
</TABLE></pre>
</body>
```
