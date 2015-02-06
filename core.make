; @file
; Makefile for making a new Drupal site using this profile.

api = 2
core = 7.x

projects[drupal][version] = 7.34

projects[tcs_profile][type] = profile
projects[tcs_profile][download][type] = git
projects[tcs_profile][download][url] = git@github.com:bluedotlab/topical-content-syndicator.git
