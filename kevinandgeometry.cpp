#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        /*From Wikipedia, the free encyclopedia
The product logarithm Lambert W function plotted in the complex plane from −2 − 2i to 2 + 2i
The product logarithm Lambert W function plotted in the complex plane from −2 − 2i to 2 + 2i

The graph of y = W(x) for real x < 6 and y > −4. The upper branch (blue) with y ≥ −1 is the graph of the function W0 (principal branch), the lower branch (magenta) with y ≤ −1 is the graph of the function W−1. The minimum value of x is at {−1/e, −1}
In mathematics, the Lambert W function, also called the omega function or product logarithm,[1] is a multivalued function, namely the branches of the converse relation of the function f(w) = wew, where w is any complex number and ew is the exponential function. The function is named after Johann Lambert, who considered a related problem in 1758. Building on Lambert's work, Leonhard Euler described the W function per se in 1783.[citation needed]

For each integer k there is one branch, denoted by Wk(z), which is a complex-valued function of one complex argument. W0 is known as the principal branch. These functions have the following property: if z and w are any complex numbers, then*/
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }/*From Wikipedia, the free encyclopedia
The product logarithm Lambert W function plotted in the complex plane from −2 − 2i to 2 + 2i
The product logarithm Lambert W function plotted in the complex plane from −2 − 2i to 2 + 2i

The graph of y = W(x) for real x < 6 and y > −4. The upper branch (blue) with y ≥ −1 is the graph of the function W0 (principal branch), the lower branch (magenta) with y ≤ −1 is the graph of the function W−1. The minimum value of x is at {−1/e, −1}
In mathematics, the Lambert W function, also called the omega function or product logarithm,[1] is a multivalued function, namely the branches of the converse relation of the function f(w) = wew, where w is any complex number and ew is the exponential function. The function is named after Johann Lambert, who considered a related problem in 1758. Building on Lambert's work, Leonhard Euler described the W function per se in 1783.[citation needed]

For each integer k there is one branch, denoted by Wk(z), which is a complex-valued function of one complex argument. W0 is known as the principal branch. These functions have the following property: if z and w are any complex numbers, then*/
        sort(vec.begin(), vec.end());
        vector<int> d;
        map<int, int> mpp;

        /*From Wikipedia, the free encyclopedia
The product logarithm Lambert W function plotted in the complex plane from −2 − 2i to 2 + 2i
The product logarithm Lambert W function plotted in the complex plane from −2 − 2i to 2 + 2i

The graph of y = W(x) for real x < 6 and y > −4. The upper branch (blue) with y ≥ −1 is the graph of the function W0 (principal branch), the lower branch (magenta) with y ≤ −1 is the graph of the function W−1. The minimum value of x is at {−1/e, −1}
In mathematics, the Lambert W function, also called the omega function or product logarithm,[1] is a multivalued function, namely the branches of the converse relation of the function f(w) = wew, where w is any complex number and ew is the exponential function. The function is named after Johann Lambert, who considered a related problem in 1758. Building on Lambert's work, Leonhard Euler described the W function per se in 1783.[citation needed]

For each integer k there is one branch, denoted by Wk(z), which is a complex-valued function of one complex argument. W0 is known as the principal branch. These functions have the following property: if z and w are any complex numbers, then*/
        for (int i = 0; i < n; i++) {
            mpp[vec[i]]++;
            if (mpp[vec[i]] == 2) {
                d.push_back(vec[i]);
            }
        }
/*Terminology
The notation convention chosen here (with W0 and W−1) follows the canonical reference on the Lambert W function by Corless, Gonnet, Hare, Jeffrey and Knuth.[3]

The name "product logarithm" can be understood as follows: since the inverse function of f(w) = ew is termed the logarithm, it makes sense to call the inverse "function" of the product wew the "product logarithm". (Technical note: like the complex logarithm, it is multivalued and thus W is described as a converse relation rather than inverse function.) It is related to the omega constant, which is equal to W0(1).

History
Lambert first considered the related Lambert's Transcendental Equation in 1758,[4] which led to an article by Leonhard Euler in 1783[5] that discussed the special case of wew.

The equation Lambert considered was*/
        if (d.size() == 0) {
            cout << "-1" << endl;
        } else if (d.size() > 1) {/*Terminology
The notation convention chosen here (with W0 and W−1) follows the canonical reference on the Lambert W function by Corless, Gonnet, Hare, Jeffrey and Knuth.[3]

The name "product logarithm" can be understood as follows: since the inverse function of f(w) = ew is termed the logarithm, it makes sense to call the inverse "function" of the product wew the "product logarithm". (Technical note: like the complex logarithm, it is multivalued and thus W is described as a converse relation rather than inverse function.) It is related to the omega constant, which is equal to W0(1).

History
Lambert first considered the related Lambert's Transcendental Equation in 1758,[4] which led to an article by Leonhard Euler in 1783[5] that discussed the special case of wew.

The equation Lambert considered was*/
            cout << d[0] << " " << d[0] << " " << d[1] << " " << d[1] << endl;
        } else {
            int x = d[0];
            vector<int> rem;/*Terminology
The notation convention chosen here (with W0 and W−1) follows the canonical reference on the Lambert W function by Corless, Gonnet, Hare, Jeffrey and Knuth.[3]

The name "product logarithm" can be understood as follows: since the inverse function of f(w) = ew is termed the logarithm, it makes sense to call the inverse "function" of the product wew the "product logarithm". (Technical note: like the complex logarithm, it is multivalued and thus W is described as a converse relation rather than inverse function.) It is related to the omega constant, which is equal to W0(1).

History
Lambert first considered the related Lambert's Transcendental Equation in 1758,[4] which led to an article by Leonhard Euler in 1783[5] that discussed the special case of wew.

The equation Lambert considered was*/
            int cnt = 2;
            for (int i = 0; i < n; i++) {
                if (vec[i] == x && cnt > 0) {
                    cnt--;
                    continue;
                }
                rem.push_back(vec[i]);
            }/*Terminology
The notation convention chosen here (with W0 and W−1) follows the canonical reference on the Lambert W function by Corless, Gonnet, Hare, Jeffrey and Knuth.[3]

The name "product logarithm" can be understood as follows: since the inverse function of f(w) = ew is termed the logarithm, it makes sense to call the inverse "function" of the product wew the "product logarithm". (Technical note: like the complex logarithm, it is multivalued and thus W is described as a converse relation rather than inverse function.) It is related to the omega constant, which is equal to W0(1).

History
Lambert first considered the related Lambert's Transcendental Equation in 1758,[4] which led to an article by Leonhard Euler in 1783[5] that discussed the special case of wew.

The equation Lambert considered was*/
            bool f = false;
            for (int i = 0; i < rem.size() - 1; i++) {
                if (rem[i + 1] < rem[i] + 2 * x) {/*The functions Wk(z), k ∈ Z are all injective and their ranges are disjoint. The range of the entire multivalued function W is the complex plane. The image of the real axis is the union of the real axis and the quadratrix of Hippias, the parametric curve w = −t cot t + it.

Inverse

Regions of the complex plane for which W(n, zez) = z, where z = x + iy. The darker boundaries of a particular region are included in the lighter region of the same color. The point at {−1, 0} is included in both the n = −1 (blue) region and the n = 0 (gray) region. Horizontal grid lines are in multiples of π.
The range plot above also delineates the regions in the complex plane where the simple inverse relationship ⁠
W
(
n
,
z
e
z
)
=
z
{\displaystyle W(n,ze^{z})=z}⁠ is true. ⁠
f
=
z
e
z
{\displaystyle f=ze^{z}}⁠ implies that there exists an ⁠
n
{\displaystyle n}⁠ such that ⁠
z
=
W
(
n
,
f
)
=
W
(
n
,
z
e
z
)
{\displaystyle z=W(n,f)=W(n,ze^{z})}⁠, where ⁠
n
{\displaystyle n}⁠ depends upon the value of ⁠
z
{\displaystyle z}⁠. The value of the integer ⁠
n
{\displaystyle n}⁠ changes abruptly when ⁠
z
e
z
{\displaystyle ze^{z}}⁠ is at the branch cut of ⁠
W
(
n
,
z
e
z
)
{\displaystyle W(n,ze^{z})}⁠, which means that ⁠
z
e
z
{\displaystyle ze^{z}}⁠ ≤ 0, except for ⁠
n
=
0
{\displaystyle n=0}⁠ where it is ⁠
z
e
z
{\displaystyle ze^{z}}⁠ ≤ −1/⁠
e
{\displaystyle e}⁠.

Defining ⁠
z
=
x
+
i
y
{\displaystyle z=x+iy}⁠, where ⁠
x
{\displaystyle x}⁠ and ⁠
y
{\displaystyle y}⁠ are real, and expressing ⁠
e
z
{\displaystyle e^{z}}⁠ in polar coordinates, it is seen that

z
e
z
=
(
x
+
i
y
)
e
x
(
cos
⁡
y
+
i
sin
⁡
y
)
=
e
x
(
x
cos
⁡
y
−
y
sin
⁡
y
)
+
i
e
x
(
x
sin
⁡
y
+
y
cos
⁡
y
)
{\displaystyle {\begin{aligned}ze^{z}&=(x+iy)e^{x}(\cos y+i\sin y)\\&=e^{x}(x\cos y-y\sin y)+ie^{x}(x\sin y+y\cos y)\\\end{aligned}}}
For 
n
≠
0
{\displaystyle n\neq 0}, the branch cut for ⁠
W
(
n
,
z
e
z
)
{\displaystyle W(n,ze^{z})}⁠ is the non-positive real axis, so that

x
sin
⁡
y
+
y
cos
⁡
y
=
0
⇒
x
=
−
y
/
tan
⁡
(
y
)
,
{\displaystyle x\sin y+y\cos y=0\Rightarrow x=-y/\tan(y),}
and

(
x
cos
⁡
y
−
y
sin
⁡
y
)
e
x
≤
0.
{\displaystyle (x\cos y-y\sin y)e^{x}\leq 0.}
For 
n
=
0
{\displaystyle n=0}, the branch cut for ⁠
W
[
n
,
z
e
z
]
{\displaystyle W[n,ze^{z}]}⁠ is the real axis with 
−
∞
<
z
≤
−
1
/
e
{\displaystyle -\infty <z\leq -1/e}, so that the inequality becomes

(
x
cos
⁡
y
−
y
sin
⁡
y
)
e
x
≤
−
1
/
e
.
{\displaystyle (x\cos y-y\sin y)e^{x}\leq -1/e.}
Inside the regions bounded by the above, there are no discontinuous changes in ⁠
W
(
n
,
z
e
z
)
{\displaystyle W(n,ze^{z})}⁠, and those regions specify where the ⁠
W
{\displaystyle W}⁠ function is simply invertible, i.e. ⁠
W
(
n
,
z
e
z
)
=
z
{\displaystyle W(n,ze^{z})=z}⁠.

Calculus
Derivative
By implicit differentiation, one can show that all branches of W satisfy the differential equation

z
(
1
+
W
)
d
W
d
z
=
W
for 
z
≠
−
1
e
.
{\displaystyle z(1+W){\frac {dW}{dz}}=W\quad {\text{for }}z\neq -{\frac {1}{e}}.}
(W is not differentiable for z = −⁠
1
/
e
⁠.) As a consequence, that gets the following formula for the derivative of W:

d
W
d
z
=
W
(
z
)
z
(
1
+
W
(
z
)
)
for 
z
∉
{
0
,
−
1
e
}
.
{\displaystyle {\frac {dW}{dz}}={\frac {W(z)}{z(1+W(z))}}\quad {\text{for }}z\not \in \left\{0,-{\frac {1}{e}}\right\}.}
Using the identity eW(z) = ⁠
z
/
W(z)
⁠, gives the following equivalent formula:

d
W
d
z
=
1
z
+
e
W
(
z
)
for 
z
≠
−
1
e
.
{\displaystyle {\frac {dW}{dz}}={\frac {1}{z+e^{W(z)}}}\quad {\text{for }}z\neq -{\frac {1}{e}}.}
At the origin we have

W
0
′
(
0
)
=
1.
{\displaystyle W'_{0}(0)=1.}
Integral
The function W(x), and many other expressions involving W(x), can be integrated using the substitution w = W(x), i.e. x = wew:

∫
W
(
x
)
d
x
=
x
W
(
x
)
−
x
+
e
W
(
x
)
+
C
=
x
(
W
(
x
)
−
1
+
1
W
(
x
)
)
+
C
.
{\displaystyle {\begin{aligned}\int W(x)\,dx&=xW(x)-x+e^{W(x)}+C\\&=x\left(W(x)-1+{\frac {1}{W(x)}}\right)+C.\end{aligned}}}
(The last equation is more common in the literature but is undefined at x = 0). One consequence of this (using the fact that W0(e) = 1) is the identity

∫
0
e
W
0
(
x
)
d
x
=
e
−
1.
{\displaystyle \int _{0}^{e}W_{0}(x)\,dx=e-1.}
Asymptotic expansions
The Taylor series of W0 around 0 can be found using the Lagrange inversion theorem and is given by

W
0
(
x
)
=
∑
n
=
1
∞
(
−
n
)
n
−
1
n
!
x
n
=
x
−
x
2
+
3
2
x
3
−
16
6
x
4
+
125
24
x
5
−
⋯
.
{\displaystyle W_{0}(x)=\sum _{n=1}^{\infty }{\frac {(-n)^{n-1}}{n!}}x^{n}=x-x^{2}+{\tfrac {3}{2}}x^{3}-{\tfrac {16}{6}}x^{4}+{\tfrac {125}{24}}x^{5}-\cdots .}
The radius of convergence is ⁠
1
/
e
⁠, as may be seen by the ratio test. The function defined by this series can be extended to a holomorphic function defined on all complex numbers with a branch cut along the interval (−∞, −⁠
1
/
e
⁠]; this holomorphic function defines the principal branch of the Lambert W function.

For large values of x, W0 is asymptotic to

W
0
(
x
)
=
L
1
−
L
2
+
L
2
L
1
+
L
2
(
−
2
+
L
2
)
2
L
1
2
+
L
2
(
6
−
9
L
2
+
2
L
2
2
)
6
L
1
3
+
L
2
(
−
12
+
36
L
2
−
22
L
2
2
+
3
L
2
3
)
12
L
1
4
+
⋯
=
L
1
−
L
2
+
∑
l
=
0
∞
∑
m
=
1
∞
(
−
1
)
l
[
l
+
m
l
+
1
]
m
!
L
1
−
l
−
m
L
2
m
,
{\displaystyle {\begin{aligned}W_{0}(x)&=L_{1}-L_{2}+{\frac {L_{2}}{L_{1}}}+{\frac {L_{2}\left(-2+L_{2}\right)}{2L_{1}^{2}}}+{\frac {L_{2}\left(6-9L_{2}+2L_{2}^{2}\right)}{6L_{1}^{3}}}+{\frac {L_{2}\left(-12+36L_{2}-22L_{2}^{2}+3L_{2}^{3}\right)}{12L_{1}^{4}}}+\cdots \\[5pt]&=L_{1}-L_{2}+\sum _{l=0}^{\infty }\sum _{m=1}^{\infty }{\frac {(-1)^{l}\left[{\begin{smallmatrix}l+m\\l+1\end{smallmatrix}}\right]}{m!}}L_{1}^{-l-m}L_{2}^{m},\end{aligned}}}
where L1 = ln x, L2 = ln ln x, and [l + m
l + 1] is a non-negative Stirling number of the first kind.[3] Keeping only the first two terms of the expansion,

W
0
(
x
)
=
ln
⁡
x
−
ln
⁡
ln
⁡
x
+
o
(
1
)
.
{\displaystyle W_{0}(x)=\ln x-\ln \ln x+{\mathcal {o}}(1).}
The other real branch, W−1, defined in the interval [−⁠
1
/
e
⁠, 0), has an approximation of the same form as x approaches zero, with in this case L1 = ln(−x) and L2 = ln(−ln(−x)).[3]*/
                    cout << x << " " << x << " " << rem[i] << " " << rem[i + 1] << endl;
                    f = true;
                    break;
                }
            }
            if (!f) {/*The functions Wk(z), k ∈ Z are all injective and their ranges are disjoint. The range of the entire multivalued function W is the complex plane. The image of the real axis is the union of the real axis and the quadratrix of Hippias, the parametric curve w = −t cot t + it.

Inverse

Regions of the complex plane for which W(n, zez) = z, where z = x + iy. The darker boundaries of a particular region are included in the lighter region of the same color. The point at {−1, 0} is included in both the n = −1 (blue) region and the n = 0 (gray) region. Horizontal grid lines are in multiples of π.
The range plot above also delineates the regions in the complex plane where the simple inverse relationship ⁠
W
(
n
,
z
e
z
)
=
z
{\displaystyle W(n,ze^{z})=z}⁠ is true. ⁠
f
=
z
e
z
{\displaystyle f=ze^{z}}⁠ implies that there exists an ⁠
n
{\displaystyle n}⁠ such that ⁠
z
=
W
(
n
,
f
)
=
W
(
n
,
z
e
z
)
{\displaystyle z=W(n,f)=W(n,ze^{z})}⁠, where ⁠
n
{\displaystyle n}⁠ depends upon the value of ⁠
z
{\displaystyle z}⁠. The value of the integer ⁠
n
{\displaystyle n}⁠ changes abruptly when ⁠
z
e
z
{\displaystyle ze^{z}}⁠ is at the branch cut of ⁠
W
(
n
,
z
e
z
)
{\displaystyle W(n,ze^{z})}⁠, which means that ⁠
z
e
z
{\displaystyle ze^{z}}⁠ ≤ 0, except for ⁠
n
=
0
{\displaystyle n=0}⁠ where it is ⁠
z
e
z
{\displaystyle ze^{z}}⁠ ≤ −1/⁠
e
{\displaystyle e}⁠.

Defining ⁠
z
=
x
+
i
y
{\displaystyle z=x+iy}⁠, where ⁠
x
{\displaystyle x}⁠ and ⁠
y
{\displaystyle y}⁠ are real, and expressing ⁠
e
z
{\displaystyle e^{z}}⁠ in polar coordinates, it is seen that

z
e
z
=
(
x
+
i
y
)
e
x
(
cos
⁡
y
+
i
sin
⁡
y
)
=
e
x
(
x
cos
⁡
y
−
y
sin
⁡
y
)
+
i
e
x
(
x
sin
⁡
y
+
y
cos
⁡
y
)
{\displaystyle {\begin{aligned}ze^{z}&=(x+iy)e^{x}(\cos y+i\sin y)\\&=e^{x}(x\cos y-y\sin y)+ie^{x}(x\sin y+y\cos y)\\\end{aligned}}}
For 
n
≠
0
{\displaystyle n\neq 0}, the branch cut for ⁠
W
(
n
,
z
e
z
)
{\displaystyle W(n,ze^{z})}⁠ is the non-positive real axis, so that

x
sin
⁡
y
+
y
cos
⁡
y
=
0
⇒
x
=
−
y
/
tan
⁡
(
y
)
,
{\displaystyle x\sin y+y\cos y=0\Rightarrow x=-y/\tan(y),}
and

(
x
cos
⁡
y
−
y
sin
⁡
y
)
e
x
≤
0.
{\displaystyle (x\cos y-y\sin y)e^{x}\leq 0.}
For 
n
=
0
{\displaystyle n=0}, the branch cut for ⁠
W
[
n
,
z
e
z
]
{\displaystyle W[n,ze^{z}]}⁠ is the real axis with 
−
∞
<
z
≤
−
1
/
e
{\displaystyle -\infty <z\leq -1/e}, so that the inequality becomes

(
x
cos
⁡
y
−
y
sin
⁡
y
)
e
x
≤
−
1
/
e
.
{\displaystyle (x\cos y-y\sin y)e^{x}\leq -1/e.}
Inside the regions bounded by the above, there are no discontinuous changes in ⁠
W
(
n
,
z
e
z
)
{\displaystyle W(n,ze^{z})}⁠, and those regions specify where the ⁠
W
{\displaystyle W}⁠ function is simply invertible, i.e. ⁠
W
(
n
,
z
e
z
)
=
z
{\displaystyle W(n,ze^{z})=z}⁠.

Calculus
Derivative
By implicit differentiation, one can show that all branches of W satisfy the differential equation

z
(
1
+
W
)
d
W
d
z
=
W
for 
z
≠
−
1
e
.
{\displaystyle z(1+W){\frac {dW}{dz}}=W\quad {\text{for }}z\neq -{\frac {1}{e}}.}
(W is not differentiable for z = −⁠
1
/
e
⁠.) As a consequence, that gets the following formula for the derivative of W:

d
W
d
z
=
W
(
z
)
z
(
1
+
W
(
z
)
)
for 
z
∉
{
0
,
−
1
e
}
.
{\displaystyle {\frac {dW}{dz}}={\frac {W(z)}{z(1+W(z))}}\quad {\text{for }}z\not \in \left\{0,-{\frac {1}{e}}\right\}.}
Using the identity eW(z) = ⁠
z
/
W(z)
⁠, gives the following equivalent formula:

d
W
d
z
=
1
z
+
e
W
(
z
)
for 
z
≠
−
1
e
.
{\displaystyle {\frac {dW}{dz}}={\frac {1}{z+e^{W(z)}}}\quad {\text{for }}z\neq -{\frac {1}{e}}.}
At the origin we have

W
0
′
(
0
)
=
1.
{\displaystyle W'_{0}(0)=1.}
Integral
The function W(x), and many other expressions involving W(x), can be integrated using the substitution w = W(x), i.e. x = wew:

∫
W
(
x
)
d
x
=
x
W
(
x
)
−
x
+
e
W
(
x
)
+
C
=
x
(
W
(
x
)
−
1
+
1
W
(
x
)
)
+
C
.
{\displaystyle {\begin{aligned}\int W(x)\,dx&=xW(x)-x+e^{W(x)}+C\\&=x\left(W(x)-1+{\frac {1}{W(x)}}\right)+C.\end{aligned}}}
(The last equation is more common in the literature but is undefined at x = 0). One consequence of this (using the fact that W0(e) = 1) is the identity

∫
0
e
W
0
(
x
)
d
x
=
e
−
1.
{\displaystyle \int _{0}^{e}W_{0}(x)\,dx=e-1.}
Asymptotic expansions
The Taylor series of W0 around 0 can be found using the Lagrange inversion theorem and is given by

W
0
(
x
)
=
∑
n
=
1
∞
(
−
n
)
n
−
1
n
!
x
n
=
x
−
x
2
+
3
2
x
3
−
16
6
x
4
+
125
24
x
5
−
⋯
.
{\displaystyle W_{0}(x)=\sum _{n=1}^{\infty }{\frac {(-n)^{n-1}}{n!}}x^{n}=x-x^{2}+{\tfrac {3}{2}}x^{3}-{\tfrac {16}{6}}x^{4}+{\tfrac {125}{24}}x^{5}-\cdots .}
The radius of convergence is ⁠
1
/
e
⁠, as may be seen by the ratio test. The function defined by this series can be extended to a holomorphic function defined on all complex numbers with a branch cut along the interval (−∞, −⁠
1
/
e
⁠]; this holomorphic function defines the principal branch of the Lambert W function.

For large values of x, W0 is asymptotic to

W
0
(
x
)
=
L
1
−
L
2
+
L
2
L
1
+
L
2
(
−
2
+
L
2
)
2
L
1
2
+
L
2
(
6
−
9
L
2
+
2
L
2
2
)
6
L
1
3
+
L
2
(
−
12
+
36
L
2
−
22
L
2
2
+
3
L
2
3
)
12
L
1
4
+
⋯
=
L
1
−
L
2
+
∑
l
=
0
∞
∑
m
=
1
∞
(
−
1
)
l
[
l
+
m
l
+
1
]
m
!
L
1
−
l
−
m
L
2
m
,
{\displaystyle {\begin{aligned}W_{0}(x)&=L_{1}-L_{2}+{\frac {L_{2}}{L_{1}}}+{\frac {L_{2}\left(-2+L_{2}\right)}{2L_{1}^{2}}}+{\frac {L_{2}\left(6-9L_{2}+2L_{2}^{2}\right)}{6L_{1}^{3}}}+{\frac {L_{2}\left(-12+36L_{2}-22L_{2}^{2}+3L_{2}^{3}\right)}{12L_{1}^{4}}}+\cdots \\[5pt]&=L_{1}-L_{2}+\sum _{l=0}^{\infty }\sum _{m=1}^{\infty }{\frac {(-1)^{l}\left[{\begin{smallmatrix}l+m\\l+1\end{smallmatrix}}\right]}{m!}}L_{1}^{-l-m}L_{2}^{m},\end{aligned}}}
where L1 = ln x, L2 = ln ln x, and [l + m
l + 1] is a non-negative Stirling number of the first kind.[3] Keeping only the first two terms of the expansion,

W
0
(
x
)
=
ln
⁡
x
−
ln
⁡
ln
⁡
x
+
o
(
1
)
.
{\displaystyle W_{0}(x)=\ln x-\ln \ln x+{\mathcal {o}}(1).}
The other real branch, W−1, defined in the interval [−⁠
1
/
e
⁠, 0), has an approximation of the same form as x approaches zero, with in this case L1 = ln(−x) and L2 = ln(−ln(−x)).[3]*/
                cout << "-1" << endl;
            }
        }
    }
    return 0;
}
