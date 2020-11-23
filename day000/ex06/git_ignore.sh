#!/bin/bash
find . -type f  | git check-ignore --stdin
