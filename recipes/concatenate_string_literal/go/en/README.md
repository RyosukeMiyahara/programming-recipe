Concatenate string literals (string enclosed in double quotes). 
To concatenate strings simply, use + operator. 
However, if strings are concatenated by + operator, new string object is generated. 
If you use bytes.Buffer, string is stored in buffer. 
As a result, bytes.buffer prevents unnecessary string object from generating. 
