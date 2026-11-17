/* IL2CPP: Dino.BusSand.App.UI.CommonGetPanel$$RefreshTitle
void Dino_BusSand_App_UI_CommonGetPanel__RefreshTitle (Dino_BusSand_App_UI_CommonGetPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommonGetPanel$$RefreshTitle
   void Dino_BusSand_App_UI_CommonGetPanel__RefreshTitle (Dino_BusSand_App_UI_CommonGetPanel_o*
   __this, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_CommonGetPanel__RefreshTitle_22adac8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((bRam0000000004f9c2b7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb5f50);
    FUN_02132f7c(PTR_DAT_04cb5f58);
    FUN_02132f7c(PTR_DAT_04cb5f60);
    FUN_02132f7c(PTR_DAT_04cb5f68);
    FUN_02132f7c(PTR_DAT_04cb5f70);
    bRam0000000004f9c2b7 = 1;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
LAB_023add4c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar5 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18),0);
  puVar2 = PTR_DAT_04cb5f58;
  if ((uVar5 & 1) == 0) {
    if (*(long *)(param_1 + 0x38) != 0) {
      Dino_BusSand_App_UI_UIPanel__Show_21f4018
                (param_1,*(undefined8 *)PTR_DAT_04cb5f58,
                 *(int *)(*(long *)(param_1 + 0x38) + 0x28) == 0,0);
      puVar1 = PTR_DAT_04cb5f70;
      if (*(long *)(param_1 + 0x38) != 0) {
        Dino_BusSand_App_UI_UIPanel__Show_21f4018
                  (param_1,*(undefined8 *)PTR_DAT_04cb5f70,
                   *(int *)(*(long *)(param_1 + 0x38) + 0x28) == 1,0);
        puVar3 = PTR_DAT_04cb5f50;
        if (*(long *)(param_1 + 0x38) != 0) {
          Dino_BusSand_App_UI_UIPanel__Show_21f4018
                    (param_1,*(undefined8 *)PTR_DAT_04cb5f50,
                     *(int *)(*(long *)(param_1 + 0x38) + 0x28) == 2,0);
          if (*(long *)(param_1 + 0x38) != 0) {
            Dino_BusSand_App_UI_UIPanel__Txt_2200924
                      (param_1,*(undefined8 *)puVar2,
                       *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18),0);
            if (*(long *)(param_1 + 0x38) != 0) {
              Dino_BusSand_App_UI_UIPanel__Txt_2200924
                        (param_1,*(undefined8 *)puVar1,
                         *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18),0);
              lVar4 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar3,0);
              if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
              }
              uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
              if ((uVar5 & 1) == 0) {
                return uVar5;
              }
              if (lVar4 != 0) {
                uVar7 = UnityEngine_Transform__Find_43d4bec(lVar4,*(undefined8 *)PTR_DAT_04cb5f68,0)
                ;
                if (*(long *)(param_1 + 0x38) != 0) {
                  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18);
                  if (*(int *)(*(long *)PTR_DAT_04cac7b8 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  Dino_BusSand_App_UI_CommerceUi__SetText_22ac074(uVar7,uVar9);
                  uVar7 = UnityEngine_Transform__Find_43d4bec
                                    (lVar4,*(undefined8 *)PTR_DAT_04cb5f60,0);
                  puVar2 = PTR_DAT_04cac7b8;
                  if (*(long *)(param_1 + 0x38) != 0) {
                    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18);
                    if ((bRam0000000004f9c2aa & 1) == 0) {
                      FUN_02132f7c(PTR_DAT_04cac7b8);
                      FUN_02132f7c(PTR_DAT_04ca9ae8);
                      bRam0000000004f9c2aa = 1;
                    }
                    puVar1 = PTR_DAT_04ca9ae8;
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    plVar6 = (long *)Dino_BusSand_App_UI_CommerceUi__Tmp_22abf88(uVar7);
                    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                      thunk_FUN_0218fdac(*(long *)puVar1);
                    }
                    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(plVar6,0,0);
                    if ((uVar5 & 1) != 0) {
                      if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x023ac12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        uVar5 = (**(code **)(*plVar6 + 0x518))
                                          (plVar6,uVar9,*(undefined8 *)(*plVar6 + 0x520));
                        return uVar5;
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    return uVar5;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LAB_023add4c;
  }
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)PTR_DAT_04cb5f58,0,0);
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)PTR_DAT_04cb5f70,0,0);
  puVar2 = PTR_DAT_04ca9ae8;
  uVar7 = *(undefined8 *)PTR_DAT_04cb5f50;
  if ((bRam0000000004f9bc96 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,uVar7,0,0);
    bRam0000000004f9bc96 = 1;
  }
  lVar4 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,uVar7);
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar8);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
  if ((uVar5 & 1) != 0) {
    if ((lVar4 == 0) || (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar4,0), lVar8 == 0)
       ) goto LAB_022f4104;
    UnityEngine_GameObject__SetActive_43c1408(lVar8,0,0);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  if (lVar4 != 0) {
    if ((bRam0000000004fa8307 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7648,0);
      FUN_02132f7c(PTR_DAT_04cf7650);
      bRam0000000004fa8307 = 1;
    }
    puVar2 = PTR_DAT_04cf7650;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar8 = *(long *)(lVar4 + 0x10);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
    }
    if (pcRam0000000004fa8318 == (code *)0x0) {
      pcRam0000000004fa8318 = (code *)FUN_02132f40(&UNK_00e61486);
    }
    uVar5 = (*pcRam0000000004fa8318)(lVar8);
    lVar4 = *(long *)puVar2;
    if (*(long *)(lVar4 + 0x38) == 0) {
      FUN_0216b4cc(lVar4);
    }
    if (uVar5 != 0) {
      if (cRam0000000004f9d849 == '\0') {
        FUN_02132f7c(&DAT_04ddbd40);
        cRam0000000004f9d849 = '\x01';
      }
      if ((uVar5 & 1) == 0) {
        plVar6 = (long *)System_IntPtr__op_Explicit_487833c();
        lVar8 = *plVar6;
      }
      else {
        lVar8 = System_Runtime_InteropServices_GCHandle__GetTarget_476c7dc(uVar5,0);
      }
      lVar4 = **(long **)(lVar4 + 0x38);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0216b470(lVar4);
      }
      if (lVar8 != 0) {
        uVar5 = thunk_FUN_0216e7a0(lVar8,lVar4);
        if (uVar5 != 0) {
          return uVar5;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar8,lVar4);
      }
    }
    return 0;
  }
LAB_022f4104:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

