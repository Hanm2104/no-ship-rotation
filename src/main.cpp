#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>

using namespace geode::prelude;

// can thiep vao lop PlayerObject cua game
class $modify(PlayerObject) {
    void updateRotation(float p0) {
        // Goi ham goc de cac che do khac hoạt động binh thuong
        PlayerObject::updateRotation(p0);

        // Neu nguoi choi dang cam tau (Ship Mode)
        if (this->m_isShip) {
            // Ep goc xoay cua tau luon bang 0 de giu thien huong nam ngang
            this->setRotation(0.0f);
