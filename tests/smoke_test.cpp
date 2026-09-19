// Smoke test for DK_student_manage.
//
// The project has no tests of its own. This exercises the hand-written
// LinkedListMap (src/MyLinkedMap/include/MyLinkedListMap.h) storing the
// Major struct (src/Structs/include/struct.h), which is the primary data
// structure the rest of the project (Course, Clbum, StudentGrade,
// StudentStruct, TeacherStruct) is built the same way around.
//
// remove() is deliberately not exercised here: LinkedListMap::remove()
// never advances its search pointer when the target key is not the first
// node in the list, so calling it on anything but the head spins forever.
// That is a real bug in the repository's own code, left for its owner to
// fix rather than patched here; a smoke test that could hang is worse than
// one with narrower coverage.
#include <cassert>
#include <iostream>
#include <MyLinkedListMap.h>
#include <struct.h>

int main() {
    LinkedListMap<int, Major> majors;
    assert(majors.isEmpty());
    assert(majors.getSize() == 0);

    majors.add(1, Major{1, "Computer Science"});
    majors.add(2, Major{2, "Software Engineering"});

    assert(!majors.isEmpty());
    assert(majors.getSize() == 2);
    assert(majors.contains(1));
    assert(majors.contains(2));
    assert(!majors.contains(3));

    Major found = majors.get(1);
    assert(found.id == 1);
    assert(found.name == "Computer Science");

    majors.set(1, Major{1, "Applied Computer Science"});
    assert(majors.get(1).name == "Applied Computer Science");

    std::cout << "smoke test passed" << std::endl;
    return 0;
}
