# Implementation of browser 

if __name__ == '__main__' :
    pages = ['HOME']
    page = 0

    n = int(input())
    while True :
        route = input()

        if route == 'forward' :
            if page != len(pages) - 1 :
                page += 1
            print(pages[page])
        
        elif route == 'backward' :
            if page != 0 :
                page -= 1
            print(pages[page])

        elif route == 'goto' :
            newpage = input()

            rlen = len(pages) - 1

            while rlen > page :
                pages.pop(rlen)
                rlen -= 1

            pages.append(newpage)
            print(newpage)
            page += 1

        n -= 1
