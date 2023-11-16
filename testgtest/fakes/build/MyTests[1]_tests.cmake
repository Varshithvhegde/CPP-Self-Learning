add_test([=[NotificationServiceTest.NotifyUserTest]=]  /workspace/CPP-Self-Learning/testgtest/fakes/build/MyTests [==[--gtest_filter=NotificationServiceTest.NotifyUserTest]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[NotificationServiceTest.NotifyUserTest]=]  PROPERTIES WORKING_DIRECTORY /workspace/CPP-Self-Learning/testgtest/fakes/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  MyTests_TESTS NotificationServiceTest.NotifyUserTest)
