/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.2 at Sat Dec  8 17:29:54 2018. */

#ifndef PB_MSG_PB_H_INCLUDED
#define PB_MSG_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _NActorAddAmmo {
    uint32_t UID;
    int32_t PlayerUID;
    uint32_t AmmoId;
    uint32_t Amount;
    bool IsRandomSpawned;
/* @@protoc_insertion_point(struct:NActorAddAmmo) */
} NActorAddAmmo;

typedef struct _NActorDie {
    uint32_t UID;
/* @@protoc_insertion_point(struct:NActorDie) */
} NActorDie;

typedef struct _NActorDir {
    uint32_t UID;
    int32_t Dir;
/* @@protoc_insertion_point(struct:NActorDir) */
} NActorDir;

typedef struct _NActorHeal {
    uint32_t UID;
    int32_t PlayerUID;
    int32_t Amount;
    bool IsRandomSpawned;
/* @@protoc_insertion_point(struct:NActorHeal) */
} NActorHeal;

typedef struct _NActorMelee {
    uint32_t UID;
    char BulletClass[128];
    int32_t HitType;
    int32_t TargetKind;
    uint32_t TargetUID;
/* @@protoc_insertion_point(struct:NActorMelee) */
} NActorMelee;

typedef struct _NActorPickupAll {
    uint32_t UID;
    bool PickupAll;
/* @@protoc_insertion_point(struct:NActorPickupAll) */
} NActorPickupAll;

typedef struct _NActorReplaceGun {
    uint32_t UID;
    uint32_t GunIdx;
    char Gun[128];
/* @@protoc_insertion_point(struct:NActorReplaceGun) */
} NActorReplaceGun;

typedef struct _NActorState {
    uint32_t UID;
    int32_t State;
/* @@protoc_insertion_point(struct:NActorState) */
} NActorState;

typedef struct _NActorSwitchGun {
    uint32_t UID;
    uint32_t GunIdx;
/* @@protoc_insertion_point(struct:NActorSwitchGun) */
} NActorSwitchGun;

typedef struct _NActorUseAmmo {
    uint32_t UID;
    int32_t PlayerUID;
    uint32_t AmmoId;
    uint32_t Amount;
/* @@protoc_insertion_point(struct:NActorUseAmmo) */
} NActorUseAmmo;

typedef struct _NCampaignDef {
    char Path[4096];
    int32_t GameMode;
    uint32_t Mission;
/* @@protoc_insertion_point(struct:NCampaignDef) */
} NCampaignDef;

typedef struct _NClientId {
    uint32_t Id;
    uint32_t FirstPlayerUID;
/* @@protoc_insertion_point(struct:NClientId) */
} NClientId;

typedef struct _NColor {
    int32_t RGBA;
/* @@protoc_insertion_point(struct:NColor) */
} NColor;

typedef struct _NConfig {
    char Name[128];
    char Value[128];
/* @@protoc_insertion_point(struct:NConfig) */
} NConfig;

typedef struct _NGameBegin {
    int32_t MissionTime;
/* @@protoc_insertion_point(struct:NGameBegin) */
} NGameBegin;

typedef struct _NGunState {
    uint32_t ActorUID;
    int32_t State;
/* @@protoc_insertion_point(struct:NGunState) */
} NGunState;

typedef struct _NMapObjectDamage {
    uint32_t UID;
    int32_t Power;
    int32_t ActorUID;
    int32_t PlayerUID;
    uint32_t Flags;
/* @@protoc_insertion_point(struct:NMapObjectDamage) */
} NMapObjectDamage;

typedef struct _NMapObjectRemove {
    uint32_t UID;
    int32_t ActorUID;
    int32_t PlayerUID;
    uint32_t Flags;
/* @@protoc_insertion_point(struct:NMapObjectRemove) */
} NMapObjectRemove;

typedef struct _NMissionEnd {
    int32_t Delay;
    bool IsQuit;
    char Msg[128];
/* @@protoc_insertion_point(struct:NMissionEnd) */
} NMissionEnd;

typedef struct _NObjectiveUpdate {
    uint32_t ObjectiveId;
    int32_t Count;
/* @@protoc_insertion_point(struct:NObjectiveUpdate) */
} NObjectiveUpdate;

typedef struct _NPlayerRemove {
    uint32_t UID;
/* @@protoc_insertion_point(struct:NPlayerRemove) */
} NPlayerRemove;

typedef struct _NPlayerStats {
    int32_t Score;
    int32_t Kills;
    int32_t Suicides;
    int32_t Friendlies;
/* @@protoc_insertion_point(struct:NPlayerStats) */
} NPlayerStats;

typedef struct _NRemoveBullet {
    uint32_t UID;
/* @@protoc_insertion_point(struct:NRemoveBullet) */
} NRemoveBullet;

typedef struct _NRemovePickup {
    uint32_t UID;
    int32_t SpawnerUID;
/* @@protoc_insertion_point(struct:NRemovePickup) */
} NRemovePickup;

typedef struct _NRescueCharacter {
    uint32_t UID;
/* @@protoc_insertion_point(struct:NRescueCharacter) */
} NRescueCharacter;

typedef struct _NScore {
    uint32_t PlayerUID;
    int32_t Score;
/* @@protoc_insertion_point(struct:NScore) */
} NScore;

typedef struct _NServerInfo {
    int32_t ProtocolVersion;
    uint32_t ENetPort;
    char Hostname[12];
    int32_t GameMode;
    char CampaignName[20];
    int32_t MissionNumber;
    int32_t NumPlayers;
    int32_t MaxPlayers;
/* @@protoc_insertion_point(struct:NServerInfo) */
} NServerInfo;

typedef struct _NVec2 {
    float x;
    float y;
/* @@protoc_insertion_point(struct:NVec2) */
} NVec2;

typedef struct _NVec2i {
    int32_t x;
    int32_t y;
/* @@protoc_insertion_point(struct:NVec2i) */
} NVec2i;

typedef struct _NActorAdd {
    uint32_t UID;
    uint32_t CharId;
    int32_t Direction;
    int32_t Health;
    int32_t PlayerUID;
    uint32_t ThingFlags;
    NVec2 Pos;
/* @@protoc_insertion_point(struct:NActorAdd) */
} NActorAdd;

typedef struct _NActorHit {
    uint32_t UID;
    int32_t PlayerUID;
    int32_t HitterPlayerUID;
    int32_t Special;
    int32_t Power;
    NVec2 Vel;
    float Mass;
/* @@protoc_insertion_point(struct:NActorHit) */
} NActorHit;

typedef struct _NActorImpulse {
    uint32_t UID;
    NVec2 Vel;
    NVec2 Pos;
/* @@protoc_insertion_point(struct:NActorImpulse) */
} NActorImpulse;

typedef struct _NActorMove {
    uint32_t UID;
    NVec2 Pos;
    NVec2 MoveVel;
/* @@protoc_insertion_point(struct:NActorMove) */
} NActorMove;

typedef struct _NActorSlide {
    uint32_t UID;
    NVec2 Vel;
/* @@protoc_insertion_point(struct:NActorSlide) */
} NActorSlide;

typedef struct _NAddBullet {
    uint32_t UID;
    char BulletClass[128];
    NVec2 MuzzlePos;
    int32_t MuzzleHeight;
    float Angle;
    int32_t Elevation;
    uint32_t Flags;
    int32_t PlayerUID;
    int32_t ActorUID;
/* @@protoc_insertion_point(struct:NAddBullet) */
} NAddBullet;

typedef struct _NAddKeys {
    uint32_t KeyFlags;
    NVec2 Pos;
/* @@protoc_insertion_point(struct:NAddKeys) */
} NAddKeys;

typedef struct _NAddPickup {
    uint32_t UID;
    char PickupClass[128];
    bool IsRandomSpawned;
    int32_t SpawnerUID;
    uint32_t ThingFlags;
    NVec2 Pos;
/* @@protoc_insertion_point(struct:NAddPickup) */
} NAddPickup;

typedef struct _NBulletBounce {
    uint32_t UID;
    int32_t HitType;
    bool Spark;
    NVec2 BouncePos;
    NVec2 Pos;
    NVec2 Vel;
    bool HitSound;
    bool WallMark;
/* @@protoc_insertion_point(struct:NBulletBounce) */
} NBulletBounce;

typedef struct _NCharColors {
    NColor Skin;
    NColor Arms;
    NColor Body;
    NColor Legs;
    NColor Hair;
/* @@protoc_insertion_point(struct:NCharColors) */
} NCharColors;

typedef struct _NExploreTiles_Run {
    NVec2i Tile;
    int32_t Run;
/* @@protoc_insertion_point(struct:NExploreTiles_Run) */
} NExploreTiles_Run;

typedef struct _NGunFire {
    int32_t UID;
    int32_t PlayerUID;
    char Gun[128];
    NVec2 MuzzlePos;
    int32_t Z;
    float Angle;
    bool Sound;
    uint32_t Flags;
    bool IsGun;
/* @@protoc_insertion_point(struct:NGunFire) */
} NGunFire;

typedef struct _NGunReload {
    int32_t PlayerUID;
    char Gun[128];
    NVec2 Pos;
    int32_t Direction;
/* @@protoc_insertion_point(struct:NGunReload) */
} NGunReload;

typedef struct _NMapObjectAdd {
    uint32_t UID;
    char MapObjectClass[128];
    NVec2 Pos;
    uint32_t ThingFlags;
    int32_t Health;
/* @@protoc_insertion_point(struct:NMapObjectAdd) */
} NMapObjectAdd;

typedef struct _NMissionComplete {
    bool ShowMsg;
    NVec2i ExitStart;
    NVec2i ExitEnd;
/* @@protoc_insertion_point(struct:NMissionComplete) */
} NMissionComplete;

typedef struct _NSound {
    char Sound[128];
    NVec2 Pos;
    bool IsHit;
/* @@protoc_insertion_point(struct:NSound) */
} NSound;

typedef struct _NTileSet {
    NVec2i Pos;
    char ClassName[128];
    char ClassAltName[128];
    int32_t RunLength;
/* @@protoc_insertion_point(struct:NTileSet) */
} NTileSet;

typedef struct _NTrigger {
    uint32_t ID;
    NVec2i Tile;
/* @@protoc_insertion_point(struct:NTrigger) */
} NTrigger;

typedef struct _NExploreTiles {
    pb_size_t Runs_count;
    NExploreTiles_Run Runs[16];
/* @@protoc_insertion_point(struct:NExploreTiles) */
} NExploreTiles;

typedef struct _NPlayerData {
    char Name[20];
    char CharacterClass[128];
    NCharColors Colors;
    pb_size_t Weapons_count;
    char Weapons[3][128];
    uint32_t Lives;
    NPlayerStats Stats;
    NPlayerStats Totals;
    uint32_t MaxHealth;
    uint32_t LastMission;
    uint32_t UID;
/* @@protoc_insertion_point(struct:NPlayerData) */
} NPlayerData;

/* Default values for struct fields */
extern const int32_t NActorAdd_Direction_default;
extern const int32_t NActorAdd_PlayerUID_default;
extern const int32_t NActorHeal_PlayerUID_default;
extern const int32_t NActorHit_PlayerUID_default;
extern const int32_t NActorHit_HitterPlayerUID_default;
extern const int32_t NActorAddAmmo_PlayerUID_default;
extern const int32_t NActorUseAmmo_PlayerUID_default;
extern const int32_t NAddPickup_SpawnerUID_default;
extern const int32_t NRemovePickup_SpawnerUID_default;
extern const int32_t NGunReload_PlayerUID_default;
extern const int32_t NGunFire_UID_default;
extern const int32_t NGunFire_PlayerUID_default;
extern const int32_t NAddBullet_PlayerUID_default;
extern const int32_t NAddBullet_ActorUID_default;

/* Initializer values for message structs */
#define NServerInfo_init_default                 {0, 0, "", 0, "", 0, 0, 0}
#define NClientId_init_default                   {0, 0}
#define NCampaignDef_init_default                {"", 0, 0}
#define NColor_init_default                      {0}
#define NCharColors_init_default                 {NColor_init_default, NColor_init_default, NColor_init_default, NColor_init_default, NColor_init_default}
#define NPlayerStats_init_default                {0, 0, 0, 0}
#define NPlayerData_init_default                 {"", "", NCharColors_init_default, 0, {"", "", ""}, 0, NPlayerStats_init_default, NPlayerStats_init_default, 0, 0, 0}
#define NPlayerRemove_init_default               {0}
#define NConfig_init_default                     {"", ""}
#define NTileSet_init_default                    {NVec2i_init_default, "", "", 0}
#define NMapObjectAdd_init_default               {0, "", NVec2_init_default, 0, 0}
#define NMapObjectDamage_init_default            {0, 0, 0, 0, 0}
#define NMapObjectRemove_init_default            {0, 0, 0, 0}
#define NScore_init_default                      {0, 0}
#define NSound_init_default                      {"", NVec2_init_default, 0}
#define NVec2i_init_default                      {0, 0}
#define NVec2_init_default                       {0, 0}
#define NGameBegin_init_default                  {0}
#define NActorAdd_init_default                   {0, 0, 4, 0, -1, 0, NVec2_init_default}
#define NActorMove_init_default                  {0, NVec2_init_default, NVec2_init_default}
#define NActorState_init_default                 {0, 0}
#define NActorDir_init_default                   {0, 0}
#define NActorSlide_init_default                 {0, NVec2_init_default}
#define NActorImpulse_init_default               {0, NVec2_init_default, NVec2_init_default}
#define NActorSwitchGun_init_default             {0, 0}
#define NActorPickupAll_init_default             {0, 0}
#define NActorReplaceGun_init_default            {0, 0, ""}
#define NActorHeal_init_default                  {0, -1, 0, 0}
#define NActorHit_init_default                   {0, -1, -1, 0, 0, NVec2_init_default, 0}
#define NActorAddAmmo_init_default               {0, -1, 0, 0, 0}
#define NActorUseAmmo_init_default               {0, -1, 0, 0}
#define NActorDie_init_default                   {0}
#define NActorMelee_init_default                 {0, "", 0, 0, 0}
#define NAddPickup_init_default                  {0, "", 0, -1, 0, NVec2_init_default}
#define NRemovePickup_init_default               {0, -1}
#define NBulletBounce_init_default               {0, 0, 0, NVec2_init_default, NVec2_init_default, NVec2_init_default, 0, 0}
#define NRemoveBullet_init_default               {0}
#define NGunReload_init_default                  {-1, "", NVec2_init_default, 0}
#define NGunFire_init_default                    {-1, -1, "", NVec2_init_default, 0, 0, 0, 0, 0}
#define NGunState_init_default                   {0, 0}
#define NAddBullet_init_default                  {0, "", NVec2_init_default, 0, 0, 0, 0, -1, -1}
#define NTrigger_init_default                    {0, NVec2i_init_default}
#define NExploreTiles_init_default               {0, {NExploreTiles_Run_init_default, NExploreTiles_Run_init_default, NExploreTiles_Run_init_default, NExploreTiles_Run_init_default, NExploreTiles_Run_init_default, NExploreTiles_Run_init_default, NExploreTiles_Run_init_default, NExploreTiles_Run_init_default, NExploreTiles_Run_init_default, NExploreTiles_Run_init_default, NExploreTiles_Run_init_default, NExploreTiles_Run_init_default, NExploreTiles_Run_init_default, NExploreTiles_Run_init_default, NExploreTiles_Run_init_default, NExploreTiles_Run_init_default}}
#define NExploreTiles_Run_init_default           {NVec2i_init_default, 0}
#define NRescueCharacter_init_default            {0}
#define NObjectiveUpdate_init_default            {0, 0}
#define NAddKeys_init_default                    {0, NVec2_init_default}
#define NMissionComplete_init_default            {0, NVec2i_init_default, NVec2i_init_default}
#define NMissionEnd_init_default                 {0, 0, ""}
#define NServerInfo_init_zero                    {0, 0, "", 0, "", 0, 0, 0}
#define NClientId_init_zero                      {0, 0}
#define NCampaignDef_init_zero                   {"", 0, 0}
#define NColor_init_zero                         {0}
#define NCharColors_init_zero                    {NColor_init_zero, NColor_init_zero, NColor_init_zero, NColor_init_zero, NColor_init_zero}
#define NPlayerStats_init_zero                   {0, 0, 0, 0}
#define NPlayerData_init_zero                    {"", "", NCharColors_init_zero, 0, {"", "", ""}, 0, NPlayerStats_init_zero, NPlayerStats_init_zero, 0, 0, 0}
#define NPlayerRemove_init_zero                  {0}
#define NConfig_init_zero                        {"", ""}
#define NTileSet_init_zero                       {NVec2i_init_zero, "", "", 0}
#define NMapObjectAdd_init_zero                  {0, "", NVec2_init_zero, 0, 0}
#define NMapObjectDamage_init_zero               {0, 0, 0, 0, 0}
#define NMapObjectRemove_init_zero               {0, 0, 0, 0}
#define NScore_init_zero                         {0, 0}
#define NSound_init_zero                         {"", NVec2_init_zero, 0}
#define NVec2i_init_zero                         {0, 0}
#define NVec2_init_zero                          {0, 0}
#define NGameBegin_init_zero                     {0}
#define NActorAdd_init_zero                      {0, 0, 0, 0, 0, 0, NVec2_init_zero}
#define NActorMove_init_zero                     {0, NVec2_init_zero, NVec2_init_zero}
#define NActorState_init_zero                    {0, 0}
#define NActorDir_init_zero                      {0, 0}
#define NActorSlide_init_zero                    {0, NVec2_init_zero}
#define NActorImpulse_init_zero                  {0, NVec2_init_zero, NVec2_init_zero}
#define NActorSwitchGun_init_zero                {0, 0}
#define NActorPickupAll_init_zero                {0, 0}
#define NActorReplaceGun_init_zero               {0, 0, ""}
#define NActorHeal_init_zero                     {0, 0, 0, 0}
#define NActorHit_init_zero                      {0, 0, 0, 0, 0, NVec2_init_zero, 0}
#define NActorAddAmmo_init_zero                  {0, 0, 0, 0, 0}
#define NActorUseAmmo_init_zero                  {0, 0, 0, 0}
#define NActorDie_init_zero                      {0}
#define NActorMelee_init_zero                    {0, "", 0, 0, 0}
#define NAddPickup_init_zero                     {0, "", 0, 0, 0, NVec2_init_zero}
#define NRemovePickup_init_zero                  {0, 0}
#define NBulletBounce_init_zero                  {0, 0, 0, NVec2_init_zero, NVec2_init_zero, NVec2_init_zero, 0, 0}
#define NRemoveBullet_init_zero                  {0}
#define NGunReload_init_zero                     {0, "", NVec2_init_zero, 0}
#define NGunFire_init_zero                       {0, 0, "", NVec2_init_zero, 0, 0, 0, 0, 0}
#define NGunState_init_zero                      {0, 0}
#define NAddBullet_init_zero                     {0, "", NVec2_init_zero, 0, 0, 0, 0, 0, 0}
#define NTrigger_init_zero                       {0, NVec2i_init_zero}
#define NExploreTiles_init_zero                  {0, {NExploreTiles_Run_init_zero, NExploreTiles_Run_init_zero, NExploreTiles_Run_init_zero, NExploreTiles_Run_init_zero, NExploreTiles_Run_init_zero, NExploreTiles_Run_init_zero, NExploreTiles_Run_init_zero, NExploreTiles_Run_init_zero, NExploreTiles_Run_init_zero, NExploreTiles_Run_init_zero, NExploreTiles_Run_init_zero, NExploreTiles_Run_init_zero, NExploreTiles_Run_init_zero, NExploreTiles_Run_init_zero, NExploreTiles_Run_init_zero, NExploreTiles_Run_init_zero}}
#define NExploreTiles_Run_init_zero              {NVec2i_init_zero, 0}
#define NRescueCharacter_init_zero               {0}
#define NObjectiveUpdate_init_zero               {0, 0}
#define NAddKeys_init_zero                       {0, NVec2_init_zero}
#define NMissionComplete_init_zero               {0, NVec2i_init_zero, NVec2i_init_zero}
#define NMissionEnd_init_zero                    {0, 0, ""}

/* Field tags (for use in manual encoding/decoding) */
#define NActorAddAmmo_UID_tag                    1
#define NActorAddAmmo_PlayerUID_tag              2
#define NActorAddAmmo_AmmoId_tag                 3
#define NActorAddAmmo_Amount_tag                 4
#define NActorAddAmmo_IsRandomSpawned_tag        5
#define NActorDie_UID_tag                        1
#define NActorDir_UID_tag                        1
#define NActorDir_Dir_tag                        2
#define NActorHeal_UID_tag                       1
#define NActorHeal_PlayerUID_tag                 2
#define NActorHeal_Amount_tag                    3
#define NActorHeal_IsRandomSpawned_tag           4
#define NActorMelee_UID_tag                      1
#define NActorMelee_BulletClass_tag              2
#define NActorMelee_HitType_tag                  3
#define NActorMelee_TargetKind_tag               4
#define NActorMelee_TargetUID_tag                5
#define NActorPickupAll_UID_tag                  1
#define NActorPickupAll_PickupAll_tag            2
#define NActorReplaceGun_UID_tag                 1
#define NActorReplaceGun_GunIdx_tag              2
#define NActorReplaceGun_Gun_tag                 3
#define NActorState_UID_tag                      1
#define NActorState_State_tag                    2
#define NActorSwitchGun_UID_tag                  1
#define NActorSwitchGun_GunIdx_tag               2
#define NActorUseAmmo_UID_tag                    1
#define NActorUseAmmo_PlayerUID_tag              2
#define NActorUseAmmo_AmmoId_tag                 3
#define NActorUseAmmo_Amount_tag                 4
#define NCampaignDef_Path_tag                    1
#define NCampaignDef_GameMode_tag                2
#define NCampaignDef_Mission_tag                 3
#define NClientId_Id_tag                         1
#define NClientId_FirstPlayerUID_tag             2
#define NColor_RGBA_tag                          1
#define NConfig_Name_tag                         1
#define NConfig_Value_tag                        2
#define NGameBegin_MissionTime_tag               1
#define NGunState_ActorUID_tag                   1
#define NGunState_State_tag                      2
#define NMapObjectDamage_UID_tag                 1
#define NMapObjectDamage_Power_tag               2
#define NMapObjectDamage_ActorUID_tag            3
#define NMapObjectDamage_PlayerUID_tag           4
#define NMapObjectDamage_Flags_tag               5
#define NMapObjectRemove_UID_tag                 1
#define NMapObjectRemove_ActorUID_tag            2
#define NMapObjectRemove_PlayerUID_tag           3
#define NMapObjectRemove_Flags_tag               4
#define NMissionEnd_Delay_tag                    1
#define NMissionEnd_IsQuit_tag                   2
#define NMissionEnd_Msg_tag                      3
#define NObjectiveUpdate_ObjectiveId_tag         1
#define NObjectiveUpdate_Count_tag               2
#define NPlayerRemove_UID_tag                    1
#define NPlayerStats_Score_tag                   1
#define NPlayerStats_Kills_tag                   2
#define NPlayerStats_Suicides_tag                3
#define NPlayerStats_Friendlies_tag              4
#define NRemoveBullet_UID_tag                    1
#define NRemovePickup_UID_tag                    1
#define NRemovePickup_SpawnerUID_tag             2
#define NRescueCharacter_UID_tag                 1
#define NScore_PlayerUID_tag                     1
#define NScore_Score_tag                         2
#define NServerInfo_ProtocolVersion_tag          1
#define NServerInfo_ENetPort_tag                 2
#define NServerInfo_Hostname_tag                 3
#define NServerInfo_GameMode_tag                 4
#define NServerInfo_CampaignName_tag             5
#define NServerInfo_MissionNumber_tag            6
#define NServerInfo_NumPlayers_tag               7
#define NServerInfo_MaxPlayers_tag               8
#define NVec2_x_tag                              1
#define NVec2_y_tag                              2
#define NVec2i_x_tag                             1
#define NVec2i_y_tag                             2
#define NActorAdd_UID_tag                        1
#define NActorAdd_CharId_tag                     2
#define NActorAdd_Direction_tag                  3
#define NActorAdd_Health_tag                     4
#define NActorAdd_PlayerUID_tag                  5
#define NActorAdd_ThingFlags_tag                 6
#define NActorAdd_Pos_tag                        7
#define NActorHit_UID_tag                        1
#define NActorHit_PlayerUID_tag                  2
#define NActorHit_HitterPlayerUID_tag            3
#define NActorHit_Special_tag                    4
#define NActorHit_Power_tag                      5
#define NActorHit_Vel_tag                        6
#define NActorHit_Mass_tag                       7
#define NActorImpulse_UID_tag                    1
#define NActorImpulse_Vel_tag                    2
#define NActorImpulse_Pos_tag                    3
#define NActorMove_UID_tag                       1
#define NActorMove_Pos_tag                       2
#define NActorMove_MoveVel_tag                   3
#define NActorSlide_UID_tag                      1
#define NActorSlide_Vel_tag                      2
#define NAddBullet_UID_tag                       1
#define NAddBullet_BulletClass_tag               2
#define NAddBullet_MuzzlePos_tag                 3
#define NAddBullet_MuzzleHeight_tag              4
#define NAddBullet_Angle_tag                     5
#define NAddBullet_Elevation_tag                 6
#define NAddBullet_Flags_tag                     7
#define NAddBullet_PlayerUID_tag                 8
#define NAddBullet_ActorUID_tag                  9
#define NAddKeys_KeyFlags_tag                    1
#define NAddKeys_Pos_tag                         2
#define NAddPickup_UID_tag                       1
#define NAddPickup_PickupClass_tag               2
#define NAddPickup_IsRandomSpawned_tag           3
#define NAddPickup_SpawnerUID_tag                4
#define NAddPickup_ThingFlags_tag                5
#define NAddPickup_Pos_tag                       6
#define NBulletBounce_UID_tag                    1
#define NBulletBounce_HitType_tag                2
#define NBulletBounce_Spark_tag                  3
#define NBulletBounce_BouncePos_tag              4
#define NBulletBounce_Pos_tag                    5
#define NBulletBounce_Vel_tag                    6
#define NBulletBounce_HitSound_tag               7
#define NBulletBounce_WallMark_tag               8
#define NCharColors_Skin_tag                     1
#define NCharColors_Arms_tag                     2
#define NCharColors_Body_tag                     3
#define NCharColors_Legs_tag                     4
#define NCharColors_Hair_tag                     5
#define NExploreTiles_Run_Tile_tag               1
#define NExploreTiles_Run_Run_tag                2
#define NGunFire_UID_tag                         1
#define NGunFire_PlayerUID_tag                   2
#define NGunFire_Gun_tag                         3
#define NGunFire_MuzzlePos_tag                   4
#define NGunFire_Z_tag                           5
#define NGunFire_Angle_tag                       6
#define NGunFire_Sound_tag                       7
#define NGunFire_Flags_tag                       8
#define NGunFire_IsGun_tag                       9
#define NGunReload_PlayerUID_tag                 1
#define NGunReload_Gun_tag                       2
#define NGunReload_Pos_tag                       3
#define NGunReload_Direction_tag                 4
#define NMapObjectAdd_UID_tag                    1
#define NMapObjectAdd_MapObjectClass_tag         2
#define NMapObjectAdd_Pos_tag                    3
#define NMapObjectAdd_ThingFlags_tag             4
#define NMapObjectAdd_Health_tag                 5
#define NMissionComplete_ShowMsg_tag             1
#define NMissionComplete_ExitStart_tag           2
#define NMissionComplete_ExitEnd_tag             3
#define NSound_Sound_tag                         1
#define NSound_Pos_tag                           2
#define NSound_IsHit_tag                         3
#define NTileSet_Pos_tag                         1
#define NTileSet_ClassName_tag                   2
#define NTileSet_ClassAltName_tag                3
#define NTileSet_RunLength_tag                   4
#define NTrigger_ID_tag                          1
#define NTrigger_Tile_tag                        2
#define NExploreTiles_Runs_tag                   1
#define NPlayerData_Name_tag                     1
#define NPlayerData_CharacterClass_tag           2
#define NPlayerData_Colors_tag                   3
#define NPlayerData_Weapons_tag                  4
#define NPlayerData_Lives_tag                    5
#define NPlayerData_Stats_tag                    6
#define NPlayerData_Totals_tag                   7
#define NPlayerData_MaxHealth_tag                8
#define NPlayerData_LastMission_tag              9
#define NPlayerData_UID_tag                      10

/* Struct field encoding specification for nanopb */
extern const pb_field_t NServerInfo_fields[9];
extern const pb_field_t NClientId_fields[3];
extern const pb_field_t NCampaignDef_fields[4];
extern const pb_field_t NColor_fields[2];
extern const pb_field_t NCharColors_fields[6];
extern const pb_field_t NPlayerStats_fields[5];
extern const pb_field_t NPlayerData_fields[11];
extern const pb_field_t NPlayerRemove_fields[2];
extern const pb_field_t NConfig_fields[3];
extern const pb_field_t NTileSet_fields[5];
extern const pb_field_t NMapObjectAdd_fields[6];
extern const pb_field_t NMapObjectDamage_fields[6];
extern const pb_field_t NMapObjectRemove_fields[5];
extern const pb_field_t NScore_fields[3];
extern const pb_field_t NSound_fields[4];
extern const pb_field_t NVec2i_fields[3];
extern const pb_field_t NVec2_fields[3];
extern const pb_field_t NGameBegin_fields[2];
extern const pb_field_t NActorAdd_fields[8];
extern const pb_field_t NActorMove_fields[4];
extern const pb_field_t NActorState_fields[3];
extern const pb_field_t NActorDir_fields[3];
extern const pb_field_t NActorSlide_fields[3];
extern const pb_field_t NActorImpulse_fields[4];
extern const pb_field_t NActorSwitchGun_fields[3];
extern const pb_field_t NActorPickupAll_fields[3];
extern const pb_field_t NActorReplaceGun_fields[4];
extern const pb_field_t NActorHeal_fields[5];
extern const pb_field_t NActorHit_fields[8];
extern const pb_field_t NActorAddAmmo_fields[6];
extern const pb_field_t NActorUseAmmo_fields[5];
extern const pb_field_t NActorDie_fields[2];
extern const pb_field_t NActorMelee_fields[6];
extern const pb_field_t NAddPickup_fields[7];
extern const pb_field_t NRemovePickup_fields[3];
extern const pb_field_t NBulletBounce_fields[9];
extern const pb_field_t NRemoveBullet_fields[2];
extern const pb_field_t NGunReload_fields[5];
extern const pb_field_t NGunFire_fields[10];
extern const pb_field_t NGunState_fields[3];
extern const pb_field_t NAddBullet_fields[10];
extern const pb_field_t NTrigger_fields[3];
extern const pb_field_t NExploreTiles_fields[2];
extern const pb_field_t NExploreTiles_Run_fields[3];
extern const pb_field_t NRescueCharacter_fields[2];
extern const pb_field_t NObjectiveUpdate_fields[3];
extern const pb_field_t NAddKeys_fields[3];
extern const pb_field_t NMissionComplete_fields[4];
extern const pb_field_t NMissionEnd_fields[4];

/* Maximum encoded size of messages (where known) */
#define NServerInfo_size                         97
#define NClientId_size                           12
#define NCampaignDef_size                        4116
#define NColor_size                              11
#define NCharColors_size                         65
#define NPlayerStats_size                        44
#define NPlayerData_size                         729
#define NPlayerRemove_size                       6
#define NConfig_size                             262
#define NTileSet_size                            297
#define NMapObjectAdd_size                       166
#define NMapObjectDamage_size                    45
#define NMapObjectRemove_size                    34
#define NScore_size                              17
#define NSound_size                              145
#define NVec2i_size                              22
#define NVec2_size                               10
#define NGameBegin_size                          11
#define NActorAdd_size                           63
#define NActorMove_size                          30
#define NActorState_size                         17
#define NActorDir_size                           17
#define NActorSlide_size                         18
#define NActorImpulse_size                       30
#define NActorSwitchGun_size                     12
#define NActorPickupAll_size                     8
#define NActorReplaceGun_size                    143
#define NActorHeal_size                          30
#define NActorHit_size                           67
#define NActorAddAmmo_size                       31
#define NActorUseAmmo_size                       29
#define NActorDie_size                           6
#define NActorMelee_size                         165
#define NAddPickup_size                          168
#define NRemovePickup_size                       17
#define NBulletBounce_size                       59
#define NRemoveBullet_size                       6
#define NGunReload_size                          165
#define NGunFire_size                            191
#define NGunState_size                           17
#define NAddBullet_size                          204
#define NTrigger_size                            30
#define NExploreTiles_size                       592
#define NExploreTiles_Run_size                   35
#define NRescueCharacter_size                    6
#define NObjectiveUpdate_size                    17
#define NAddKeys_size                            18
#define NMissionComplete_size                    50
#define NMissionEnd_size                         144

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define MSG_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
