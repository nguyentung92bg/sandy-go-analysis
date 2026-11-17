/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$BindHall
void Dino_BusSand_App_Meta_ClimbTowerFeature__BindHall (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, Dino_BusSand_App_UI_UIPanel_o* hud, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ClimbTowerFeature$$BindHall
   void Dino_BusSand_App_Meta_ClimbTowerFeature__BindHall
   (Dino_BusSand_App_Meta_ClimbTowerFeature_o* __this, Dino_BusSand_App_UI_UIPanel_o* hud, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_ClimbTowerFeature__BindHall_222c8e0(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar3 = PTR_DAT_04cae6e8;
  if ((bRam0000000004f9be3e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae6e8);
    bRam0000000004f9be3e = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04cae6e8;
  if ((bRam0000000004f9ba13 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458,param_1,0);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cae6f0);
    FUN_02132f7c(PTR_DAT_04cae6e8);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cadcc8);
    FUN_02132f7c(PTR_DAT_04cae6f8);
    FUN_02132f7c(PTR_DAT_04cadc80);
    FUN_02132f7c(PTR_DAT_04cae700);
    FUN_02132f7c(PTR_DAT_04cae708);
    FUN_02132f7c(PTR_DAT_04cae710);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9ba13 = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar3;
  }
  **(long **)(lVar4 + 0xb8) = param_2;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar3 + 0xb8),param_2);
  plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
  *plVar5 = param_1;
  thunk_FUN_02134474(plVar5,param_1);
  lVar4 = *(long *)(*(long *)puVar3 + 0xb8);
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *(undefined1 *)(lVar4 + 0x24) = 0;
  *(undefined4 *)(lVar4 + 0x20) = 0xffffffff;
  if (iVar1 == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(param_2,0,0);
  uVar9 = 0;
  if ((uVar6 & 1) != 0) {
    if (param_2 == 0) goto LAB_0229f7a0;
    uVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_2,*(undefined8 *)PTR_DAT_04cae700,0);
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar3;
  }
  puVar7 = (undefined8 *)(*(long *)(lVar4 + 0xb8) + 8);
  *puVar7 = uVar9;
  thunk_FUN_02134474(puVar7,uVar9);
  uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
  uVar9 = 0;
  if ((uVar6 & 1) != 0) {
    lVar4 = *(long *)puVar3;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar3;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar4 == 0) goto LAB_0229f7a0;
    uVar9 = UnityEngine_Transform__Find_43d4bec(lVar4,*(undefined8 *)PTR_DAT_04cadc80,0);
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar3;
  }
  puVar7 = (undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
  *puVar7 = uVar9;
  thunk_FUN_02134474(puVar7,uVar9);
  uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
  if ((uVar6 & 1) == 0) {
    lVar4 = *(long *)puVar3;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar3;
    }
    uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar6 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
    if ((param_1 != 0) && ((uVar6 & 1) == 0)) {
      lVar4 = *(long *)puVar3;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar3;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar4 != 0) {
        uVar9 = UnityEngine_Component__get_gameObject_43bcde8(lVar4,0);
        uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar8,0,*(undefined8 *)PTR_DAT_04cae6f0,0);
        Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar9,uVar8,1,*(undefined8 *)PTR_DAT_04cad948,0);
        lVar4 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
        if (lVar4 != 0) {
          uVar9 = UnityEngine_Transform__Find_43d4bec(lVar4,*(undefined8 *)PTR_DAT_04cae6f8,0);
          puVar2 = PTR_DAT_04ca9d18;
          lVar10 = *(long *)PTR_DAT_04ca9d18;
          lVar4 = *(long *)(lVar10 + 0x38);
          if (lVar4 == 0) {
            FUN_0216b4cc(lVar10);
            lVar4 = *(long *)(lVar10 + 0x38);
          }
          lVar4 = *(long *)(lVar4 + 0x10);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0216b470();
          }
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar4 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0216b470();
          }
          uVar8 = **(undefined8 **)(lVar4 + 0xb8);
          if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
          }
          uVar8 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cae708,uVar8,0);
          Dino_BusSand_App_UI_ClimbTowerHallButton__SetTexts_219f7a4(uVar9,uVar8);
          lVar4 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
          if (lVar4 != 0) {
            uVar9 = UnityEngine_Transform__Find_43d4bec(lVar4,*(undefined8 *)PTR_DAT_04cae710,0);
            lVar10 = *(long *)puVar2;
            lVar4 = *(long *)(lVar10 + 0x38);
            if (lVar4 == 0) {
              FUN_0216b4cc(lVar10);
              lVar4 = *(long *)(lVar10 + 0x38);
            }
            lVar4 = *(long *)(lVar4 + 0x10);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_0216b470();
            }
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            lVar4 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_0216b470();
            }
            uVar8 = Dino_BusSand_App_Lang__Get_215f9c0
                              (*(undefined8 *)PTR_DAT_04cadcc8,**(undefined8 **)(lVar4 + 0xb8),0);
            Dino_BusSand_App_UI_ClimbTowerHallButton__SetTexts_219f7a4(uVar9,uVar8);
            Dino_BusSand_App_UI_ClimbTowerHallButton__UpdateState_219f894();
            lVar4 = Dino_BusSand_App_UI_ClimbTowerHallButton__CountDown_21a01bc();
            if (param_2 != 0) {
              uVar6 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_2,0,0);
              if ((uVar6 & 1) == 0) {
                return;
              }
              if (lVar4 == 0) {
                thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
                uVar8 = thunk_FUN_0216e89c();
                uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
                System_NullReferenceException___ctor_483267c(uVar8,uVar9,0);
              }
              else {
                uVar6 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
                if ((uVar6 & 1) != 0) {
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
                    (*pcRam0000000004fa8560)(lVar10,lVar4);
                    return;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                thunk_FUN_021985a8(PTR_DAT_04caa3a8);
                uVar8 = thunk_FUN_0216e89c();
                uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
                System_ArgumentException___ctor_47b660c(uVar8,uVar9,0);
              }
              uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
              FUN_021330e8(uVar8,uVar9);
            }
          }
        }
      }
LAB_0229f7a0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

