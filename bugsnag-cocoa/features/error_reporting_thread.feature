Feature: Error Reporting Thread

  Background:
    Given I clear all UserDefaults data

  Scenario: Only 1 thread is flagged as the error reporting thread
    When I run "HandledErrorScenario"
    And I wait to receive a request
    Then the request is valid for the error reporting API version "4.0" for the "iOS Bugsnag Notifier" notifier
    And the thread with id "0" contains the error reporting flag
