/* IL2CPP: Dino.BusSand.App.UI.LevelEnterPanel.<>c__DisplayClass15_0$$<OnSure>b__0
void Dino_BusSand_App_UI_LevelEnterPanel___c__DisplayClass15_0___OnSure_b__0 (Dino_BusSand_App_UI_LevelEnterPanel___c__DisplayClass15_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.LevelEnterPanel.<>c__DisplayClass15_0$$<OnSure>b__0
   void Dino_BusSand_App_UI_LevelEnterPanel___c__DisplayClass15_0___OnSure_b__0
   (Dino_BusSand_App_UI_LevelEnterPanel___c__DisplayClass15_0_o* __this, const MethodInfo* method);
    */

void Dino_BusSand_App_UI_LevelEnterPanel___c__DisplayClass15_0___OnSure_b__0_231aad0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c586 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c586 = 1;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar14 = UnityEngine_Object__op_Inequality_43c8dec(uVar17,0,0);
  puVar2 = PTR_DAT_04cb8638;
  if ((uVar14 & 1) != 0) {
    lVar15 = *(long *)(param_1 + 0x10);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(char *)(lVar15 + 0x2c) == '\0') {
      if ((bRam0000000004f9c580 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caa458);
        FUN_02132f7c(PTR_DAT_04cb8640);
        FUN_02132f7c(PTR_DAT_04cb8648);
        FUN_02132f7c(PTR_DAT_04cb8650);
        FUN_02132f7c(PTR_DAT_04caba50);
        FUN_02132f7c(PTR_DAT_04cb8658);
        FUN_02132f7c(PTR_DAT_04cacb20);
        FUN_02132f7c(PTR_DAT_04cb8548);
        FUN_02132f7c(PTR_DAT_04caa160);
        FUN_02132f7c(PTR_DAT_04cad858);
        FUN_02132f7c(PTR_DAT_04cabaf8);
        FUN_02132f7c(PTR_DAT_04cabb00);
        FUN_02132f7c(PTR_DAT_04cb8660);
        FUN_02132f7c(PTR_DAT_04cb8668);
        FUN_02132f7c(PTR_DAT_04cb8638);
        bRam0000000004f9c580 = 1;
      }
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      System_Object___ctor_4870e5c(lVar10,0);
      if (lVar10 != 0) {
        *(long *)(lVar10 + 0x10) = lVar15;
        thunk_FUN_02134474((long *)(lVar10 + 0x10),lVar15);
        fVar18 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
        puVar2 = PTR_DAT_04caba50;
        if (fVar18 - *(float *)(lVar15 + 0x3c) < _UNK_00e207cc) {
          return;
        }
        if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b88f == '\0') {
          FUN_02132f7c(PTR_DAT_04caba50);
          cRam0000000004f9b88f = '\x01';
        }
        lVar11 = *(long *)puVar2;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar11 = *(long *)puVar2;
        }
        puVar2 = PTR_DAT_04caa458;
        lVar11 = **(long **)(lVar11 + 0xb8);
        uVar17 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar17,lVar10,*(undefined8 *)PTR_DAT_04cb8660,0);
        if (lVar11 != 0) {
          uVar14 = Dino_BusSand_App_GameApp__HasHeartOrRefill_21643c8(lVar11,uVar17,0);
          puVar5 = PTR_DAT_04cacb20;
          if ((uVar14 & 1) == 0) {
            return;
          }
          lVar11 = *(long *)PTR_DAT_04cacb20;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar11 = *(long *)puVar5;
          }
          puVar6 = PTR_DAT_04cb8548;
          lVar11 = **(long **)(lVar11 + 0xb8);
          if (lVar11 != 0) {
            lVar12 = *(long *)PTR_DAT_04cb8548;
            *(undefined4 *)(lVar11 + 0x18) = 0;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar12 = *(long *)puVar6;
            }
            if (**(long **)(lVar12 + 0xb8) != 0) {
              System_Collections_Generic_HashSet_int___GetEnumerator_37dba74
                        (&uStack_88,**(long **)(lVar12 + 0xb8),*(undefined8 *)PTR_DAT_04cb8658);
              puVar7 = PTR_DAT_04cb8648;
              puVar4 = PTR_DAT_04cabaf8;
              puVar3 = PTR_DAT_04caa160;
              uStack_68 = puStack_80;
              uStack_70 = uStack_88;
              puStack_80 = &uStack_70;
              uStack_60 = uStack_78;
              uStack_88 = 0;
LAB_0241a4cc:
              uVar13 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext_35ce43c
                                 (&uStack_70,*(undefined8 *)puVar7);
              uVar14 = uStack_60;
              if ((uVar13 & 1) == 0) {
                System_Collections_Generic_HashSet_Enumerator_int___Dispose_35ce438
                          (&uStack_70,*(undefined8 *)PTR_DAT_04cb8640);
                if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                bVar9 = Dino_BusSand_App_UI_LevelEnterPanel__get_NeedHallGuide_2319d7c();
                lVar11 = *(long *)puVar5;
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar11);
                  lVar11 = *(long *)puVar5;
                }
                *(byte *)(*(long *)(lVar11 + 0xb8) + 8) = bVar9 & 1;
                Dino_BusSand_App_UI_UIPanel__Close_21f509c(lVar15,0);
                uVar17 = *(undefined8 *)puVar2;
                *(undefined4 *)(lVar10 + 0x18) = *(undefined4 *)(lVar15 + 0x38);
                uVar17 = thunk_FUN_0216e89c(uVar17);
                System_Action___ctor_47b5ed0(uVar17,lVar10,*(undefined8 *)PTR_DAT_04cb8668,0);
                if (*(int *)(*(long *)PTR_DAT_04cabb00 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_90 = 0;
                Dino_BusSand_App_UI_ScreenFade__Run_2289914(uVar17,&uStack_a0,0);
                return;
              }
              uVar8 = (undefined4)uStack_60;
              if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar13 = Dino_BusSand_App_UI_LevelEnterPanel__get_NeedHallGuide_2319d7c();
              if ((uVar13 & 1) == 0) goto code_r0x0241a4f8;
              goto LAB_0241a524;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
code_r0x0241a4f8:
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar17 = Dino_BusSand_App_Meta_Profile__Count_225b150(uVar14 & 0xffffffff,0);
  lVar11 = Dino_BusSand_App_CheatFlags__Usable_214f578(uVar17,0);
  if (0 < lVar11) {
LAB_0241a524:
    lVar11 = *(long *)puVar5;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar11 = *(long *)puVar5;
    }
    lVar11 = **(long **)(lVar11 + 0xb8);
    if (lVar11 != 0) {
      lVar12 = *(long *)(lVar11 + 0x10);
      lVar16 = *(long *)puVar3;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar12 != 0) {
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar12 + (long)(int)uVar1 * 4 + 0x20) = uVar8;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar11,uVar14 & 0xffffffff,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_0241a4cc;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  goto LAB_0241a4cc;
}

