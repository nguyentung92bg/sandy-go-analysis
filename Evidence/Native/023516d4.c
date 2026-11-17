/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$Window
bool Dino_BusSand_App_Meta_StreakTowerUtil__Window (System_String_o* type, System_String_o* start, System_String_o* end, int64_t now, int64_t* s, int64_t* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$Window
   bool Dino_BusSand_App_Meta_StreakTowerUtil__Window (System_String_o* type, System_String_o*
   start, System_String_o* end, int64_t now, int64_t* s, int64_t* e, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_StreakTowerUtil__Window_22516d4
               (undefined8 param_1,long param_2,undefined8 param_3,long param_4,long *param_5,
               long *param_6)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = PTR_DAT_04cb2a90;
  if ((bRam0000000004f9bfcd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3c88);
    FUN_02132f7c(PTR_DAT_04cb2a90);
    bRam0000000004f9bfcd = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  *param_6 = 0;
  *param_5 = 0;
  lVar6 = Dino_BusSand_App_Meta_LiveClock__DayStartMs_224072c(param_4,0);
  uVar7 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)puVar3,0);
  if ((uVar7 & 1) == 0) {
    uVar7 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cb3c88,0);
    if ((uVar7 & 1) == 0) {
      iVar4 = Dino_BusSand_App_Meta_StreakTowerUtil__WeekDay_2251a94(param_2,&uStack_68);
      iVar5 = Dino_BusSand_App_Meta_StreakTowerUtil__WeekDay_2251a94(param_3,&uStack_70);
      if (iVar4 < 1) {
        return false;
      }
      if (iVar5 < 1) {
        return false;
      }
      lVar8 = Dino_BusSand_App_Meta_LiveClock__WeekStartMs_22406c8(param_4,0);
      lVar6 = lVar8 + (ulong)(iVar5 - 1U) * 86400000;
      lVar9 = lVar8 + (ulong)(iVar4 - 1) * 86400000;
      lVar10 = 0;
      while( true ) {
        iVar4 = Dino_BusSand_App_Meta_StreakTowerUtil__Hms_22519c4(uStack_68);
        *param_5 = lVar9 + (long)iVar4 * 1000;
        iVar4 = Dino_BusSand_App_Meta_StreakTowerUtil__Hms_22519c4(uStack_70);
        lVar11 = lVar6 + (long)iVar4 * 1000;
        *param_6 = lVar11;
        lVar12 = *param_5;
        if (lVar11 < lVar12) {
          *param_6 = lVar6 + 0x240c8400 + (long)iVar4 * 1000;
          lVar12 = *param_5;
          lVar11 = lVar8 + lVar10 * 0x240c8400 + (ulong)(iVar5 - 1U) * 86400000 + (long)iVar4 * 1000
                   + 0x240c8400;
        }
        bVar1 = lVar12 <= param_4 && param_4 <= lVar11;
        if (lVar12 <= param_4 && param_4 <= lVar11) break;
        lVar6 = lVar6 + -0x240c8400;
        lVar9 = lVar9 + -0x240c8400;
        bVar2 = lVar10 < 0;
        lVar10 = lVar10 + -1;
        if (bVar2) {
          return bVar1;
        }
      }
      return bVar1;
    }
    if (param_2 != 0) {
      uVar7 = (param_4 / 86400000 + -4) % 7;
      iVar5 = (int)uVar7;
      iVar4 = iVar5 + 7;
      if (uVar7 < 0xfffffffffffffff9) {
        iVar4 = iVar5;
      }
      iVar4 = System_String__IndexOf_46d72c4(param_2,iVar4 + 0x31,0);
      if (-1 < iVar4) {
        *param_5 = lVar6;
        *param_6 = lVar6 + 0x5265818;
        return true;
      }
    }
  }
  else {
    iVar4 = Dino_BusSand_App_Meta_StreakTowerUtil__Hms_22519c4(param_2);
    *param_5 = lVar6 + (long)iVar4 * 1000;
    iVar4 = Dino_BusSand_App_Meta_StreakTowerUtil__Hms_22519c4(param_3);
    lVar6 = lVar6 + (long)iVar4 * 1000;
    *param_6 = lVar6;
    lVar9 = *param_5;
    if (lVar6 < lVar9) {
      if (param_4 < lVar9) {
        lVar9 = lVar9 + -86400000;
        *param_5 = lVar9;
      }
      else {
        *param_6 = lVar6 + 86400000;
        lVar9 = *param_5;
      }
    }
    if (lVar9 <= param_4) {
      return param_4 <= *param_6;
    }
  }
  return false;
}

