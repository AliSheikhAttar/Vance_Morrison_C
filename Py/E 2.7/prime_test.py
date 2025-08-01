import prime 
def test_ss():
    assert prime.is_divisible(6,2)
    assert not prime.is_divisible(2,5)
    assert prime.is_divisible(0,18)
    assert prime.is_divisible(51,17)

