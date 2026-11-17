/* IL2CPP: Dino.BusSand.Core.StageEngine$$IsMechanicVehicle
bool Dino_BusSand_Core_StageEngine__IsMechanicVehicle (Dino_BusSand_Core_StageEngine_o* __this, Dino_BusSand_Core_Truck_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025241d4) */
/* WARNING: Removing unreachable block (ram,0x025243fc) */
/* WARNING: Removing unreachable block (ram,0x025243e0) */
/* IL2CPP: Dino.BusSand.Core.StageEngine$$IsMechanicVehicle
   bool Dino_BusSand_Core_StageEngine__IsMechanicVehicle (Dino_BusSand_Core_StageEngine_o* __this,
   Dino_BusSand_Core_Truck_o* t, const MethodInfo* method); */

uint Dino_BusSand_Core_StageEngine__IsMechanicVehicle_2429114(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 *puStack_158;
  long lStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  if (param_2 == 0) {
    return 0;
  }
  if (((((0 < *(int *)(param_2 + 0x30)) || (0 < *(int *)(param_2 + 0x34))) ||
       (0 < *(int *)(param_2 + 0x38))) ||
      ((*(char *)(param_2 + 0x3c) != '\0' || (0 < *(int *)(param_2 + 0x40))))) ||
     (*(char *)(param_2 + 0x44) != '\0')) {
    return 1;
  }
  iVar1 = *(int *)(param_2 + 0x10);
  if ((bRam0000000004f9cb9a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbeda0);
    FUN_02132f7c(PTR_DAT_04cbeda8);
    FUN_02132f7c(PTR_DAT_04cbd048);
    FUN_02132f7c(PTR_DAT_04cbd0b0);
    FUN_02132f7c(PTR_DAT_04cbc300);
    FUN_02132f7c(PTR_DAT_04cbc470);
    FUN_02132f7c(PTR_DAT_04cbedb0);
    FUN_02132f7c(PTR_DAT_04cbc308);
    FUN_02132f7c(PTR_DAT_04cbc480);
    FUN_02132f7c(PTR_DAT_04cbedb8);
    FUN_02132f7c(PTR_DAT_04cbd0b8);
    FUN_02132f7c(PTR_DAT_04cbd050);
    FUN_02132f7c(PTR_DAT_04cbedc0);
    FUN_02132f7c(PTR_DAT_04cbc318);
    FUN_02132f7c(PTR_DAT_04cbc488);
    FUN_02132f7c(PTR_DAT_04cbd0d0);
    FUN_02132f7c(PTR_DAT_04cbedc8);
    FUN_02132f7c(PTR_DAT_04cbd058);
    FUN_02132f7c(PTR_DAT_04cae220);
    FUN_02132f7c(PTR_DAT_04cbedd0);
    FUN_02132f7c(PTR_DAT_04cbd0e0);
    FUN_02132f7c(PTR_DAT_04cbc368);
    FUN_02132f7c(PTR_DAT_04cbedd8);
    FUN_02132f7c(PTR_DAT_04cbd060);
    FUN_02132f7c(PTR_DAT_04cbc4a0);
    bRam0000000004f9cb9a = 1;
  }
  puVar2 = PTR_DAT_04cae220;
  lStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  uStack_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  lStack_90 = 0;
  uStack_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  lStack_b0 = 0;
  uStack_e0 = 0;
  puStack_d8 = (undefined8 *)0x0;
  lStack_d0 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  lStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puStack_118 = (undefined8 *)0x0;
  uStack_120 = 0;
  uStack_140 = 0;
  puStack_138 = (undefined8 *)0x0;
  lStack_130 = 0;
  if (*(long *)(param_1 + 0x60) == 0) goto LAB_0252440c;
  uVar8 = System_Collections_Generic_HashSet_int___Contains_37db5b4
                    (*(long *)(param_1 + 0x60),iVar1,*(undefined8 *)PTR_DAT_04cae220);
  if ((uVar8 & 1) != 0) {
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_0252440c;
    uVar8 = System_Collections_Generic_HashSet_int___Contains_37db5b4
                      (*(long *)(param_1 + 0x68),iVar1,*(undefined8 *)puVar2);
    if ((uVar8 & 1) == 0) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_0252440c;
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_198,*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_04cbc368);
      puVar5 = PTR_DAT_04cbd0e0;
      puVar4 = PTR_DAT_04cbd0b8;
      puVar3 = PTR_DAT_04cbd0b0;
      puVar2 = PTR_DAT_04cbc308;
      puStack_78 = puStack_190;
      uStack_80 = uStack_198;
      uVar7 = 0;
      lStack_70 = lStack_188;
      puStack_148 = &uStack_80;
      lStack_150 = 0;
      do {
        uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                          (&uStack_80,*(undefined8 *)puVar2);
        if ((uVar8 & 1) == 0) {
          uVar10 = 9;
          break;
        }
        if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(long *)(lStack_70 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        System_Collections_Generic_List_ValueTuple_int__Int32Enum____GetEnumerator_39af6a0
                  (&uStack_198,*(long *)(lStack_70 + 0x30),*(undefined8 *)puVar5);
        uStack_a0 = uStack_198;
        uStack_198 = 0;
        puStack_98 = puStack_190;
        lStack_90 = lStack_188;
        puStack_190 = &uStack_a0;
        do {
          uVar8 = System_Collections_Generic_List_Enumerator_ValueTuple_int__Int32Enum____MoveNext_35bb5e8
                            (&uStack_a0,*(undefined8 *)puVar4);
          if ((uVar8 & 1) == 0) {
            uVar10 = 4;
            goto LAB_02523fb8;
          }
        } while ((int)lStack_90 != iVar1);
        uVar7 = 1;
        uVar10 = 8;
LAB_02523fb8:
        System_Collections_Generic_List_Enumerator_ValueTuple_int__Int32Enum____Dispose_35bb5e4
                  (&uStack_a0,*(undefined8 *)puVar3);
      } while ((uVar10 | 4) == 4);
      lVar9 = lStack_150;
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (puStack_148,*(undefined8 *)PTR_DAT_04cbc300);
      if (lVar9 != 0) {
LAB_02524410:
                    /* WARNING: Subroutine does not return */
        FUN_0213321c(lVar9);
      }
      if ((uVar10 != 9) && (uVar10 != 0)) goto LAB_02523ec4;
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_0252440c;
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_198,*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_04cbd060);
      puVar6 = PTR_DAT_04cbedd8;
      puVar5 = PTR_DAT_04cbedb8;
      puVar3 = PTR_DAT_04cbedb0;
      puVar2 = PTR_DAT_04cbeda0;
      puStack_b8 = puStack_190;
      uStack_c0 = uStack_198;
      lStack_b0 = lStack_188;
      puStack_148 = &uStack_c0;
      lStack_150 = 0;
      do {
        uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                          (&uStack_c0,*(undefined8 *)PTR_DAT_04cbd050);
        if ((uVar8 & 1) == 0) {
          uVar10 = 0x10;
          break;
        }
        if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(long *)(lStack_b0 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_198,*(long *)(lStack_b0 + 0x30),*(undefined8 *)PTR_DAT_04cbedd0);
        lStack_d0 = lStack_188;
        puStack_158 = &uStack_e0;
        puStack_d8 = puStack_190;
        uStack_e0 = uStack_198;
        lStack_160 = 0;
        do {
          uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                            (&uStack_e0,*(undefined8 *)puVar5);
          if ((uVar8 & 1) == 0) {
            uVar10 = 10;
            break;
          }
          if (lStack_d0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          System_Collections_Generic_List_LiftCar___GetEnumerator_3a3c3ac
                    (&uStack_198,lStack_d0,*(undefined8 *)puVar6);
          uStack_120 = uStack_198;
          uStack_198 = 0;
          puStack_118 = puStack_190;
          uStack_108 = uStack_180;
          lStack_110 = lStack_188;
          uStack_f8 = uStack_170;
          uStack_100 = uStack_178;
          uStack_f0 = uStack_168;
          puStack_190 = &uStack_120;
          do {
            uVar8 = System_Collections_Generic_List_Enumerator_LiftCar___MoveNext_35d2d68
                              (&uStack_120,*(undefined8 *)puVar3);
            if ((uVar8 & 1) == 0) {
              uVar10 = 0xc;
              goto LAB_02524154;
            }
          } while ((int)lStack_110 != iVar1);
          uVar7 = 1;
          uVar10 = 8;
LAB_02524154:
          System_Collections_Generic_List_Enumerator_LiftCar___Dispose_35d2d64
                    (&uStack_120,*(undefined8 *)puVar2);
        } while ((uVar10 == 0xc) || (uVar10 == 0));
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (puStack_158,*(undefined8 *)PTR_DAT_04cbeda8);
        if (lStack_160 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213321c();
        }
      } while ((uVar10 == 10) || (uVar10 == 0));
      lVar9 = lStack_150;
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (puStack_148,*(undefined8 *)PTR_DAT_04cbd048);
      puVar2 = PTR_DAT_04cbd0b0;
      if (lVar9 != 0) goto LAB_02524410;
      if ((uVar10 | 0x10) != 0x10) goto LAB_02523ec4;
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_0252440c;
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_198,*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_04cbc4a0);
      puVar5 = PTR_DAT_04cbd0e0;
      puVar3 = PTR_DAT_04cbc480;
      puStack_148 = &uStack_140;
      puStack_138 = puStack_190;
      uStack_140 = uStack_198;
      lStack_130 = lStack_188;
      lStack_150 = 0;
      do {
        uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                          (&uStack_140,*(undefined8 *)puVar3);
        if ((uVar8 & 1) == 0) {
          iVar11 = 0x15;
          break;
        }
        if (lStack_130 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(long *)(lStack_130 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        System_Collections_Generic_List_ValueTuple_int__Int32Enum____GetEnumerator_39af6a0
                  (&uStack_198,*(long *)(lStack_130 + 0x28),*(undefined8 *)puVar5);
        uStack_a0 = uStack_198;
        uStack_198 = 0;
        puStack_98 = puStack_190;
        lStack_90 = lStack_188;
        puStack_190 = &uStack_a0;
        do {
          uVar8 = System_Collections_Generic_List_Enumerator_ValueTuple_int__Int32Enum____MoveNext_35bb5e8
                            (&uStack_a0,*(undefined8 *)puVar4);
          if ((uVar8 & 1) == 0) {
            iVar11 = 0x11;
            goto LAB_02524320;
          }
        } while ((int)lStack_90 != iVar1);
        uVar7 = 1;
        iVar11 = 8;
LAB_02524320:
        System_Collections_Generic_List_Enumerator_ValueTuple_int__Int32Enum____Dispose_35bb5e4
                  (&uStack_a0,*(undefined8 *)puVar2);
      } while ((iVar11 == 0x11) || (iVar11 == 0));
      lVar9 = lStack_150;
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (puStack_148,*(undefined8 *)PTR_DAT_04cbc470);
      if (lVar9 != 0) goto LAB_02524410;
      if ((iVar11 != 0x15) && (iVar11 != 0)) goto LAB_02523ec4;
      if (*(long *)(param_1 + 0x28) == 0) {
LAB_0252440c:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar8 = Dino_BusSand_Core_TruckGrid__TryGet_241d34c
                        (*(long *)(param_1 + 0x28),iVar1,&uStack_68);
      if ((uVar8 & 1) != 0) {
        if (*(long *)(param_1 + 0x28) != 0) {
          uVar7 = Dino_BusSand_Core_TruckGrid__CanTap_241c41c(*(long *)(param_1 + 0x28),uStack_68);
          uVar7 = uVar7 ^ 1;
          goto LAB_02523ec4;
        }
        goto LAB_0252440c;
      }
    }
  }
  uVar7 = 0;
LAB_02523ec4:
  return uVar7 & 1;
}

