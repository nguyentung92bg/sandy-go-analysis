/* IL2CPP: Dino.BusSand.App.UI.KitParts.<>c__DisplayClass14_0$$<StreakTag>b__0
void Dino_BusSand_App_UI_KitParts___c__DisplayClass14_0___StreakTag_b__0 (Dino_BusSand_App_UI_KitParts___c__DisplayClass14_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02390c50) */
/* WARNING: Removing unreachable block (ram,0x02390c54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitParts.<>c__DisplayClass14_0$$<StreakTag>b__0
   void Dino_BusSand_App_UI_KitParts___c__DisplayClass14_0___StreakTag_b__0
   (Dino_BusSand_App_UI_KitParts___c__DisplayClass14_0_o* __this, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_KitParts___c__DisplayClass14_0___StreakTag_b__0_2310db8(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c551 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c551 = 1;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
  if ((uVar7 & 1) == 0) {
    return uVar7;
  }
  lVar8 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cb5350;
  uVar1 = _UNK_00e207cc;
  uVar13 = _UNK_00e207cc;
  if ((bRam0000000004f9c1c0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208,0);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cb5358);
    FUN_02132f7c(PTR_DAT_04cb5360);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cb5368);
    FUN_02132f7c(PTR_DAT_04cb5370);
    FUN_02132f7c(PTR_DAT_04cb5350);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c1c0 = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar4,0);
  puVar2 = PTR_DAT_04ca9ae8;
  if (lVar4 != 0) {
    plVar9 = (long *)(lVar4 + 0x10);
    *plVar9 = lVar8;
    thunk_FUN_02134474(plVar9,lVar8);
    lVar8 = *(long *)puVar2;
    lVar11 = *plVar9;
    *(undefined4 *)(lVar4 + 0x20) = 0x41000000;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
    puVar2 = PTR_DAT_04cad4c0;
    if ((uVar7 & 1) != 0) {
      return 0;
    }
    lVar8 = *(long *)PTR_DAT_04cad4c0;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar2;
    }
    if (**(long **)(lVar8 + 0xb8) != 0) {
      uVar7 = System_Collections_Generic_Dictionary_object__Vector2___TryGetValue_34c74f0
                        (**(long **)(lVar8 + 0xb8),*plVar9,lVar4 + 0x18,
                         *(undefined8 *)PTR_DAT_04cb5358);
      if ((uVar7 & 1) == 0) {
        if (*plVar9 == 0) goto LAB_02390f84;
        uVar12 = UnityEngine_RectTransform__get_anchoredPosition_43cf828(*plVar9,0);
        lVar8 = *(long *)puVar2;
        *(undefined4 *)(lVar4 + 0x18) = uVar12;
        *(undefined4 *)(lVar4 + 0x1c) = uVar13;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar8 = *(long *)puVar2;
        }
        if (**(long **)(lVar8 + 0xb8) == 0) goto LAB_02390f84;
        System_Collections_Generic_Dictionary_object__Vector2___set_Item_34c5984
                  (*(undefined4 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x1c),
                   **(long **)(lVar8 + 0xb8),*(undefined8 *)(lVar4 + 0x10),
                   *(undefined8 *)PTR_DAT_04cb5360);
      }
      if (*plVar9 != 0) {
        uVar10 = UnityEngine_Component__get_gameObject_43bcde8(*plVar9,0);
        if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac1e8);
        }
        Dino_BusSand_App_Tween__KillAll_2161a90(uVar10,0);
        uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
        System_Action_float____ctor_35f1448(uVar10,lVar4,*(undefined8 *)PTR_DAT_04cb5368,0);
        if (*(long *)(lVar4 + 0x10) != 0) {
          uVar5 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar4 + 0x10),0);
          uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
          System_Action___ctor_47b5ed0(uVar6,lVar4,*(undefined8 *)PTR_DAT_04cb5370,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          puVar2 = PTR_DAT_04cac1e8;
          if ((bRam0000000004f9c1bd & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04caa210);
            FUN_02132f7c(PTR_DAT_04cb4ce0);
            FUN_02132f7c(PTR_DAT_04cac1e8);
            bRam0000000004f9c1bd = 1;
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar8 = Dino_BusSand_App_Tween__Value_2160f64(uVar1,uVar10,0);
          if (((lVar8 != 0) &&
              (lVar8 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar8,1,0), lVar8 != 0)) &&
             (lVar8 = Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar8,uVar5,0), lVar8 != 0)) {
            uVar7 = Dino_BusSand_App_Tween__OnDone_2160edc(lVar8,uVar6,0);
            if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar3 = UnityEngine_Application__get_isPlaying_4351eec(0);
            puVar2 = PTR_DAT_04cb4ce0;
            if ((uVar3 & 1) != 0) {
              lVar8 = *(long *)PTR_DAT_04cb4ce0;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar8 = *(long *)puVar2;
              }
              if (*(char *)(*(long *)(lVar8 + 0xb8) + 1) == '\0') {
                return uVar7;
              }
            }
            if (uVar7 != 0) {
              Dino_BusSand_App_Tween__Kill_2160f04(uVar7,1,0);
              return uVar7;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
    }
  }
LAB_02390f84:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

