/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$Shake
Dino_BusSand_App_Tween_o* Dino_BusSand_App_UI_UiMotion__Shake (UnityEngine_RectTransform_o* rt, float px, float duration, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02390c50) */
/* WARNING: Removing unreachable block (ram,0x02390c54) */
/* IL2CPP: Dino.BusSand.App.UI.UiMotion$$Shake
   Dino_BusSand_App_Tween_o* Dino_BusSand_App_UI_UiMotion__Shake (UnityEngine_RectTransform_o* rt,
   float px, float duration, const MethodInfo* method); */

long Dino_BusSand_App_UI_UiMotion__Shake_2290ce8(undefined4 param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  puVar1 = PTR_DAT_04cb5350;
  uVar11 = param_2;
  if ((bRam0000000004f9c1c0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
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
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar2,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar2 != 0) {
    plVar8 = (long *)(lVar2 + 0x10);
    *plVar8 = param_3;
    thunk_FUN_02134474(plVar8,param_3);
    lVar3 = *(long *)puVar1;
    lVar9 = *plVar8;
    *(undefined4 *)(lVar2 + 0x20) = param_1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
    puVar1 = PTR_DAT_04cad4c0;
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    lVar3 = *(long *)PTR_DAT_04cad4c0;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    if (**(long **)(lVar3 + 0xb8) != 0) {
      uVar4 = System_Collections_Generic_Dictionary_object__Vector2___TryGetValue_34c74f0
                        (**(long **)(lVar3 + 0xb8),*plVar8,lVar2 + 0x18,
                         *(undefined8 *)PTR_DAT_04cb5358);
      if ((uVar4 & 1) == 0) {
        if (*plVar8 == 0) goto LAB_02390f84;
        uVar10 = UnityEngine_RectTransform__get_anchoredPosition_43cf828(*plVar8,0);
        lVar3 = *(long *)puVar1;
        *(undefined4 *)(lVar2 + 0x18) = uVar10;
        *(undefined4 *)(lVar2 + 0x1c) = uVar11;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar3 = *(long *)puVar1;
        }
        if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_02390f84;
        System_Collections_Generic_Dictionary_object__Vector2___set_Item_34c5984
                  (*(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c),
                   **(long **)(lVar3 + 0xb8),*(undefined8 *)(lVar2 + 0x10),
                   *(undefined8 *)PTR_DAT_04cb5360);
      }
      if (*plVar8 != 0) {
        uVar5 = UnityEngine_Component__get_gameObject_43bcde8(*plVar8,0);
        if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac1e8);
        }
        Dino_BusSand_App_Tween__KillAll_2161a90(uVar5,0);
        uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
        System_Action_float____ctor_35f1448(uVar5,lVar2,*(undefined8 *)PTR_DAT_04cb5368,0);
        if (*(long *)(lVar2 + 0x10) != 0) {
          uVar6 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar2 + 0x10),0);
          uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
          System_Action___ctor_47b5ed0(uVar7,lVar2,*(undefined8 *)PTR_DAT_04cb5370,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          puVar1 = PTR_DAT_04cac1e8;
          if ((bRam0000000004f9c1bd & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04caa210);
            FUN_02132f7c(PTR_DAT_04cb4ce0);
            FUN_02132f7c(PTR_DAT_04cac1e8);
            bRam0000000004f9c1bd = 1;
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar2 = Dino_BusSand_App_Tween__Value_2160f64(param_2,uVar5,0);
          if (((lVar2 != 0) &&
              (lVar2 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar2,1,0), lVar2 != 0)) &&
             (lVar2 = Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar2,uVar6,0), lVar2 != 0)) {
            lVar2 = Dino_BusSand_App_Tween__OnDone_2160edc(lVar2,uVar7,0);
            if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar4 = UnityEngine_Application__get_isPlaying_4351eec(0);
            puVar1 = PTR_DAT_04cb4ce0;
            if ((uVar4 & 1) != 0) {
              lVar3 = *(long *)PTR_DAT_04cb4ce0;
              if (*(int *)(lVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar3 = *(long *)puVar1;
              }
              if (*(char *)(*(long *)(lVar3 + 0xb8) + 1) == '\0') {
                return lVar2;
              }
            }
            if (lVar2 != 0) {
              Dino_BusSand_App_Tween__Kill_2160f04(lVar2,1,0);
              return lVar2;
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

