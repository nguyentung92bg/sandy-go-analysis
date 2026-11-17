/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$SettleRange
bool Dino_BusSand_App_Meta_StreakTowerUtil__SettleRange (System_String_o* panel, System_String_o* activityType, int32_t value, bool* inRange, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02350e30) */
/* IL2CPP: Dino.BusSand.App.Meta.StreakTowerUtil$$SettleRange
   bool Dino_BusSand_App_Meta_StreakTowerUtil__SettleRange (System_String_o* panel, System_String_o*
   activityType, int32_t value, bool* inRange, const MethodInfo* method); */

uint Dino_BusSand_App_Meta_StreakTowerUtil__SettleRange_2250978
               (undefined8 param_1,undefined8 param_2,int param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uStack_68;
  
  puVar1 = PTR_DAT_04cac018;
  if ((bRam0000000004f9bfd7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cad288);
    FUN_02132f7c(PTR_DAT_04cad290);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb29b0);
    FUN_02132f7c(PTR_DAT_04cb3c48);
    FUN_02132f7c(PTR_DAT_04cb3c50);
    FUN_02132f7c(PTR_DAT_04cb3c58);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bfd7 = 1;
  }
  *param_4 = 0;
  puVar2 = PTR_DAT_04cb3c58;
  uStack_68 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar7 = (long *)Dino_BusSand_App_Tables__Rows_215eefc(*(undefined8 *)puVar2,0);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar12 = *plVar7;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04cad288) {
        puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_02350ac4;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar8 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)PTR_DAT_04cad288,0);
LAB_02350ac4:
  plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
  puVar5 = PTR_DAT_04cb3c50;
  puVar4 = PTR_DAT_04cb29b0;
  puVar3 = PTR_DAT_04cad290;
  puVar2 = PTR_DAT_04ca9c30;
  puVar1 = PTR_DAT_04ca9c08;
  do {
    do {
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar12 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02350b58;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)puVar1,0);
LAB_02350b58:
      uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar13 & 1) == 0) {
        uVar15 = 0;
        goto LAB_02350c30;
      }
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar12 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02350bbc;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)puVar3,0);
LAB_02350bbc:
      uVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      uVar10 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar9,*(undefined8 *)puVar4,0);
      iVar6 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar10,0,0);
    } while (iVar6 != 2);
    uVar10 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar9,*(undefined8 *)puVar5,0);
    uVar10 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar10,*(undefined8 *)puVar2,0);
    uVar13 = System_String__op_Inequality_46d110c(uVar10,param_1,0);
  } while ((uVar13 & 1) != 0);
  uVar9 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar9,*(undefined8 *)PTR_DAT_04cb3c48,0);
  lVar12 = Dino_BusSand_App_MiniJson__Obj_21561ec(uVar9,0);
  if (lVar12 == 0) {
    lVar12 = 0;
  }
  else {
    uVar9 = Dino_BusSand_App_MiniJson__Get_21565a8(lVar12,param_2,0);
    lVar12 = Dino_BusSand_App_MiniJson__Str_21564d0(uVar9,0,0);
  }
  uVar13 = System_String__IsNullOrEmpty_46d2084(lVar12,0);
  if ((uVar13 & 1) == 0) {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar12 = System_String__Split_46d50c0(lVar12,0x26,0,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar15 = *(uint *)(lVar12 + 0x18);
    if (0 < (int)uVar15) {
      uVar16 = 0;
      do {
        if (uVar15 <= uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar11 = *(long *)(lVar12 + (long)(int)uVar16 * 8 + 0x20);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar11 = System_String__Split_46d50c0(lVar11,0x2d,0,0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if ((*(int *)(lVar11 + 0x18) == 2) &&
           (uVar13 = System_Int32__TryParse_482de64
                               (*(undefined8 *)(lVar11 + 0x20),(long)&uStack_68 + 4,0),
           (uVar13 & 1) != 0)) {
          if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          uVar13 = System_Int32__TryParse_482de64(*(undefined8 *)(lVar11 + 0x28),&uStack_68,0);
          if (((((uVar13 & 1) != 0) && (param_3 <= (int)uStack_68)) &&
              (uStack_68._4_4_ <= (int)uStack_68)) && (uStack_68._4_4_ <= param_3)) {
            *param_4 = 1;
            break;
          }
        }
        uVar15 = *(uint *)(lVar12 + 0x18);
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < (int)uVar15);
    }
    uVar15 = 1;
    uVar16 = 1;
  }
  else {
    uVar15 = 1;
LAB_02350c30:
    uVar16 = 0;
  }
  if (plVar7 != (long *)0x0) {
    lVar12 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04ca9b30) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_02350cd4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)PTR_DAT_04ca9b30,0);
LAB_02350cd4:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
  return uVar15 & uVar16;
}

