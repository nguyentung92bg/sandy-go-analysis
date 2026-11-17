/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow$$Abort
void Dino_BusSand_App_UI_LevelEnterFlow__Abort (Dino_BusSand_App_UI_HudPanel_o* hud, int32_t run, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow$$Abort
   void Dino_BusSand_App_UI_LevelEnterFlow__Abort (Dino_BusSand_App_UI_HudPanel_o* hud, int32_t run,
   const MethodInfo* method); */

ulong Dino_BusSand_App_UI_LevelEnterFlow__Abort_233d0e4(long param_1,int param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04cacb20;
  if ((bRam0000000004f9c665 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacb20);
    FUN_02132f7c(PTR_DAT_04cad858);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad880);
    bRam0000000004f9c665 = 1;
  }
  uVar2 = *(ulong *)puVar1;
  if (*(int *)(uVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    uVar2 = *(ulong *)puVar1;
  }
  plVar5 = *(long **)(uVar2 + 0xb8);
  if (*(int *)((long)plVar5 + 0xc) != param_2) {
    return uVar2;
  }
  if (*(int *)(uVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    plVar5 = *(long **)(*(long *)puVar1 + 0xb8);
  }
  lVar6 = *plVar5;
  if (lVar6 == 0) {
LAB_0243d1f8:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar3 = *(long *)PTR_DAT_04ca9ae8;
  *(undefined4 *)(lVar6 + 0x18) = 0;
  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if ((uVar2 & 1) == 0) {
    return uVar2;
  }
  if (param_1 == 0) goto LAB_0243d1f8;
  uVar4 = *(undefined8 *)PTR_DAT_04cad880;
  if ((bRam0000000004f9bc96 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,uVar4,0,0);
    bRam0000000004f9bc96 = 1;
  }
  lVar6 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,uVar4);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar3);
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
  if ((uVar2 & 1) != 0) {
    if ((lVar6 == 0) || (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(lVar6,0), lVar3 == 0)
       ) goto LAB_022f4104;
    UnityEngine_GameObject__SetActive_43c1408(lVar3,0,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (lVar6 != 0) {
    if ((bRam0000000004fa8307 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7648,0);
      FUN_02132f7c(PTR_DAT_04cf7650);
      bRam0000000004fa8307 = 1;
    }
    puVar1 = PTR_DAT_04cf7650;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar3 = *(long *)(lVar6 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar6,0);
    }
    if (pcRam0000000004fa8318 == (code *)0x0) {
      pcRam0000000004fa8318 = (code *)FUN_02132f40(&UNK_00e61486);
    }
    uVar2 = (*pcRam0000000004fa8318)(lVar3);
    lVar6 = *(long *)puVar1;
    if (*(long *)(lVar6 + 0x38) == 0) {
      FUN_0216b4cc(lVar6);
    }
    if (uVar2 != 0) {
      if (cRam0000000004f9d849 == '\0') {
        FUN_02132f7c(&DAT_04ddbd40);
        cRam0000000004f9d849 = '\x01';
      }
      if ((uVar2 & 1) == 0) {
        plVar5 = (long *)System_IntPtr__op_Explicit_487833c();
        lVar3 = *plVar5;
      }
      else {
        lVar3 = System_Runtime_InteropServices_GCHandle__GetTarget_476c7dc(uVar2,0);
      }
      lVar6 = **(long **)(lVar6 + 0x38);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0216b470(lVar6);
      }
      if (lVar3 != 0) {
        uVar2 = thunk_FUN_0216e7a0(lVar3,lVar6);
        if (uVar2 != 0) {
          return uVar2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar3,lVar6);
      }
    }
    return 0;
  }
LAB_022f4104:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

