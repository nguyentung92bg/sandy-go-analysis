/* IL2CPP: Dino.BusSand.App.Meta.BattleYachtPeriods$$Window
bool Dino_BusSand_App_Meta_BattleYachtPeriods__Window (System_String_o* type, System_String_o* start, System_String_o* end, int64_t now, int64_t* s, int64_t* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleYachtPeriods$$Window
   bool Dino_BusSand_App_Meta_BattleYachtPeriods__Window (System_String_o* type, System_String_o*
   start, System_String_o* end, int64_t now, int64_t* s, int64_t* e, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_BattleYachtPeriods__Window_222734c
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long *param_5,
               long *param_6)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_04cb2a90;
  if ((bRam0000000004f9bdf7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2d18);
    FUN_02132f7c(PTR_DAT_04cb2a90);
    bRam0000000004f9bdf7 = 1;
  }
  uVar6 = *(undefined8 *)puVar1;
  *param_6 = 0;
  *param_5 = 0;
  uVar3 = System_String__op_Equality_46d1108(param_1,uVar6,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cb2d18,0);
    if ((uVar3 & 1) == 0) {
      return false;
    }
    lVar5 = Dino_BusSand_App_Meta_LiveClock__WeekStartMs_22406c8(param_4,0);
    iVar2 = Dino_BusSand_App_Meta_BattleYachtPeriods__Dow_2227594(param_2);
    Dino_BusSand_App_Meta_BattleYachtPeriods__After_2227654(param_2);
    lVar4 = Dino_BusSand_App_Meta_BattleYachtPeriods__Hms_22274b8();
    *param_5 = lVar5 + (long)(iVar2 + -1) * 86400000 + lVar4 * 1000;
    iVar2 = Dino_BusSand_App_Meta_BattleYachtPeriods__Dow_2227594(param_3);
    Dino_BusSand_App_Meta_BattleYachtPeriods__After_2227654(param_3);
    lVar4 = Dino_BusSand_App_Meta_BattleYachtPeriods__Hms_22274b8();
    lVar4 = lVar4 * 1000;
    lVar5 = lVar5 + (long)(iVar2 + -1) * 86400000;
  }
  else {
    lVar4 = Dino_BusSand_App_Meta_LiveClock__DayStartMs_224072c(param_4,0);
    lVar5 = Dino_BusSand_App_Meta_BattleYachtPeriods__Hms_22274b8(param_2);
    *param_5 = lVar4 + lVar5 * 1000;
    lVar5 = Dino_BusSand_App_Meta_BattleYachtPeriods__Hms_22274b8(param_3);
    lVar5 = lVar5 * 1000;
  }
  *param_6 = lVar5 + lVar4;
  return *param_5 <= param_4 && param_4 <= lVar5 + lVar4;
}

