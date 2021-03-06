#ifndef _STANDARD_WU_H
#define _STANDARD_WU_H

#include "standard-package.h"
#include "card.h"
#include "skill.h"

//class Yingzi : public DrawCardsSkill
//{
//public:
//    explicit Yingzi(const QString &owner = "zhouyu", bool can_preshow = true);
//
//    virtual bool cost(TriggerEvent triggerEvent, Room *room, ServerPlayer *player, QVariant &data, ServerPlayer *ask_who = NULL) const;
//    virtual int getDrawNum(ServerPlayer *player, int n) const;
//    virtual bool canPreshow() const;
//
//private:
//    bool m_canPreshow;
//};
//
//class Yinghun : public PhaseChangeSkill
//{
//public:
//    explicit Yinghun(const QString &owner = "sunjian");
//
//    virtual bool canPreshow() const;
//    virtual QStringList triggerable(TriggerEvent triggerEvent, Room *room, ServerPlayer *player, QVariant &data, ServerPlayer * &ask_who) const;
//    virtual bool cost(TriggerEvent triggerEvent, Room *room, ServerPlayer *player, QVariant &data, ServerPlayer *ask_who = NULL) const;
//    virtual bool onPhaseChange(ServerPlayer *target) const;
//
//};
//
//class KurouCard : public SkillCard
//{
//    Q_OBJECT
//
//public:
//    Q_INVOKABLE KurouCard();
//    virtual void extraCost(Room *room, const CardUseStruct &card_use) const;
//    virtual void use(Room *room, ServerPlayer *source, QList<ServerPlayer *> &targets) const;
//};
//
//class FanjianCard : public SkillCard
//{
//    Q_OBJECT
//
//public:
//    Q_INVOKABLE FanjianCard();
//    virtual bool targetFilter(const QList<const Player *> &targets, const Player *to_select, const Player *Self) const;
//    virtual void onEffect(const CardEffectStruct &effect) const;
//};
//
//class LiuliCard : public SkillCard
//{
//    Q_OBJECT
//
//public:
//    Q_INVOKABLE LiuliCard();
//
//    virtual bool targetFilter(const QList<const Player *> &targets, const Player *to_select, const Player *Self) const;
//    virtual void onEffect(const CardEffectStruct &effect) const;
//};
//
//class JieyinCard : public SkillCard
//{
//    Q_OBJECT
//
//public:
//    Q_INVOKABLE JieyinCard();
//    virtual bool targetFilter(const QList<const Player *> &targets, const Player *to_select, const Player *Self) const;
//    virtual void onEffect(const CardEffectStruct &effect) const;
//};
//
//class TianxiangCard : public SkillCard
//{
//    Q_OBJECT
//
//public:
//    Q_INVOKABLE TianxiangCard();
//
//    virtual void onEffect(const CardEffectStruct &effect) const;
//};
//
//class TianyiCard : public SkillCard
//{
//    Q_OBJECT
//
//public:
//    Q_INVOKABLE TianyiCard();
//
//    virtual bool targetFilter(const QList<const Player *> &targets, const Player *to_select, const Player *Self) const;
//    virtual void extraCost(Room *room, const CardUseStruct &card_use) const;
//    virtual void onEffect(const CardEffectStruct &effect) const;
//};
//
//class HaoshiCard : public SkillCard
//{
//    Q_OBJECT
//
//public:
//    Q_INVOKABLE HaoshiCard();
//
//    virtual bool targetFilter(const QList<const Player *> &targets, const Player *to_select, const Player *Self) const;
//    virtual void use(Room *room, ServerPlayer *source, QList<ServerPlayer *> &targets) const;
//};
//
//class DimengCard : public SkillCard
//{
//    Q_OBJECT
//
//public:
//    Q_INVOKABLE DimengCard();
//
//    virtual bool targetFilter(const QList<const Player *> &targets, const Player *to_select, const Player *Self) const;
//    virtual bool targetsFeasible(const QList<const Player *> &targets, const Player *Self) const;
//    virtual void onUse(Room *room, const CardUseStruct &card_use) const;
//    virtual void use(Room *room, ServerPlayer *source, QList<ServerPlayer *> &targets) const;
//};
//
//class ZhijianCard : public SkillCard
//{
//    Q_OBJECT
//
//public:
//    Q_INVOKABLE ZhijianCard();
//
//    virtual bool targetFilter(const QList<const Player *> &targets, const Player *to_select, const Player *Self) const;
//    virtual void extraCost(Room *room, const CardUseStruct &card_use) const;
//    virtual void onEffect(const CardEffectStruct &effect) const;
//};
//
//// class GuzhengCard : public SkillCard
//// {
////     Q_OBJECT
//// 
//// public:
////     Q_INVOKABLE GuzhengCard();
//// 
////     virtual void use(Room *room, ServerPlayer *source, QList<ServerPlayer *> &targets) const;
//// };
//
//class FenxunCard : public SkillCard
//{
//    Q_OBJECT
//
//public:
//    Q_INVOKABLE FenxunCard();
//
//    virtual bool targetFilter(const QList<const Player *> &targets, const Player *to_select, const Player *Self) const;
//    virtual void onEffect(const CardEffectStruct &effect) const;
//};

#endif
