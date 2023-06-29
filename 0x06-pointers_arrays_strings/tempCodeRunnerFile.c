int i = 0;
while (s[i] != '\0')
{
if (s[i] == 32 || s[i] == '\n' || s[i] == '\t' || s[i] == 46)
{
if (s[i] == '\t')
{
s[i] = 32;
}
if (s[i + 1] >= 97 && s[i + 1] <= 122)
{
s[i + 1] = s[i + 1] - 32;
}
}
i++;
}
return (s);