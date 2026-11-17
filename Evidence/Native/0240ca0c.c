/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$CounterBeat
void Dino_BusSand_App_UI_HudPanel__CounterBeat (Dino_BusSand_App_UI_HudPanel_o* __this, int32_t prev, int32_t road, int32_t cap, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02390c50) */
/* WARNING: Removing unreachable block (ram,0x02390c54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$CounterBeat
   void Dino_BusSand_App_UI_HudPanel__CounterBeat (Dino_BusSand_App_UI_HudPanel_o* __this, int32_t
   prev, int32_t road, int32_t cap, const MethodInfo* method); */

long Dino_BusSand_App_UI_HudPanel__CounterBeat_230ca0c
               (long param_1,int param_2,int param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if ((bRam0000000004f9c521 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cafec0);
    FUN_02132f7c(PTR_DAT_04cafec8);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c521 = 1;
  }
  puVar1 = PTR_DAT_04cad4c0;
  if (*(long *)(param_1 + 0x90) != 0) {
    uVar6 = TMPro_TMP_Text__get_transform_42cd604(*(long *)(param_1 + 0x90),0);
    uVar12 = *(undefined4 *)(&UNK_00e69d60 + (ulong)(param_2 < param_3) * 4);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    lVar7 = Dino_BusSand_App_UI_UiMotion__Punch_2283d78(uVar12,_UNK_00e207cc,uVar6,0,0,0);
    if (param_3 <= param_2) {
      return lVar7;
    }
    lVar7 = *(long *)(param_1 + 0x98);
    if (lVar7 != 0) {
      if (param_3 <= *(int *)(lVar7 + 0x18)) {
        lVar7 = System_Collections_Generic_List_object___get_Item_3a81924
                          (lVar7,param_3 + -1,*(undefined8 *)PTR_DAT_04cafec8);
        if (lVar7 == 0) goto LAB_0240cbb4;
        uVar6 = UnityEngine_Component__get_transform_43bcd18(lVar7,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        lVar7 = Dino_BusSand_App_UI_UiMotion__Punch_2283d78(0x3f000000,_UNK_00e206e4,uVar6,0,0,0);
      }
      if (param_3 < param_4) {
        return lVar7;
      }
      if (*(long *)(param_1 + 0x90) != 0) {
        lVar7 = TMPro_TMP_Text__get_rectTransform_42cd6a4(*(long *)(param_1 + 0x90),0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        puVar1 = PTR_DAT_04cb5350;
        uVar12 = _UNK_00e206e4;
        uVar11 = _UNK_00e206e4;
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
        lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
        System_Object___ctor_4870e5c(lVar2,0);
        puVar1 = PTR_DAT_04ca9ae8;
        if (lVar2 != 0) {
          plVar8 = (long *)(lVar2 + 0x10);
          *plVar8 = lVar7;
          thunk_FUN_02134474(plVar8,lVar7);
          lVar7 = *(long *)puVar1;
          lVar9 = *plVar8;
          *(undefined4 *)(lVar2 + 0x20) = 0x41100000;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar9,0,0);
          puVar1 = PTR_DAT_04cad4c0;
          if ((uVar3 & 1) != 0) {
            return 0;
          }
          lVar7 = *(long *)PTR_DAT_04cad4c0;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar7 = *(long *)puVar1;
          }
          if (**(long **)(lVar7 + 0xb8) != 0) {
            uVar3 = System_Collections_Generic_Dictionary_object__Vector2___TryGetValue_34c74f0
                              (**(long **)(lVar7 + 0xb8),*plVar8,lVar2 + 0x18,
                               *(undefined8 *)PTR_DAT_04cb5358);
            if ((uVar3 & 1) == 0) {
              if (*plVar8 == 0) goto LAB_02390f84;
              uVar10 = UnityEngine_RectTransform__get_anchoredPosition_43cf828(*plVar8,0);
              lVar7 = *(long *)puVar1;
              *(undefined4 *)(lVar2 + 0x18) = uVar10;
              *(undefined4 *)(lVar2 + 0x1c) = uVar11;
              if (*(int *)(lVar7 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar7 = *(long *)puVar1;
              }
              if (**(long **)(lVar7 + 0xb8) == 0) goto LAB_02390f84;
              System_Collections_Generic_Dictionary_object__Vector2___set_Item_34c5984
                        (*(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c),
                         **(long **)(lVar7 + 0xb8),*(undefined8 *)(lVar2 + 0x10),
                         *(undefined8 *)PTR_DAT_04cb5360);
            }
            if (*plVar8 != 0) {
              uVar6 = UnityEngine_Component__get_gameObject_43bcde8(*plVar8,0);
              if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac1e8);
              }
              Dino_BusSand_App_Tween__KillAll_2161a90(uVar6,0);
              uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
              System_Action_float____ctor_35f1448(uVar6,lVar2,*(undefined8 *)PTR_DAT_04cb5368,0);
              if (*(long *)(lVar2 + 0x10) != 0) {
                uVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar2 + 0x10),0);
                uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                System_Action___ctor_47b5ed0(uVar5,lVar2,*(undefined8 *)PTR_DAT_04cb5370,0);
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
                lVar7 = Dino_BusSand_App_Tween__Value_2160f64(uVar12,uVar6,0);
                if (((lVar7 != 0) &&
                    (lVar7 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar7,1,0), lVar7 != 0)) &&
                   (lVar7 = Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar7,uVar4,0), lVar7 != 0)) {
                  lVar7 = Dino_BusSand_App_Tween__OnDone_2160edc(lVar7,uVar5,0);
                  if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar3 = UnityEngine_Application__get_isPlaying_4351eec(0);
                  puVar1 = PTR_DAT_04cb4ce0;
                  if ((uVar3 & 1) != 0) {
                    lVar2 = *(long *)PTR_DAT_04cb4ce0;
                    if (*(int *)(lVar2 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                      lVar2 = *(long *)puVar1;
                    }
                    if (*(char *)(*(long *)(lVar2 + 0xb8) + 1) == '\0') {
                      return lVar7;
                    }
                  }
                  if (lVar7 != 0) {
                    Dino_BusSand_App_Tween__Kill_2160f04(lVar7,1,0);
                    return lVar7;
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
    }
  }
LAB_0240cbb4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

