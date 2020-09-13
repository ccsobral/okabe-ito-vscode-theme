from math import sqrt

class SomeClass:
    '''Some class that certainly does things.

    Args:
        foo (str): Some string.
    '''

    def __init__(self, foo: str = 'foo'):
        self.msg = f'Here comes {foo}!'

    def is_msg_large(self, msg: str):
        msg_size = len(msg)
        is_large = msg_size > 256
        if is_large:
            print('This message is too large!')
        return is_large

bar = SomeClass('foo')
largeness = bar.is_msg_large(bar.msg)