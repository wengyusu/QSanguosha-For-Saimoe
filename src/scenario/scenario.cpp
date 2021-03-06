#include "scenario.h"
#include "engine.h"

Scenario::Scenario(const QString &name)
    : Package(name, Package::SpecialPack), rule(NULL), random_seat(true)
{
}

int Scenario::getPlayerCount() const
{
    return 1 + loyalists.length() + rebels.length() + renegades.length();
}

ScenarioRule *Scenario::getRule() const
{
    return rule;
}

bool Scenario::exposeRoles() const
{
    return true;
}

void Scenario::onTagSet(Room *, const QString &) const
{

}

QString Scenario::getRoles() const
{
    QString roles = "Z";
    for (int i = 0; i < loyalists.length(); i++)
        roles.append('C');
    for (int i = 0; i < rebels.length(); i++)
        roles.append('N');
    for (int i = 0; i < rebels.length(); i++)
        roles.append('F');
    return roles;
}

void Scenario::assign(QStringList &generals, QStringList &, QStringList &roles, Room *) const
{
    generals << lord << loyalists << rebels << renegades;
    qShuffle(generals);

    foreach (const QString &general, generals) {
        if (general == lord)
            roles << "lord";
        else if (loyalists.contains(general))
            roles << "loyalist";
        else if (rebels.contains(general))
            roles << "rebel";
        else
            roles << "renegade";
    }
}

bool Scenario::generalSelection() const
{
    return false;
}

AI::Relation Scenario::relationTo(const ServerPlayer *a, const ServerPlayer *b) const
{
    return AI::GetRelationHegemony(a, b);
}

