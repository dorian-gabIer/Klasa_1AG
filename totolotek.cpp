#include <iostream>
#include <set>
int main()
{
    std::set<int>lotto;
    while(lotto.size() < 6) lotto.insert(rand()%49+1);
    for (auto ite = lotto.begin(); ite != lotto.end(); ++ite) std::cout << *ite << " ";
    return 0;
}
