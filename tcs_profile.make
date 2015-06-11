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
projects[better_formats][version] = 1.0-beta1
projects[coder][version] = 2.2
projects[ctools][version] = 1.7
projects[date][version] = 2.8
projects[devel][version] = 1.5
projects[diff][version] = 3.2
projects[ds][version] = 2.8
projects[entity][version] = 1.6
projects[entityreference][version] = 1.1
projects[features][version] = 2.0
projects[features_extra][version] = 1.0-beta1
projects[feeds][version] = 2.0-alpha8
projects[feeds_tamper][version] = 1.0
projects[field_group][version] = 1.4
projects[filter_perms][version] = 1.0
projects[job_scheduler][version] = 2.0-alpha3
projects[jquery_update][version] = 2.5
projects[libraries][version] = 2.2
projects[link][version] = 1.2
projects[maillog][version] = 1.x-dev
projects[markdown][version] = 1.2
projects[module_filter][version] = 2.0-alpha2
projects[pathauto][version] = 1.2
projects[rules][version] = 2.9
projects[strongarm][version] = 2.0
projects[token][version] = 1.5
projects[uuid][version] = 1.0-alpha6
projects[uuid_features][version] = 1.0-alpha4
projects[views][version] = 3.11
projects[views_infinite_scroll][version] = 1.1

; Libraries
libraries[autopager][download][type] = "get"
libraries[autopager][download][url] = "http://jquery-autopager.googlecode.com/files/jquery.autopager-1.0.0.js"
libraries[autopager][directory_name] = "js"
libraries[autopager][destination] = "/modules/contrib/views_infinite_scroll"

; d.o themes.
projects[bootstrap][version] = "3.1-beta2"

;; Libraries here.
