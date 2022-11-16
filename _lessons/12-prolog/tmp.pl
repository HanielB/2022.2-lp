third([_|[_|[H|_]]], H).

firstPair([H|[H|_]]).

del3([H1|[H2|[_|T]]], [H1|[H2|T]]).

myLength([], 0).
myLength([_|Tail], Len) :- myLength(Tail, TailLen), Len =:= TailLen + 1.
