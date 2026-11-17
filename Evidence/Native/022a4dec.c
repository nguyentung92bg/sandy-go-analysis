/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$InitTime
void Dino_BusSand_App_UI_ClimbTowerPanel__InitTime (Dino_BusSand_App_UI_ClimbTowerPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$InitTime
   void Dino_BusSand_App_UI_ClimbTowerPanel__InitTime (Dino_BusSand_App_UI_ClimbTowerPanel_o*
   __this, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_ClimbTowerPanel__InitTime_21a4dec(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((bRam0000000004f9ba3e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cade40);
    FUN_02132f7c(PTR_DAT_04cadcc8);
    FUN_02132f7c(PTR_DAT_04cae920);
    bRam0000000004f9ba3e = 1;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
LAB_022a4f38:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar2 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_IsValid_2229654(*(long *)(param_1 + 0x38),0);
  if ((uVar2 & 1) != 0) {
    lVar3 = Dino_BusSand_App_UI_ClimbTowerPanel__CountDown_21a658c(param_1);
    uVar2 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0,0);
    if ((uVar2 & 1) == 0) {
      return uVar2;
    }
    if (lVar3 == 0) {
      thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
      uVar5 = thunk_FUN_0216e89c();
      uVar6 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
      System_NullReferenceException___ctor_483267c(uVar5,uVar6,0);
    }
    else {
      uVar2 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
      if ((uVar2 & 1) != 0) {
        if ((bRam0000000004fa84ef & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7890);
          bRam0000000004fa84ef = 1;
        }
        if (param_1 != 0) {
          lVar7 = *(long *)(param_1 + 0x10);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
          }
          if (pcRam0000000004fa8560 == (code *)0x0) {
            pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
          }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (*pcRam0000000004fa8560)(lVar7,lVar3);
          return uVar2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      thunk_FUN_021985a8(PTR_DAT_04caa3a8);
      uVar5 = thunk_FUN_0216e89c();
      uVar6 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
      System_ArgumentException___ctor_47b660c(uVar5,uVar6,0);
    }
    uVar6 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar5,uVar6);
  }
  lVar7 = *(long *)PTR_DAT_04ca9d18;
  lVar3 = *(long *)(lVar7 + 0x38);
  if (lVar3 == 0) {
    FUN_0216b4cc(lVar7);
    lVar3 = *(long *)(lVar7 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0216b470();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0216b470();
  }
  Dino_BusSand_App_UI_UIPanel__TxtKey_2200a70
            (param_1,*(undefined8 *)PTR_DAT_04cade40,*(undefined8 *)PTR_DAT_04cadcc8,
             **(undefined8 **)(lVar3 + 0xb8),0);
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_022a4f38;
  uVar2 = Dino_BusSand_App_Meta_ClimbTowerFeature__IsOldPeriodClaimDone_222a780
                    (*(long *)(param_1 + 0x38),0);
  puVar1 = PTR_DAT_04ca9ae8;
  if ((uVar2 & 1) == 0) {
    return uVar2;
  }
  uVar6 = *(undefined8 *)PTR_DAT_04cae920;
  if ((bRam0000000004f9bc96 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,uVar6,1,0);
    bRam0000000004f9bc96 = 1;
  }
  lVar3 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,uVar6);
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar7);
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if ((lVar3 == 0) || (lVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar3,0), lVar7 == 0)
       ) goto LAB_022f4104;
    UnityEngine_GameObject__SetActive_43c1408(lVar7,1,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (lVar3 != 0) {
    if ((bRam0000000004fa8307 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7648,0);
      FUN_02132f7c(PTR_DAT_04cf7650);
      bRam0000000004fa8307 = 1;
    }
    puVar1 = PTR_DAT_04cf7650;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar7 = *(long *)(lVar3 + 0x10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar3,0);
    }
    if (pcRam0000000004fa8318 == (code *)0x0) {
      pcRam0000000004fa8318 = (code *)FUN_02132f40(&UNK_00e61486);
    }
    uVar2 = (*pcRam0000000004fa8318)(lVar7);
    lVar3 = *(long *)puVar1;
    if (*(long *)(lVar3 + 0x38) == 0) {
      FUN_0216b4cc(lVar3);
    }
    if (uVar2 != 0) {
      if (cRam0000000004f9d849 == '\0') {
        FUN_02132f7c(&DAT_04ddbd40);
        cRam0000000004f9d849 = '\x01';
      }
      if ((uVar2 & 1) == 0) {
        plVar4 = (long *)System_IntPtr__op_Explicit_487833c();
        lVar7 = *plVar4;
      }
      else {
        lVar7 = System_Runtime_InteropServices_GCHandle__GetTarget_476c7dc(uVar2,0);
      }
      lVar3 = **(long **)(lVar3 + 0x38);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0216b470(lVar3);
      }
      if (lVar7 != 0) {
        uVar2 = thunk_FUN_0216e7a0(lVar7,lVar3);
        if (uVar2 != 0) {
          return uVar2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar7,lVar3);
      }
    }
    return 0;
  }
LAB_022f4104:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

