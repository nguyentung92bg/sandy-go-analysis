/* IL2CPP: Dino.BusSand.Core.StageEngine$$IsColorHidden
bool Dino_BusSand_Core_StageEngine__IsColorHidden (Dino_BusSand_Core_StageEngine_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025241d4) */
/* WARNING: Removing unreachable block (ram,0x025243fc) */
/* WARNING: Removing unreachable block (ram,0x025243e0) */
/* IL2CPP: Dino.BusSand.Core.StageEngine$$IsColorHidden
   bool Dino_BusSand_Core_StageEngine__IsColorHidden (Dino_BusSand_Core_StageEngine_o* __this,
   int32_t id, const MethodInfo* method); */

uint Dino_BusSand_Core_StageEngine__IsColorHidden_2423ce8(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
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
  puVar1 = PTR_DAT_04cae220;
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
  uVar7 = System_Collections_Generic_HashSet_int___Contains_37db5b4
                    (*(long *)(param_1 + 0x60),param_2,*(undefined8 *)PTR_DAT_04cae220);
  if ((uVar7 & 1) != 0) {
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_0252440c;
    uVar7 = System_Collections_Generic_HashSet_int___Contains_37db5b4
                      (*(long *)(param_1 + 0x68),param_2,*(undefined8 *)puVar1);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_0252440c;
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_198,*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_04cbc368);
      puVar4 = PTR_DAT_04cbd0e0;
      puVar3 = PTR_DAT_04cbd0b8;
      puVar2 = PTR_DAT_04cbd0b0;
      puVar1 = PTR_DAT_04cbc308;
      puStack_78 = puStack_190;
      uStack_80 = uStack_198;
      uVar6 = 0;
      lStack_70 = lStack_188;
      puStack_148 = &uStack_80;
      lStack_150 = 0;
      do {
        uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                          (&uStack_80,*(undefined8 *)puVar1);
        if ((uVar7 & 1) == 0) {
          uVar9 = 9;
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
                  (&uStack_198,*(long *)(lStack_70 + 0x30),*(undefined8 *)puVar4);
        uStack_a0 = uStack_198;
        uStack_198 = 0;
        puStack_98 = puStack_190;
        lStack_90 = lStack_188;
        puStack_190 = &uStack_a0;
        do {
          uVar7 = System_Collections_Generic_List_Enumerator_ValueTuple_int__Int32Enum____MoveNext_35bb5e8
                            (&uStack_a0,*(undefined8 *)puVar3);
          if ((uVar7 & 1) == 0) {
            uVar9 = 4;
            goto LAB_02523fb8;
          }
        } while ((int)lStack_90 != param_2);
        uVar6 = 1;
        uVar9 = 8;
LAB_02523fb8:
        System_Collections_Generic_List_Enumerator_ValueTuple_int__Int32Enum____Dispose_35bb5e4
                  (&uStack_a0,*(undefined8 *)puVar2);
      } while ((uVar9 | 4) == 4);
      lVar8 = lStack_150;
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (puStack_148,*(undefined8 *)PTR_DAT_04cbc300);
      if (lVar8 != 0) {
LAB_02524410:
                    /* WARNING: Subroutine does not return */
        FUN_0213321c(lVar8);
      }
      if ((uVar9 != 9) && (uVar9 != 0)) goto LAB_02523ec4;
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_0252440c;
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_198,*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_04cbd060);
      puVar5 = PTR_DAT_04cbedd8;
      puVar4 = PTR_DAT_04cbedb8;
      puVar2 = PTR_DAT_04cbedb0;
      puVar1 = PTR_DAT_04cbeda0;
      puStack_b8 = puStack_190;
      uStack_c0 = uStack_198;
      lStack_b0 = lStack_188;
      puStack_148 = &uStack_c0;
      lStack_150 = 0;
      do {
        uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                          (&uStack_c0,*(undefined8 *)PTR_DAT_04cbd050);
        if ((uVar7 & 1) == 0) {
          uVar9 = 0x10;
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
          uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                            (&uStack_e0,*(undefined8 *)puVar4);
          if ((uVar7 & 1) == 0) {
            uVar9 = 10;
            break;
          }
          if (lStack_d0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          System_Collections_Generic_List_LiftCar___GetEnumerator_3a3c3ac
                    (&uStack_198,lStack_d0,*(undefined8 *)puVar5);
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
            uVar7 = System_Collections_Generic_List_Enumerator_LiftCar___MoveNext_35d2d68
                              (&uStack_120,*(undefined8 *)puVar2);
            if ((uVar7 & 1) == 0) {
              uVar9 = 0xc;
              goto LAB_02524154;
            }
          } while ((int)lStack_110 != param_2);
          uVar6 = 1;
          uVar9 = 8;
LAB_02524154:
          System_Collections_Generic_List_Enumerator_LiftCar___Dispose_35d2d64
                    (&uStack_120,*(undefined8 *)puVar1);
        } while ((uVar9 == 0xc) || (uVar9 == 0));
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (puStack_158,*(undefined8 *)PTR_DAT_04cbeda8);
        if (lStack_160 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0213321c();
        }
      } while ((uVar9 == 10) || (uVar9 == 0));
      lVar8 = lStack_150;
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (puStack_148,*(undefined8 *)PTR_DAT_04cbd048);
      puVar1 = PTR_DAT_04cbd0b0;
      if (lVar8 != 0) goto LAB_02524410;
      if ((uVar9 | 0x10) != 0x10) goto LAB_02523ec4;
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_0252440c;
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_198,*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_04cbc4a0);
      puVar4 = PTR_DAT_04cbd0e0;
      puVar2 = PTR_DAT_04cbc480;
      puStack_148 = &uStack_140;
      puStack_138 = puStack_190;
      uStack_140 = uStack_198;
      lStack_130 = lStack_188;
      lStack_150 = 0;
      do {
        uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                          (&uStack_140,*(undefined8 *)puVar2);
        if ((uVar7 & 1) == 0) {
          iVar10 = 0x15;
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
                  (&uStack_198,*(long *)(lStack_130 + 0x28),*(undefined8 *)puVar4);
        uStack_a0 = uStack_198;
        uStack_198 = 0;
        puStack_98 = puStack_190;
        lStack_90 = lStack_188;
        puStack_190 = &uStack_a0;
        do {
          uVar7 = System_Collections_Generic_List_Enumerator_ValueTuple_int__Int32Enum____MoveNext_35bb5e8
                            (&uStack_a0,*(undefined8 *)puVar3);
          if ((uVar7 & 1) == 0) {
            iVar10 = 0x11;
            goto LAB_02524320;
          }
        } while ((int)lStack_90 != param_2);
        uVar6 = 1;
        iVar10 = 8;
LAB_02524320:
        System_Collections_Generic_List_Enumerator_ValueTuple_int__Int32Enum____Dispose_35bb5e4
                  (&uStack_a0,*(undefined8 *)puVar1);
      } while ((iVar10 == 0x11) || (iVar10 == 0));
      lVar8 = lStack_150;
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (puStack_148,*(undefined8 *)PTR_DAT_04cbc470);
      if (lVar8 != 0) goto LAB_02524410;
      if ((iVar10 != 0x15) && (iVar10 != 0)) goto LAB_02523ec4;
      if (*(long *)(param_1 + 0x28) == 0) {
LAB_0252440c:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar7 = Dino_BusSand_Core_TruckGrid__TryGet_241d34c
                        (*(long *)(param_1 + 0x28),param_2,&uStack_68);
      if ((uVar7 & 1) != 0) {
        if (*(long *)(param_1 + 0x28) != 0) {
          uVar6 = Dino_BusSand_Core_TruckGrid__CanTap_241c41c(*(long *)(param_1 + 0x28),uStack_68);
          uVar6 = uVar6 ^ 1;
          goto LAB_02523ec4;
        }
        goto LAB_0252440c;
      }
    }
  }
  uVar6 = 0;
LAB_02523ec4:
  return uVar6 & 1;
}

