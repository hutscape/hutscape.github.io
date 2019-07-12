---
layout: checklists
title: Computer Networking
description: Things to check for WiFi connectivity to the devices
checks:
  - title: WiFi
    list: [
      Create separate subnet for connecting to connected devices,
      Check no secrets are placed in firmware code
    ]
  - title: Leaked secrets
    subtitle: In case, the secrets are leaked, take these steps immediately
    list: [
      Reset WiFi credentials immediately,
      Remove secrets from entire git history,
      Re-connect all devices with the new WiFi credentials
    ]
references:
  - name: git secrets by Amazon to automatically check for secret patterns in code
    url: https://github.com/awslabs/git-secrets
  - name: git history repository cleaner
    url: https://rtyley.github.io/bfg-repo-cleaner/
---
