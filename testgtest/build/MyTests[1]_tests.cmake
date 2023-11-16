add_test([=[MyClassTest.ComputeValueTest]=]  /workspace/CPP-Self-Learning/testgtest/build/MyTests [==[--gtest_filter=MyClassTest.ComputeValueTest]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[MyClassTest.ComputeValueTest]=]  PROPERTIES WORKING_DIRECTORY /workspace/CPP-Self-Learning/testgtest/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  MyTests_TESTS MyClassTest.ComputeValueTest)
