/* IL2CPP: Dino.BusSand.App.UI.LevelEnterPanel$$OnSure
void Dino_BusSand_App_UI_LevelEnterPanel__OnSure (Dino_BusSand_App_UI_LevelEnterPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.LevelEnterPanel$$OnSure
   void Dino_BusSand_App_UI_LevelEnterPanel__OnSure (Dino_BusSand_App_UI_LevelEnterPanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_LevelEnterPanel__OnSure_231a258(long param_1)

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
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  float fVar17;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  
  puVar3 = PTR_DAT_04cb8638;
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
  lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Object___ctor_4870e5c(lVar10,0);
  if (lVar10 != 0) {
    *(long *)(lVar10 + 0x10) = param_1;
    thunk_FUN_02134474((long *)(lVar10 + 0x10),param_1);
    fVar17 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    puVar3 = PTR_DAT_04caba50;
    if (fVar17 - *(float *)(param_1 + 0x3c) < _UNK_00e207cc) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b88f == '\0') {
      FUN_02132f7c(PTR_DAT_04caba50);
      cRam0000000004f9b88f = '\x01';
    }
    lVar11 = *(long *)puVar3;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar11 = *(long *)puVar3;
    }
    puVar3 = PTR_DAT_04caa458;
    lVar11 = **(long **)(lVar11 + 0xb8);
    uVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(uVar12,lVar10,*(undefined8 *)PTR_DAT_04cb8660,0);
    if (lVar11 != 0) {
      uVar13 = Dino_BusSand_App_GameApp__HasHeartOrRefill_21643c8(lVar11,uVar12,0);
      puVar5 = PTR_DAT_04cacb20;
      if ((uVar13 & 1) == 0) {
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
        lVar14 = *(long *)PTR_DAT_04cb8548;
        *(undefined4 *)(lVar11 + 0x18) = 0;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar14 = *(long *)puVar6;
        }
        if (**(long **)(lVar14 + 0xb8) != 0) {
          System_Collections_Generic_HashSet_int___GetEnumerator_37dba74
                    (&uStack_88,**(long **)(lVar14 + 0xb8),*(undefined8 *)PTR_DAT_04cb8658);
          puVar7 = PTR_DAT_04cb8648;
          puVar4 = PTR_DAT_04cabaf8;
          puVar2 = PTR_DAT_04caa160;
          uStack_68 = puStack_80;
          uStack_70 = uStack_88;
          puStack_80 = &uStack_70;
          uStack_60 = uStack_78;
          uStack_88 = 0;
LAB_0241a4cc:
          uVar15 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext_35ce43c
                             (&uStack_70,*(undefined8 *)puVar7);
          uVar13 = uStack_60;
          if ((uVar15 & 1) == 0) {
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
            Dino_BusSand_App_UI_UIPanel__Close_21f509c(param_1,0);
            uVar12 = *(undefined8 *)puVar3;
            *(undefined4 *)(lVar10 + 0x18) = *(undefined4 *)(param_1 + 0x38);
            uVar12 = thunk_FUN_0216e89c(uVar12);
            System_Action___ctor_47b5ed0(uVar12,lVar10,*(undefined8 *)PTR_DAT_04cb8668,0);
            if (*(int *)(*(long *)PTR_DAT_04cabb00 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uStack_a0 = 0;
            uStack_98 = 0;
            uStack_90 = 0;
            Dino_BusSand_App_UI_ScreenFade__Run_2289914(uVar12,&uStack_a0,0);
            return;
          }
          uVar8 = (undefined4)uStack_60;
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar15 = Dino_BusSand_App_UI_LevelEnterPanel__get_NeedHallGuide_2319d7c();
          if ((uVar15 & 1) == 0) goto code_r0x0241a4f8;
          goto LAB_0241a524;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
code_r0x0241a4f8:
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar12 = Dino_BusSand_App_Meta_Profile__Count_225b150(uVar13 & 0xffffffff,0);
  lVar11 = Dino_BusSand_App_CheatFlags__Usable_214f578(uVar12,0);
  if (0 < lVar11) {
LAB_0241a524:
    lVar11 = *(long *)puVar5;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar11 = *(long *)puVar5;
    }
    lVar11 = **(long **)(lVar11 + 0xb8);
    if (lVar11 != 0) {
      lVar14 = *(long *)(lVar11 + 0x10);
      lVar16 = *(long *)puVar2;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar14 != 0) {
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar14 + (long)(int)uVar1 * 4 + 0x20) = uVar8;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar11,uVar13 & 0xffffffff,
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

