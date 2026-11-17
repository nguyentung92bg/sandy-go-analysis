/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel.<>c__DisplayClass22_0$$<SetItem>b__0
void Dino_BusSand_App_UI_StreakRatePanel___c__DisplayClass22_0___SetItem_b__0 (Dino_BusSand_App_UI_StreakRatePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel.<>c__DisplayClass22_0$$<SetItem>b__0
   void Dino_BusSand_App_UI_StreakRatePanel___c__DisplayClass22_0___SetItem_b__0
   (Dino_BusSand_App_UI_StreakRatePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
    */

ulong Dino_BusSand_App_UI_StreakRatePanel___c__DisplayClass22_0___SetItem_b__0_21e56d8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar1 = *(int *)(param_1 + 0x20);
  lVar11 = *(long *)(param_1 + 0x18);
  if ((bRam0000000004f9bbc4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0d40);
    bRam0000000004f9bbc4 = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if (iVar1 == 2) {
    uVar12 = *(undefined8 *)(lVar8 + 0x70);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar12,lVar11,0);
    uVar4 = uVar4 & 1;
  }
  else {
    uVar4 = 1;
  }
  puVar3 = PTR_DAT_04ca9ae8;
  if (uVar4 == 0) {
    lVar5 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar8,*(undefined8 *)PTR_DAT_04cb0d40,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
    if ((uVar7 & 1) != 0) {
      return uVar7;
    }
    *(long *)(lVar8 + 0x70) = lVar11;
    thunk_FUN_02134474((long *)(lVar8 + 0x70),lVar11);
    if (((lVar5 == 0) ||
        (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar5,0), lVar6 == 0)) ||
       (UnityEngine_GameObject__SetActive_43c1408(lVar6,1,0), lVar11 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Transform__get_position_43d0e48(lVar11,0);
    uVar12 = UnityEngine_Transform__set_position_43d0f1c(lVar5,0);
    lVar11 = Dino_BusSand_App_UI_StreakRatePanel__PopBubble_21e5300(uVar12,lVar5);
    uVar7 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(lVar8,0,0);
    if ((uVar7 & 1) == 0) {
      return uVar7;
    }
    if (lVar11 == 0) {
      thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
      uVar10 = thunk_FUN_0216e89c();
      uVar12 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
      System_NullReferenceException___ctor_483267c(uVar10,uVar12,0);
    }
    else {
      uVar7 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
      if ((uVar7 & 1) != 0) {
        if ((bRam0000000004fa84ef & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7890);
          bRam0000000004fa84ef = 1;
        }
        if (lVar8 != 0) {
          lVar5 = *(long *)(lVar8 + 0x10);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar8,0);
          }
          if (pcRam0000000004fa8560 == (code *)0x0) {
            pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
          }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar7 = (*pcRam0000000004fa8560)(lVar5,lVar11);
          return uVar7;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      thunk_FUN_021985a8(PTR_DAT_04caa3a8);
      uVar10 = thunk_FUN_0216e89c();
      uVar12 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
      System_ArgumentException___ctor_47b660c(uVar10,uVar12,0);
    }
    uVar12 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar10,uVar12);
  }
  if ((bRam0000000004f9bbc6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0d40);
    bRam0000000004f9bbc6 = 1;
  }
  uVar12 = *(undefined8 *)(lVar8 + 0x70);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar12,0,0);
  puVar2 = PTR_DAT_04cb0d40;
  if ((uVar7 & 1) != 0) {
    return uVar7;
  }
  *(undefined8 *)(lVar8 + 0x70) = 0;
  thunk_FUN_02134474((undefined8 *)(lVar8 + 0x70),0);
  puVar3 = PTR_DAT_04ca9ae8;
  uVar12 = *(undefined8 *)puVar2;
  if ((bRam0000000004f9bc96 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,uVar12,0,0);
    bRam0000000004f9bc96 = 1;
  }
  lVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar8,uVar12);
  lVar11 = *(long *)puVar3;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar11);
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
  if ((uVar7 & 1) != 0) {
    if ((lVar8 == 0) ||
       (lVar11 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0), lVar11 == 0))
    goto LAB_022f4104;
    UnityEngine_GameObject__SetActive_43c1408(lVar11,0,0);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  if (lVar8 != 0) {
    if ((bRam0000000004fa8307 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7648,0);
      FUN_02132f7c(PTR_DAT_04cf7650);
      bRam0000000004fa8307 = 1;
    }
    puVar2 = PTR_DAT_04cf7650;
    if (lVar8 != 0) {
      lVar11 = *(long *)(lVar8 + 0x10);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar8,0);
      }
      if (pcRam0000000004fa8318 == (code *)0x0) {
        pcRam0000000004fa8318 = (code *)FUN_02132f40(&UNK_00e61486);
      }
      uVar7 = (*pcRam0000000004fa8318)(lVar11);
      lVar8 = *(long *)puVar2;
      if (*(long *)(lVar8 + 0x38) == 0) {
        FUN_0216b4cc(lVar8);
      }
      if (uVar7 != 0) {
        if (cRam0000000004f9d849 == '\0') {
          FUN_02132f7c(&DAT_04ddbd40);
          cRam0000000004f9d849 = '\x01';
        }
        if ((uVar7 & 1) == 0) {
          plVar9 = (long *)System_IntPtr__op_Explicit_487833c();
          lVar11 = *plVar9;
        }
        else {
          lVar11 = System_Runtime_InteropServices_GCHandle__GetTarget_476c7dc(uVar7,0);
        }
        lVar8 = **(long **)(lVar8 + 0x38);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0216b470(lVar8);
        }
        if (lVar11 != 0) {
          uVar7 = thunk_FUN_0216e7a0(lVar11,lVar8);
          if (uVar7 != 0) {
            return uVar7;
          }
                    /* WARNING: Subroutine does not return */
          FUN_021335a4(lVar11,lVar8);
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

