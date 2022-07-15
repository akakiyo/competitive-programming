# Ubuntuの公式コンテナを軸に環境構築
# 22.04ではaptからpython3.8が入っていなかったので20.04で固定する
FROM ubuntu:20.04

# インタラクティブモードにならないようにする
ARG DEBIAN_FRONTEND=noninteractive
# タイムゾーンを日本に設定
ENV TZ=Asia/Tokyo

# インフラを整備
RUN apt-get update && \
    apt-get install -y zsh time tzdata tree git curl

# デフォルトシェルをZ shellにする
RUN chsh -s /bin/zsh

# C++環境想定
RUN apt-get update && \
    apt-get install -y gcc-9 g++-9 nodejs npm

# 一般的なコマンドで使えるように設定
RUN update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-9 30 && \
    update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-9 30 && \
    update-alternatives --install /usr/bin/node node /usr/bin/nodejs 30

# C++でAtCoder Library(ACL)を使えるようにする
RUN git clone https://github.com/atcoder/ac-library.git /lib/ac-library
ENV CPLUS_INCLUDE_PATH /lib/ac-library

# コンテスト補助アプリケーションをインストール
RUN npm install -g atcoder-cli@2.2.0

# # AHC用のRustのinstall
RUN curl https://sh.rustup.rs -sSf | sh -s -- -y
ENV PATH $PATH:/home/root/.cargo/bin

WORKDIR /root/workspace