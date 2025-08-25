### Triangles on a Rectangle
[Triangles on a Rectangle](https://codeforces.com/problemset/problem/1620/B)

### Problem Logic
Basically, in the question, it is given in a very confusing way how input is taken. What we do after taking `t, w,` and ` h` as input is we make a for loop which goes from `side 1 to side 4`. Then in that, we take the lattice as the input, and it is given that the lattice is in ascending order. Now, because it is in ascending order, what we will do is take the first point of that lattice and the last point of that lattice. This will be, in any case, the max width we can achieve from this side. The max height that we can gain is `h or w`, and in the code, we will see that it is given `ll height = (side < 2) ? h : w;` this is wrt to the fact that first we get lattice values for the base of the rectangle, then for the side parallel to it, then for the left perpendicular to the base, and then the right perpendicular to the base. 
If still don't get it, then [Watch this video](https://www.youtube.com/watch?v=RSYFHB3pFiU) then dry run this code. Don’t see the code in the video.
