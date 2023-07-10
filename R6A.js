 //R6A 
 
 //P2
list(1, 2, 3);//(a)
pair(1,pair(2, 3));//(b)
list(list(1, 2), list(3, 4), list(5, 6));//(c)


//P3
/*

const lst = list(7, 6, 5, 4, 3, 2, 1);
//list_ref(lst, 3);
head(tail(tail(tail(lst))));

*/
//(a)

/*

const lst = list(list(7), list(6, 5, 4), list(3, 2), 1);
//list_ref(list_ref(lst, 1), 2);
head(tail(tail(head(tail(lst)))));

*/
//(b)

/*
const lst =
    list(7,
        list(6,
            list(5,
                list(4,
                    list(3,
                        list(2,
                            list(1)))))));
head(head(tail(head(tail(head(tail(lst)))))));
*/