i int = 12;
int *p, *q;

p = i IS legal (though we're converting from int to pointer without a cast)
p = &q is legal
*p = &i is legal
&p = q is probably NOT legal because I don't think &variable is an lvalue
p = *&q is legal
p = q is legal (i think)
p = *q is legal;
*p = q is legal (i think, but we are again converting from pointer to int without a cast)
*p = *q is legal
