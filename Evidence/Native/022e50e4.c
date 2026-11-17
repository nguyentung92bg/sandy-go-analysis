/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel$$OnItemClicked
void Dino_BusSand_App_UI_StreakRatePanel__OnItemClicked (Dino_BusSand_App_UI_StreakRatePanel_o* __this, UnityEngine_Transform_o* item, int32_t state, bool forceClose, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel$$OnItemClicked
   void Dino_BusSand_App_UI_StreakRatePanel__OnItemClicked (Dino_BusSand_App_UI_StreakRatePanel_o*
   __this, UnityEngine_Transform_o* item, int32_t state, bool forceClose, const MethodInfo* method);
    */

ulong Dino_BusSand_App_UI_StreakRatePanel__OnItemClicked_21e50e4
                (long param_1,long param_2,int param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((bRam0000000004f9bbc4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0d40);
    bRam0000000004f9bbc4 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (param_3 == 2) {
    uVar9 = *(undefined8 *)(param_1 + 0x70);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar9,param_2,0);
    uVar3 = uVar3 & 1;
  }
  else {
    uVar3 = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if (uVar3 == 0 && (param_4 & 1) == 0) {
    lVar5 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cb0d40,0);
                    /* try { // try from 022e51a4 to 023e5237 has its CatchHandler @ 022e5a8c */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
    if ((uVar4 & 1) != 0) {
      return uVar4;
    }
    *(long *)(param_1 + 0x70) = param_2;
    thunk_FUN_02134474((long *)(param_1 + 0x70),param_2);
    if (((lVar5 == 0) ||
        (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar5,0), lVar8 == 0)) ||
       (UnityEngine_GameObject__SetActive_43c1408(lVar8,1,0), param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Transform__get_position_43d0e48(param_2,0);
    uVar9 = UnityEngine_Transform__set_position_43d0f1c(lVar5,0);
    lVar5 = Dino_BusSand_App_UI_StreakRatePanel__PopBubble_21e5300(uVar9,lVar5);
    uVar4 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0,0);
    if ((uVar4 & 1) == 0) {
      return uVar4;
    }
    if (lVar5 == 0) {
      thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
      uVar7 = thunk_FUN_0216e89c();
      uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
      System_NullReferenceException___ctor_483267c(uVar7,uVar9,0);
    }
    else {
      uVar4 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
      if ((uVar4 & 1) != 0) {
        if ((bRam0000000004fa84ef & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7890);
          bRam0000000004fa84ef = 1;
        }
        if (param_1 != 0) {
          lVar8 = *(long *)(param_1 + 0x10);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
          }
          if (pcRam0000000004fa8560 == (code *)0x0) {
            pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
          }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (*pcRam0000000004fa8560)(lVar8,lVar5);
          return uVar4;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      thunk_FUN_021985a8(PTR_DAT_04caa3a8);
      uVar7 = thunk_FUN_0216e89c();
      uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
      System_ArgumentException___ctor_47b660c(uVar7,uVar9,0);
    }
    uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar7,uVar9);
  }
  if ((bRam0000000004f9bbc6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0d40);
    bRam0000000004f9bbc6 = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x70);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
  puVar1 = PTR_DAT_04cb0d40;
  if ((uVar4 & 1) != 0) {
    return uVar4;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x70),0);
  puVar2 = PTR_DAT_04ca9ae8;
  uVar9 = *(undefined8 *)puVar1;
  if ((bRam0000000004f9bc96 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,uVar9,0,0);
    bRam0000000004f9bc96 = 1;
  }
  lVar5 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,uVar9);
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar8);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
  if ((uVar4 & 1) != 0) {
    if ((lVar5 == 0) || (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar5,0), lVar8 == 0)
       ) goto LAB_022f4104;
    UnityEngine_GameObject__SetActive_43c1408(lVar8,0,0);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if (lVar5 != 0) {
    if ((bRam0000000004fa8307 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7648,0);
      FUN_02132f7c(PTR_DAT_04cf7650);
      bRam0000000004fa8307 = 1;
    }
    puVar1 = PTR_DAT_04cf7650;
    if (lVar5 != 0) {
      lVar8 = *(long *)(lVar5 + 0x10);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar5,0);
      }
      if (pcRam0000000004fa8318 == (code *)0x0) {
        pcRam0000000004fa8318 = (code *)FUN_02132f40(&UNK_00e61486);
      }
      uVar4 = (*pcRam0000000004fa8318)(lVar8);
      lVar5 = *(long *)puVar1;
      if (*(long *)(lVar5 + 0x38) == 0) {
        FUN_0216b4cc(lVar5);
      }
      if (uVar4 != 0) {
        if (cRam0000000004f9d849 == '\0') {
          FUN_02132f7c(&DAT_04ddbd40);
          cRam0000000004f9d849 = '\x01';
        }
        if ((uVar4 & 1) == 0) {
          plVar6 = (long *)System_IntPtr__op_Explicit_487833c();
          lVar8 = *plVar6;
        }
        else {
          lVar8 = System_Runtime_InteropServices_GCHandle__GetTarget_476c7dc(uVar4,0);
        }
        lVar5 = **(long **)(lVar5 + 0x38);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0216b470(lVar5);
        }
        if (lVar8 != 0) {
          uVar4 = thunk_FUN_0216e7a0(lVar8,lVar5);
          if (uVar4 != 0) {
            return uVar4;
          }
                    /* WARNING: Subroutine does not return */
          FUN_021335a4(lVar8,lVar5);
        }
      }
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_022f4104:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

