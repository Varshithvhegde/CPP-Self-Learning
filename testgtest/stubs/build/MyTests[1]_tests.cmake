add_test([=[ShoppingCartTest.CheckoutTest]=]  /workspace/CPP-Self-Learning/testgtest/stubs/build/MyTests [==[--gtest_filter=ShoppingCartTest.CheckoutTest]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[ShoppingCartTest.CheckoutTest]=]  PROPERTIES WORKING_DIRECTORY /workspace/CPP-Self-Learning/testgtest/stubs/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  MyTests_TESTS ShoppingCartTest.CheckoutTest)
