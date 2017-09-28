#include <iostream>
#include <ctime>
#include "object/commit.h"
using namespace std;
using namespace git;
int main(void)
{
    Commit commit{};
    commit.SetMessage("update readme.md");
    commit.AddParent(Hash{"f4a0a3c982fe9accc2423a631359a4cb8f67efcb"});
    auto now = Time::Now();
    commit.SetAuthor(Signature{"chunyi", "704613309@qq.com", now});
    commit.SetCommitter(Signature{"chunyi", "704613309@qq.com", now});
    commit.SetTree(Hash{"2ba1c1f3d023c01ee60abad056c1f72ec905235a"});
    commit.ComputeHash();

    cout << commit.String() << endl;

    cout << commit.Hash().Hex() << endl;
    return 0;
}


