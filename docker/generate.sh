#!/bin/bash

sudo podman build --tag docker.io/diehlpk/teaching:latest -f ./Dockerfile
sudo podman login docker.io
id=$(sudo podman inspect --format="{{.Id}}" docker.io/diehlpk/teaching:latest)
sudo podman push $id docker://diehlpk/teaching:latest
