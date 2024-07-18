from list import *

def modify(lst, **kwargs):
    match(input()):
        case '추가':
            lst.append(kwargs['value'])

        case '삽입':
            lst.insert(kwargs['index'], kwargs['value'])

        case '수정':
            lst[kwargs['index']] = kwargs['value']

        case '삭제':
            lst.remove(kwargs['value'])

        case '확장':
            lst.extend(kwargs['value'])

        case '정렬':
            lst.sort()

modify(lst, input())