; @file
; Build dependencies for the Topical Content Syndicator.

; Metadata.
api = 2
core = 7.x
defaults[projects][subdir] = contrib

; Core (not strictly required, depending on how if you build with core.make.)
projects[drupal][type] = core
projects[drupal][version] = 7.34

; d.o modules.
projects[admin_menu][version] = 3.0-rc4
projects[coder][version] = 2.2
projects[ctools][version] = 1.4
projects[date][version] = 2.8
projects[devel][version] = 1.5
projects[diff][version] = 3.2
projects[entity][version] = 1.5
projects[entityreference][version] = 1.1
projects[features][version] = 2.0
projects[features_extra][version] = 1.0-beta1
projects[field_group][version] = 1.4
projects[filter_perms][version] = 1.0
projects[libraries][version] = 2.2
projects[link][version] = 1.2
projects[maillog][version] = 1.x-dev
projects[module_filter][version] = 2.0-alpha2
projects[pathauto][version] = 1.2
projects[strongarm][version] = 2.0
projects[token][version] = 1.5
projects[views][version] = 3.8

; d.o themes.
projects[bootstrap][version] = "3.0"

;; Libraries here.
