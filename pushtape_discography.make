core = 7.14
api = 2

projects[entityreference] = 1.0-rc3
projects[entityreference][subdir] = contrib

projects[ctools][version] = 1.0
projects[ctools][subdir] = contrib
projects[ctools][type] = module

projects[defaultcontent] = 1.x-dev
projects[defaultcontent][subdir] = contrib

projects[uuid][version] = 1.x-dev
projects[uuid][type] = module
projects[uuid][subdir] = contrib
projects[uuid][download][type] = git
projects[uuid][download][revision] = bf06527
projects[uuid][download][branch] = 7.x-1.x

projects[features][version] = 1.0-rc3
projects[features][subdir] = contrib
projects[features][type] = module
projects[features][patch][1647894] = http://drupal.org/files/features-1647894-1.patch

projects[pathauto][version] = 1.1
projects[pathauto][subdir] = contrib
projects[pathauto][type] = module
projects[pathauto][patch][936222] = http://drupal.org/files/936222-pathauto-persist.patch

projects[strongarm][version] = 2.0
projects[strongarm][type] = module
projects[strongarm][subdir] = contrib

projects[views][version] = 3.3
projects[views][type] = module
projects[views][subdir] = contrib

projects[panelizer][version] = 3.x-dev
projects[panelizer][subdir] = contrib
projects[panelizer][type] = module
projects[panelizer][download][type] = git
projects[panelizer][download][revision] = c7942f3
projects[panelizer][download][branch] = 7.x-3.x
projects[panelizer][patch][1648040] = http://drupal.org/files/panelizer-no-notice-view-modes-updated.patch