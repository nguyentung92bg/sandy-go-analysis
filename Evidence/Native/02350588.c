/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$BindHall
void Dino_BusSand_App_Meta_StreakRateFeature__BindHall (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_UI_UIPanel_o* hud, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.StreakRateFeature$$BindHall
   void Dino_BusSand_App_Meta_StreakRateFeature__BindHall
   (Dino_BusSand_App_Meta_StreakRateFeature_o* __this, Dino_BusSand_App_UI_UIPanel_o* hud, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_StreakRateFeature__BindHall_2250588(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar4 = PTR_DAT_04cae9a8;
  if ((bRam0000000004f9bfc0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae9a8);
    bRam0000000004f9bfc0 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar4 = PTR_DAT_04cae9a8;
  if ((bRam0000000004f9bba5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458,param_1,0);
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04cb0b58);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0b60);
    FUN_02132f7c(PTR_DAT_04cae9a8);
    FUN_02132f7c(PTR_DAT_04cae0e0);
    FUN_02132f7c(PTR_DAT_04cb0b68);
    FUN_02132f7c(PTR_DAT_04cadc80);
    FUN_02132f7c(PTR_DAT_04cb0b70);
    FUN_02132f7c(PTR_DAT_04cb0b78);
    FUN_02132f7c(PTR_DAT_04cb0b80);
    FUN_02132f7c(PTR_DAT_04cb0b88);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9bba5 = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar4;
  }
  plVar6 = (long *)(*(long *)(lVar5 + 0xb8) + 8);
  *plVar6 = param_2;
  thunk_FUN_02134474(plVar6,param_2);
  plVar6 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
  *plVar6 = param_1;
  thunk_FUN_02134474(plVar6,param_1);
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *(undefined1 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28) = 0;
  if (iVar1 == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(param_2,0,0);
  uVar11 = 0;
  if ((uVar7 & 1) != 0) {
    if (param_2 == 0) goto LAB_022df7a8;
    uVar11 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_2,*(undefined8 *)PTR_DAT_04cb0b70,0);
  }
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar4;
  }
  puVar8 = (undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10);
  *puVar8 = uVar11;
  thunk_FUN_02134474(puVar8,uVar11);
  uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
  uVar11 = 0;
  if ((uVar7 & 1) != 0) {
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar4;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (lVar5 == 0) goto LAB_022df7a8;
    uVar11 = UnityEngine_Transform__Find_43d4bec(lVar5,*(undefined8 *)PTR_DAT_04cadc80,0);
  }
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar4;
  }
  puVar8 = (undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18);
  *puVar8 = uVar11;
  thunk_FUN_02134474(puVar8,uVar11);
  uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar11,0,0);
  if ((uVar7 & 1) == 0) {
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar4;
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar11,0,0);
    if (((param_1 != 0) && ((uVar7 & 1) == 0)) &&
       (uVar7 = Dino_BusSand_App_Meta_StreakRateFeature__get_IsOpen_224c000(param_1,0),
       (uVar7 & 1) != 0)) {
      lVar5 = *(long *)puVar4;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar4;
      }
      puVar3 = PTR_DAT_04cada30;
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
      if (lVar5 != 0) {
        uVar11 = UnityEngine_Component__GetComponent_object__26f97e8
                           (lVar5,*(undefined8 *)PTR_DAT_04cada30);
        Dino_BusSand_App_UI_StreakRateHallBar__Sample_21df7ac
                  (uVar11,*(undefined8 *)PTR_DAT_04cb0b88,0);
        lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
        if (lVar5 != 0) {
          lVar5 = UnityEngine_Transform__Find_43d4bec(lVar5,*(undefined8 *)PTR_DAT_04cb0b68,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
          uVar11 = 0;
          if ((uVar7 & 1) != 0) {
            if (lVar5 == 0) goto LAB_022df7a8;
            uVar11 = UnityEngine_Component__GetComponent_object__26f97e8
                               (lVar5,*(undefined8 *)puVar3);
          }
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_UI_StreakRateHallBar__Sample_21df7ac
                    (uVar11,*(undefined8 *)PTR_DAT_04cb0b80,1);
          lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
          if (lVar5 != 0) {
            uVar11 = UnityEngine_Transform__Find_43d4bec(lVar5,*(undefined8 *)PTR_DAT_04cae0e0,0);
            Dino_BusSand_App_UI_StreakRateHallBar__SetActive_21df95c(uVar11,0);
            Dino_BusSand_App_UI_StreakRateHallBar__InitRates_21dfa24();
            lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
            if (lVar5 != 0) {
              lVar5 = UnityEngine_Transform__Find_43d4bec(lVar5,*(undefined8 *)PTR_DAT_04cb0b78,0);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar2);
              }
              uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
              if ((uVar7 & 1) != 0) {
                if (lVar5 == 0) goto LAB_022df7a8;
                uVar11 = UnityEngine_Component__get_gameObject_43bcde8(lVar5,0);
                uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                System_Action___ctor_47b5ed0(uVar9,0,*(undefined8 *)PTR_DAT_04cb0b60,0);
                Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8
                          (uVar11,uVar9,1,*(undefined8 *)PTR_DAT_04cad948,0);
                lVar5 = UnityEngine_Component__GetComponent_object__26f97e8
                                  (lVar5,*(undefined8 *)PTR_DAT_04cb0b58);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)puVar2);
                }
                uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
                if ((uVar7 & 1) != 0) {
                  if (lVar5 == 0) goto LAB_022df7a8;
                  *(undefined4 *)(lVar5 + 0x28) = 0x3f7ae148;
                }
              }
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_App_UI_StreakRateHallBar__Refresh_21dfd10();
              lVar5 = Dino_BusSand_App_UI_StreakRateHallBar__Timer_21e09e8();
              if (param_2 != 0) {
                uVar7 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_2,0,0);
                if ((uVar7 & 1) == 0) {
                  return;
                }
                if (lVar5 == 0) {
                  thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
                  uVar9 = thunk_FUN_0216e89c();
                  uVar11 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
                  System_NullReferenceException___ctor_483267c(uVar9,uVar11,0);
                }
                else {
                  uVar7 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
                  if ((uVar7 & 1) != 0) {
                    if ((bRam0000000004fa84ef & 1) == 0) {
                      FUN_02132f7c(PTR_DAT_04cf7890);
                      bRam0000000004fa84ef = 1;
                    }
                    if (param_2 != 0) {
                      lVar10 = *(long *)(param_2 + 0x10);
                      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78
                                  (param_2,0);
                      }
                      if (pcRam0000000004fa8560 == (code *)0x0) {
                        pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
                      }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*pcRam0000000004fa8560)(lVar10,lVar5);
                      return;
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  thunk_FUN_021985a8(PTR_DAT_04caa3a8);
                  uVar9 = thunk_FUN_0216e89c();
                  uVar11 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
                  System_ArgumentException___ctor_47b660c(uVar9,uVar11,0);
                }
                uVar11 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
                FUN_021330e8(uVar9,uVar11);
              }
            }
          }
        }
      }
LAB_022df7a8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

